'''
This script generates RPM packages for custom applications built using NX-SDK.
For more information, please run the script with -h option.
'''

import os, subprocess
import os, subprocess
import argparse
import sys
import shutil

# Export environment
env_file = "/enxos-sdk/environment-setup-x86-wrsmllib32-linux"
output = subprocess.Popen(". " + env_file + ";env", stdout=subprocess.PIPE, shell=True).communicate()[0]
env = dict((line.split("=", 1) for line in output.splitlines()))
os.environ.update(env)

# Paths
if "NXSDK_ROOT" in os.environ:
	nxsdk_path = os.environ["NXSDK_ROOT"]
else:
	nxsdk_path = "/NX-SDK"

rpm_root = "/enxos-sdk/sysroots/x86_64-wrlinuxsdk-linux/usr/src/rpm"

# Default values for arguments
default_app_source = nxsdk_path + "/examples"
default_app_desc="Sample description"
default_app_target = nxsdk_path + "/bin"
default_rel_version = "7.0.3.I6.1"

# Spec file parameters
custom_spec_file_path = nxsdk_path + "/scripts/template.spec"
app_name_str = "APP_NAME"
app_source_str = "APP_SOURCE"
app_target_str = "APP_TARGET"
app_desc_str = "APP_DESC"
release_version_str = "RELEASE_VER"
spec_file_params = {}

# Help string

help_string = "This script generates RPM packages for custom applications built using NX-SDK.\
Please export the path for NX-SDK as environment variale NXSDK_ROOT before calling the script.\
If not found, the script assumes NX-SDK to be present at the following location /NX-SDK"

def build_rpm(spec_file_path):
	os.environ["RPM_ROOT"] = rpm_root
	os.system("rpm -ba " + spec_file_path)
	rpm_file_path = rpm_root + "/RPMS/x86_64/" + spec_file_params[app_name_str] + "-1.0-" + \
		spec_file_params[release_version_str] + ".x86_64.rpm"
	return rpm_file_path


def copy_files(spec_file_path, rpm_file_path):
	rpm_dest = nxsdk_path + "/rpm/RPMS/"
	shutil.copy(rpm_file_path, rpm_dest)
	spec_file_dest = nxsdk_path + "/rpm/SPECS/"
	shutil.copy(spec_file_path, spec_file_dest)
	print "\nSPEC file: " + spec_file_dest + os.path.basename(spec_file_path)
	print "RPM file : " + rpm_dest + os.path.basename(rpm_file_path)


def write_spec():
	spec_file_path = rpm_root + "/SPECS/" + spec_file_params[app_name_str] + ".spec"

	spec_file = open(spec_file_path, 'w')
	for macro in spec_file_params:
		line = "%define " + macro + " " + spec_file_params[macro] + "\n"
		spec_file.write(line)
	custom_spec_file = open(custom_spec_file_path, 'r')
	lines = custom_spec_file.readlines()
	spec_file.writelines(lines)
	return spec_file_path


def main():
	parser = argparse.ArgumentParser(formatter_class=argparse.ArgumentDefaultsHelpFormatter, description=help_string)
	parser.add_argument("name", help="Name of the application binary or the file name in case of python")
	parser.add_argument("-s", "--source", default=default_app_source,
		help="Path of the folder where application source files are present")

	group = parser.add_mutually_exclusive_group()
	group.add_argument("-u", "--use_source_as_target", action = "store_true", default= False,
		help="If the source file is the same as the executable")
	group.add_argument("-t", "--target", default=default_app_target,
		help="Path where the application binary or the python file is present")

	parser.add_argument("-d", "--description", default=default_app_desc,
		help="Application Description")
	parser.add_argument("-v", "--version", default=default_rel_version,
		help="Release version of NXOS")

	args = parser.parse_args()

	if not args.use_source_as_target:
		target = args.target + "/" + args.name
	else:
		target = args.source + "/" + args.name

	if not os.path.isfile(target):
		parser.print_help()
		sys.exit("Target " + target + " not found")

	spec_file_params[app_name_str] = args.name
	spec_file_params[app_desc_str] = args.description
	spec_file_params[app_source_str] = args.source
	spec_file_params[app_target_str] = args.target
	spec_file_params[release_version_str] = args.version

	print "#"*100
	print "Generating rpm package..."
	spec_file_path = write_spec()
	rpm_file_path = build_rpm(spec_file_path)
	print "RPM package has been built"
	print "#"*100
	copy_files(spec_file_path, rpm_file_path)

main()
/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: ../infra/nxsdk/swig_interfaces/go/src/nx_sdk_go/nx_sdk_go.i

#ifndef SWIG_nx_sdk_go_WRAP_H_
#define SWIG_nx_sdk_go_WRAP_H_

class Swig_memory;

class SwigDirector_NxCmdHandler : public nxos::NxCmdHandler
{
 public:
  SwigDirector_NxCmdHandler(int swig_p);
  virtual ~SwigDirector_NxCmdHandler();
  bool _swig_upcall_postCliCb(nxos::NxCliCmd *cmd) {
    return nxos::NxCmdHandler::postCliCb(cmd);
  }
  virtual bool postCliCb(nxos::NxCliCmd *cmd);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_NxRibMgrHandler : public nxos::NxRibMgrHandler
{
 public:
  SwigDirector_NxRibMgrHandler(int swig_p);
  virtual ~SwigDirector_NxRibMgrHandler();
  bool _swig_upcall_postL3RouteCb(nxos::NxL3Route *route) {
    return nxos::NxRibMgrHandler::postL3RouteCb(route);
  }
  virtual bool postL3RouteCb(nxos::NxL3Route *route);
  bool _swig_upcall_postVrfCb(nxos::NxVrf *vrf) {
    return nxos::NxRibMgrHandler::postVrfCb(vrf);
  }
  virtual bool postVrfCb(nxos::NxVrf *vrf);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_NxIntfMgrHandler : public nxos::NxIntfMgrHandler
{
 public:
  SwigDirector_NxIntfMgrHandler(int swig_p);
  virtual ~SwigDirector_NxIntfMgrHandler();
  bool _swig_upcall_postIntfAddDelCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfAddDelCb(obj);
  }
  virtual bool postIntfAddDelCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfIpv4AddrCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfIpv4AddrCb(obj);
  }
  virtual bool postIntfIpv4AddrCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfIpv6AddrCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfIpv6AddrCb(obj);
  }
  virtual bool postIntfIpv6AddrCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfStateCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfStateCb(obj);
  }
  virtual bool postIntfStateCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfLayerCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfLayerCb(obj);
  }
  virtual bool postIntfLayerCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfPortMemberCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfPortMemberCb(obj);
  }
  virtual bool postIntfPortMemberCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfVrfCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfVrfCb(obj);
  }
  virtual bool postIntfVrfCb(nxos::NxIntf *obj);
  bool _swig_upcall_postIntfVlanCb(nxos::NxIntf *obj) {
    return nxos::NxIntfMgrHandler::postIntfVlanCb(obj);
  }
  virtual bool postIntfVlanCb(nxos::NxIntf *obj);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_NxDmeMgrHandler : public nxos::NxDmeMgrHandler
{
 public:
  SwigDirector_NxDmeMgrHandler(int swig_p);
  virtual ~SwigDirector_NxDmeMgrHandler();
  void _swig_upcall_postDmeHandlerCb(nxos::NxDme *objp) {
    nxos::NxDmeMgrHandler::postDmeHandlerCb(objp);
  }
  virtual void postDmeHandlerCb(nxos::NxDme *objp);
  void _swig_upcall_postDmeHandlerDownloadDoneCb(std::string const &dn) {
    nxos::NxDmeMgrHandler::postDmeHandlerDownloadDoneCb(dn);
  }
  virtual void postDmeHandlerDownloadDoneCb(std::string const &dn);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_NxAdjMgrHandler : public nxos::NxAdjMgrHandler
{
 public:
  SwigDirector_NxAdjMgrHandler(int swig_p);
  virtual ~SwigDirector_NxAdjMgrHandler();
  void _swig_upcall_postAdjCb(nxos::NxAdj *adj_obj) {
    nxos::NxAdjMgrHandler::postAdjCb(adj_obj);
  }
  virtual void postAdjCb(nxos::NxAdj *adj_obj);
  void _swig_upcall_postAdjIPv4DownloadDone(std::string const &intfName, std::string const &ipv4_addr) {
    nxos::NxAdjMgrHandler::postAdjIPv4DownloadDone(intfName,ipv4_addr);
  }
  virtual void postAdjIPv4DownloadDone(std::string const &intfName, std::string const &ipv4_addr);
  void _swig_upcall_postAdjIPv6DownloadDone(std::string const &intfName, std::string const &ipv6_addr) {
    nxos::NxAdjMgrHandler::postAdjIPv6DownloadDone(intfName,ipv6_addr);
  }
  virtual void postAdjIPv6DownloadDone(std::string const &intfName, std::string const &ipv6_addr);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_NxMacMgrHandler : public nxos::NxMacMgrHandler
{
 public:
  SwigDirector_NxMacMgrHandler(int swig_p);
  virtual ~SwigDirector_NxMacMgrHandler();
  bool _swig_upcall_postMacHandlerCb(nxos::NxMac *mac_obj) {
    return nxos::NxMacMgrHandler::postMacHandlerCb(mac_obj);
  }
  virtual bool postMacHandlerCb(nxos::NxMac *mac_obj);
  void _swig_upcall_postMacHandlerDownloadCb(unsigned int id, std::string const &macaddr) {
    nxos::NxMacMgrHandler::postMacHandlerDownloadCb(id,macaddr);
  }
  virtual void postMacHandlerDownloadCb(unsigned int id, std::string const &macaddr);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

#endif

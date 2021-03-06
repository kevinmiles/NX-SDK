- [NX-SDK Utility Applications](#nx-sdk-utility-applications)
- [NX-SDK Interface Template and Usage Applications](#nx-sdk-interface-template-and-usage-applications)
  
NOTE: Click on the App for source code & detailed description. Application RPMs are located at [rpm/RPMS](../rpm/RPMS).
  
# NX-SDK Utility Applications

| Application | Version | Language | Description | 
| --- | --- | --- | --- | 
|<b>featureMonitor</b> | v1.7.5 | <ul><li>[Python](python/featureMonitorPy)</li><li>[C++](c++/featureMonitor.cpp)</li><li>[Go](go/src/featureMonitorGo/featureMonitorGo.go)</ul> | Application to track switch feature enablement/disablement. |
|<b>[silentHostDiscovery](python/silentHostDiscovery)</b> | v1.7.5 | Python | Application to discover directly connected silent hosts. |
|<b>[healthMonitor](python/healthMonitor)</b> | v1.5.0 | Python | Computes & Monitors Health Score for various factors on a given switch. |
|<b><a href="https://github.com/ChristopherJHart/NX-SDK/tree/master/ip_move">ip_move</a></b>| v1.5.0 | Python | Tracking IP Movement Across Interfaces|
|<b><a href="https://github.com/ndelecro/Nexus-9K-Programmability/tree/master/NX-SDK/ECMP_Monitoring">ecmp_monitoring</a></b> | v1.5.0 | Python | ECMP Monitoring Application |
|<b>[routeTracker](python/routeTracker)</b> | v1.5.0 | Python | <ul><li>Track, Collect & Maintain history of interested route events as time series data.</li><li>Stream this time series data using streaming telemetry.</li></ul> |
|<b>[healthMonitor](python/healthMonitor)</b> | v1.5.0 | Python | Computes & Monitors Health Score for various factors on a given switch. |
|<b><a href="https://github.com/ndelecro/nx-os-programmability/blob/master/NX-SDK/Storm_Persistent_Monitoring/storm.py">Storm Control Persistence Protection</a></b>| v1.0.0 | Python | <ui><li>Periodically check and record the traffic storm condition on all interfaces. </li><li>If the traffic storm persists on an interface after a given period of time, then shut it down.</li></ul>|
|<b><a href="https://github.com/ndelecro/nx-os-programmability/tree/master/NX-SDK/FEX_Pre_Provisioning">Fex Pre-Provisioning</a></b>| v1.0.0 | Python | Nexus 9K NX-SDK app for FEX Pre-Provisioning |
|<b>[pbwMonitor](python/pbwMonitor)</b>| v1.0.0 | Python | Port Bandwidth Utilization Monitor |
|<b>[tmCfgBot](python/tmCfgBot)</b> | v1.0.0 | Python | <ul><li>Telemetry Config helper Bot application.</li><li>To automatically configure & manage multiple telemetry path configs per given instance.</li><li> For Ex) "tmCfgBot apply-inst evpn default-template". tmCfgBot automatically configures & manages telemetry path configs to be streamed out for EVPN instance. Use, "show tmCfgBot default-instance" to show all the paths and instances managed by the app. </li></ul> |
|<b><a href="https://github.com/ndelecro/Nexus-9K-Programmability/tree/master/NX-SDK/PTP_Monitoring">ptpMonitoring</a></b>| v1.0.0 | Python| PTP Monitor Application |

# NX-SDK Interface Template and Usage Applications

 - Template and Usage Applications provide skeleton source code in different languages showcasing how to use various NX-SDK Interfaces.
 - Refer to API documentation for more usage details. 
 
| NX-SDK Interface | App/Language | Description | 
| --- | --- | --- |
| Custom Cli (NxCliParser) & syslog (NxTracer)| <ul><li>[customCliApp.cpp](c++/customCliApp.cpp) - C++ (v1.0.0) </li><li>[customCliPyApp](python/customCliPyApp) - Python (v1.0.0)</li><li>[customCliGoApp](go/src/customCliGoApp) - Go (v1.7.5)</li></ul> | Showcasing how to generate Custom [CLIs](../include/nx_cli.h) and [syslogs](../include/nx_trace.h).|
| NxRibMgr| <ul><li>[ribMgrGo](go/src/ribMgrGo) - Go (v.1.7.5) </li></ul> | Showcasing how to get routes and register for route updates. Refer to [nx_rib_mgr.h](../include/nx_rib_mgr.h) |
| NxIntfMgr | <ul><li>[intfMonitor.cpp](c++/intfMonitor.cpp) - C++ (V1.7.5) </li><li>[intfMonitorPy](python/intfMonitorPy) - Python (v1.7.5)</ul> | Showcasing how to get, update and register for interface events. Refer to [nx_intf_mgr.h](../include/nx_intf_mgr.h) |
| NxMacMgr | <ul><li>[macTracker](python/macTracker) - Python (V1.7.5) </li></ul> | Showcasing how to get, update and register for Mac events. Refer to [nx_mac_mgr.h](../include/nx_mac_mgr.h) |
| NxAdjMgr | <ul><li>[neighbourApp](python/neighbourApp) - Python (V1.7.5) </li></ul> | Showcasing how to get, update and register for adjacency events. Refer to [nx_adj_mgr.h](../include/nx_adj_mgr.h)|

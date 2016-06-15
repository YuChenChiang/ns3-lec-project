#Project 2
============
##Topology
###Topology of ns3-lec2-project2-1
Number of wifi or csma nodes can be increased up to 250<br>
//Wifi 10.1.3.0 <br>
//                    AP <br>
//*    *    *    *    *  <br>
//|    |    |    |    |    10.1.1.0 <br>
//n8   n5   n6   n7   n0 --------------  n1   n2   n3   n4 <br>
//                       point-to-point  |    |    |    |  <br>
//                                       ================  <br>
//                                       LAN 10.1.2.0      <br>
###Topology of ns3-lec2-project2-2
//                                 10.1.1.0 <br>
//  n5   n6   n7   n8   n9   n0 --------------  n1   n2   n3   n4 <br>
//  |    |    |    |    |    |  point-to-point  |    |    |    |  <br>
//  ===========================                 ================  <br>
//       LAN1 10.1.3.0                            LAN2 10.1.2.0   <br>
##The communication between client and server
![](http://ww3.sinaimg.cn/large/a6fc0778gw1f4waiczqnoj20kf0c77ch.jpg)
![](http://ww2.sinaimg.cn/large/a6fc0778gw1f4waie97k7j20kd0c7qb4.jpg)
##Code of the STA mobility model
![](http://ww3.sinaimg.cn/large/a6fc0778gw1f4waidb2h8j20hl01gaae.jpg)
##TraceFile
The tracefiles are in the ns3-lec2-project2-tracefiles.tar.gz

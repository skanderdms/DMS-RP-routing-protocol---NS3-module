/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2019 DMS
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Some functions are taken from NS-3 AODV model implemented by Elena Buchatskaia and Pavel Boyko
 *
 * Authors: Mohamed Skander DAAS <daas.skander@umc.edu.dz>
 *          Salim CHIKHI <slchikhi@yahoo.com>
 */

#include <fstream>
#include <iostream>
#include <math.h>
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/mobility-module.h"
#include "ns3/wifi-module.h"
#include "ns3/dmsrp-module.h"
#include "ns3/olsr-module.h"
#include "ns3/dsdv-module.h"
#include "ns3/aodv-module.h"
#include "ns3/dsr-module.h"
#include "ns3/applications-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/netanim-module.h"
#include "ns3/flow-monitor-module.h"
#include "ns3/energy-module.h"


using namespace ns3;
using namespace dsr;

NS_LOG_COMPONENT_DEFINE ("manet-routing-compare");

void DepletionDetected (void);
class RoutingExperiment
{
public:
  RoutingExperiment ();
  void Run ();
  //static void SetMACParam (ns3::NetDeviceContainer & devices,
  //                                 int slotDistance);
  std::string CommandSetup (int argc, char **argv);


private:




};

//--------Names parameters----------------------------------

std::string m_fileFlowMonName="FlowMon";
std::string m_fileEnergy="Energy";
std::string m_fileName="manet-routing.output.csv";
std::string m_protocolName= "protocol";
std::string tr_name ("manet-routing-compare");

//--------Mobility and Psitions parameters----------------------------------
int m_nodeSpeed = 19.99;                           // Speed of nodes (m/s)
int m_nodePause = 0;                            // pause time (seconds)
bool m_enbleMobility=false;                     //

//--------Topology parameters----------------------------------

// The positions of the first line and the first column empty excet for position (0,0) destinated for the server
// ==> (positions (1:x,0) and (0,1:y) are not used )
//(number of wifi nodes is "x_positions-1"*"y_positions-1")
// the first wifi node position should have cordinates (1,1) and so on
// The area topology gride size is a rectangle of wide="x_positions-1"*m_segment_size and lenth="y_positions-1"*m_segment_size
uint32_t x_positions=10+1;                       // Number of x positions of the grid 
uint32_t y_positions=10+1;                       // Number of y positions of the grid
bool m_randomPositions=false;                   // false ==> using grid with a given line segement size
double m_segment_size=99;                      // The distance between two lines of the grid (meters)

//--------Nodes parameters----------------------------------

uint32_t m_simulationID = 0;
uint32_t m_simulationRep = 4;
uint32_t m_mode = 3;                            // SNR_AWARE_MULTI_PARENT_MODE
uint32_t m_nSinks = 3;
uint32_t m_nWifiNodes = (x_positions-1)*(y_positions-1);//Number of wifi nodes. To be adapted and fill a grid of (x-1)*(y-1) wifi nodes positions 
uint32_t m_protocol=2;

//--------Application parameters----------------------------------

uint32_t m_port=9;
uint32_t m_packetSize = 64;                     // Packet size (bytes)
double m_interval = 1;                          // Interval between two transmited packets (sencends)
uint32_t m_maxPackets = 1000000;                 // Maximum number of transmitted packets (100000=>unlimited)
double m_totalTime = 200.2;                     // Total time of the simulation (seconds)
double m_SRVstartTime = 5;                      // Start time of server application instaled in wifi nodes (seconds)
double m_CLIENTstartTime = 50;                  // Start time of client application instaled in wifi nodes (seconds)
double m_SRVstopTime = m_totalTime-1;           // Stop time of server application instaled in wifi nodes (seconds)
double m_CLIENTstopTime = m_totalTime-20;      // Stop time of client application instaled in wifi nodes (seconds)

//--------Transmossion parameters----------------------------------

std::string m_rate ("10000Mbps");                  //
std::string m_phyMode ("DsssRate11Mbps");       //
double  m_txp = 7.5;                            //

//--------Energy parameters----------------------------------

double m_initEnergy = 200000;                   // Initial energy of node batery, 200000=>unlimited (joules) 
double m_remainingEnergy = 0;

//--------other parameters----------------------------------
bool m_depletionDetected=false;
Time m_lifeTime = Seconds(9999999);

void
DepletionDetected ()
{
        if(!m_depletionDetected)
        {
            m_depletionDetected=true;
            m_lifeTime=Simulator::Now ();
            NS_LOG_UNCOND ("deplition XWXWXWXWXWXWXWXWXWXWXWXWXWXWXWXW: "<<m_lifeTime);       
        }
}


RoutingExperiment::RoutingExperiment ()
{
}



std::string
RoutingExperiment::CommandSetup (int argc, char **argv)
{
  CommandLine cmd;



  cmd.AddValue ("simulationID", "ID", m_simulationID);
  cmd.AddValue ("simulationRep", "Rep", m_simulationRep);
  cmd.AddValue ("protocol", "xxxxxxxxxxxxxxxxxxxx", m_protocol);
  cmd.AddValue ("mode", "xxxxxxxxxxxxxxxxxxxx", m_mode);
  cmd.AddValue ("nSinks", "xxxxxxxxxxxxxxxxxxxx", m_nSinks);
  cmd.AddValue ("enbleMobility", "xxxxxxxxxxxxxxxxxxxx", m_enbleMobility);
  cmd.AddValue ("randomPositions", "xxxxxxxxxxxxxxxxxxxx", m_randomPositions);
  cmd.AddValue ("x_positions", "xxxxxxxxxxxxxxxxxxxx", x_positions);
  cmd.AddValue ("y_positions", "xxxxxxxxxxxxxxxxxxxx", y_positions);
  cmd.AddValue ("segment_size", "xxxxxxxxxxxxxxxxxxxx", m_segment_size);
  cmd.AddValue ("nWifiNodes", "xxxxxxxxxxxxxxxxxxxx", m_nWifiNodes);
  cmd.AddValue ("nodeSpeed", "xxxxxxxxxxxxxxxxxxxx", m_nodeSpeed);
  cmd.AddValue ("initEnergy", "xxxxxxxxxxxxxxxxxxxx", m_initEnergy);
  cmd.AddValue ("totalTime", "xxxxxxxxxxxxxxxxxxxx", m_totalTime);
  cmd.AddValue ("fileName", "The name of the output file", m_fileName);

  cmd.Parse (argc, argv);
  return m_fileName;
}


//

int
main (int argc, char *argv[])
{


  RoutingExperiment experiment;
  std::string CSVfileName = experiment.CommandSetup (argc,argv);
RngSeedManager::SetRun(1);
RngSeedManager::SetSeed(m_simulationRep);


                    NS_LOG_UNCOND ("CONFIGURATION: "<<" m_simulationID "<<m_simulationID<< "m_simulationRep"<< m_simulationRep<<" m_protocol "<<m_protocol<<" m_mode "<<m_mode<<" m_nSinks "<<m_nSinks<<" m_enbleMobility "<<m_enbleMobility<<" m_randomPositions "<<m_randomPositions<<" m_nWifiNodes "<<m_nWifiNodes<<" x_positions "<<x_positions<<" y_positions "<<y_positions<<" m_segment_size "<<m_segment_size<<" m_nodeSpeed "<<m_nodeSpeed<<" m_initEnergy "<<m_initEnergy);
m_fileFlowMonName=m_fileFlowMonName+" ID "+std::to_string(m_simulationID )+" Rep "+std::to_string(m_simulationRep )+" prot "+std::to_string(m_protocol )+" mode "+std::to_string( m_mode)+" Sinks "+std::to_string( m_nSinks)+" Mob "+std::to_string(m_enbleMobility )+" randPos "+std::to_string( m_randomPositions)+" wifiNodes "+std::to_string(m_nWifiNodes )+" xpos "+std::to_string(x_positions )+" ypos "+std::to_string( y_positions)+" seg_size "+std::to_string( m_segment_size)+" Speed "+std::to_string(m_nodeSpeed )+" initEngy "+std::to_string(m_initEnergy );

m_fileEnergy=m_fileEnergy+" ID "+std::to_string(m_simulationID )+" Rep "+std::to_string(m_simulationRep )+" prot "+std::to_string(m_protocol )+" mode "+std::to_string( m_mode)+" Sinks "+std::to_string( m_nSinks)+" Mob "+std::to_string(m_enbleMobility )+" randPos "+std::to_string( m_randomPositions)+" wifiNodes "+std::to_string(m_nWifiNodes )+" xpos "+std::to_string(x_positions )+" ypos "+std::to_string( y_positions)+" seg_size "+std::to_string( m_segment_size)+" Speed "+std::to_string(m_nodeSpeed )+" initEngy "+std::to_string(m_initEnergy );





  //blank out the last output file and write the column headers
  std::ofstream out (CSVfileName.c_str ());
NS_LOG_UNCOND ("INITIAL ENERGY IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIS: "<<m_fileFlowMonName);

  out << "SimulationSecond," <<
  "ReceiveRate," <<
  "NumberOfSinks," <<
  "RoutingProtocol," <<
  "TransmissionPower" <<
  std::endl;
  out.close ();
  experiment.Run ();
}




void
RoutingExperiment::Run ()
{
  Packet::EnablePrinting ();

Ptr<UniformRandomVariable>   m_uniformRandomVariable = CreateObject<UniformRandomVariable> ();
double rand;
uint32_t rand_x;
uint32_t rand_y;



  //Set Non-unicastMode rate to unicast mode
  Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode",StringValue (m_phyMode));

 //Config::SetDefault  ("ns3::RangePropagationLossModel::MaxRange",DoubleValue (300)); //dms

  NodeContainer adhocNodes;
if(m_protocol==2)
{
  adhocNodes.Create (m_nWifiNodes+1);
}
else
{
  m_nSinks=0;
  adhocNodes.Create (m_nWifiNodes);
}
//NodeContainer adhocMobileNodes;

  // setting up wifi phy and channel using helpers
  WifiHelper wifi;
  wifi.SetStandard (WIFI_PHY_STANDARD_80211b);

  YansWifiPhyHelper wifiPhy =  YansWifiPhyHelper::Default ();
  YansWifiChannelHelper wifiChannel;
  wifiChannel.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
 //wifiChannel.AddPropagationLoss ("ns3::TwoRayGroundPropagationLossModel");
  wifiChannel.AddPropagationLoss ("ns3::FriisPropagationLossModel");
 // wifiChannel.AddPropagationLoss ("ns3::RangePropagationLossModel"); //dms
    // dms
  wifiPhy.SetChannel (wifiChannel.Create ());

  // Add a mac and disable rate control
  WifiMacHelper wifiMac;
  wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (m_phyMode),
                                "ControlMode",StringValue (m_phyMode));

  wifiPhy.Set ("TxPowerStart",DoubleValue (m_txp));
  wifiPhy.Set ("TxPowerEnd", DoubleValue (m_txp));

  wifiMac.SetType ("ns3::AdhocWifiMac");
//  NetDeviceContainer adhocDevices = wifi.Install (wifiPhy, wifiMac, adhocNodes);



NS_LOG_UNCOND("Code1");


         NetDeviceContainer wifiSinkDevices;
         NodeContainer wifiSinkNodes;

        NodeContainer wifiSimpleNodes;


if(m_protocol==2)
{
        for(uint32_t i=1;i<=m_nSinks;i++)
        {
        NS_LOG_UNCOND("Code2");
           NetDeviceContainer adhocDev = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get (i));
           wifiSinkDevices.Add(adhocDev);
           wifiSinkNodes.Add(adhocNodes.Get (i));
        }
}




 NetDeviceContainer wifiSimpleDevices;


if(m_protocol==2)
{
        for(uint32_t i=m_nSinks+1;i<m_nWifiNodes+1;i++)
        {
           NS_LOG_UNCOND("Code2");
           NetDeviceContainer adhocDev = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get (i));
           wifiSimpleDevices.Add(adhocDev);
           wifiSimpleNodes.Add(adhocNodes.Get (i));
        }
}
else
{
        for(uint32_t i=0;i<m_nWifiNodes;i++)
        {
           NS_LOG_UNCOND("Code2");
           NetDeviceContainer adhocDev = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get (i));
           wifiSimpleDevices.Add(adhocDev);
           wifiSimpleNodes.Add(adhocNodes.Get (i));
        }
}


 NetDeviceContainer wifiDevices;
 wifiDevices.Add(wifiSinkDevices);
 wifiDevices.Add(wifiSimpleDevices);

 NodeContainer wifiNodes;
 wifiNodes.Add(wifiSinkNodes);
 wifiNodes.Add(wifiSimpleNodes);


Ipv4AddressHelper addressAdhoc;
addressAdhoc.SetBase ("10.1.0.0", "255.255.0.0");
Ipv4InterfaceContainer wifiSinkInterfaces;
Ipv4InterfaceContainer wifiSimpleInterfaces;


        Ipv4InterfaceContainer SrvInterface;
        Ipv4InterfaceContainer SinkInterface;

        Ipv4InterfaceContainer SrvInterfacesContainer;
        Ipv4InterfaceContainer SinkInterfacesContainer;
        NetDeviceContainer NeDevSinkOutContainer;
        NetDeviceContainer NeDevSrvContainer;


  // We create the channels first without any IP addressing information
if(m_protocol==2)
{
        NS_LOG_INFO ("Create channels.");
        PointToPointHelper p2p;
        p2p.SetDeviceAttribute ("DataRate", StringValue (m_rate));
        p2p.SetChannelAttribute ("Delay", StringValue ("0ms"));

        for(uint32_t i=1;i<=m_nSinks;i++)
        {
        NodeContainer ApSrv = NodeContainer (adhocNodes.Get (0),adhocNodes.Get (i));//dms 
        NetDeviceContainer NeDevApSrv = p2p.Install (ApSrv);
        NS_LOG_UNCOND("Code5");
        NeDevSinkOutContainer.Add(NeDevApSrv.Get(1));
        NeDevSrvContainer.Add(NeDevApSrv.Get(0)); 
        }
}




  MobilityHelper mobilityAdhoc;
  ObjectFactory pos;
  std::stringstream ssPause;
  std::stringstream ssSpeed;
  Ptr<ListPositionAllocator> positionAlloc;
Ptr<PositionAllocator> positionAlloc0 ;


int64_t streamIndex = 0;

if(m_randomPositions)
{

  pos.SetTypeId ("ns3::RandomRectanglePositionAllocator");
  pos.Set ("X", StringValue ("ns3::UniformRandomVariable[Min=0.0|Max="+std::to_string((std::sqrt(m_nWifiNodes))*m_segment_size)+"]"));
  pos.Set ("Y", StringValue ("ns3::UniformRandomVariable[Min=0.0|Max="+std::to_string((std::sqrt(m_nWifiNodes))*m_segment_size)+"]"));
  positionAlloc0 = pos.Create ()->GetObject<PositionAllocator> ();
  streamIndex += positionAlloc0->AssignStreams (streamIndex);

  ssSpeed << "ns3::UniformRandomVariable[Min=0.0|Max=" << m_nodeSpeed << "]";

  ssPause << "ns3::ConstantRandomVariable[Constant=" << m_nodePause << "]";
  mobilityAdhoc.SetPositionAllocator (positionAlloc0);

}
else
{
  Ptr<ListPositionAllocator> positionAlloc = CreateObject <ListPositionAllocator>();
        //////////   grid positions initialization////////////////////////////////////////////////

        double grid[x_positions][y_positions][2][2]={{{{0.0}}}};         // [nbrX] [nbrY] [0->pX 1->pY] [0] 

                for(uint32_t i=1;i<x_positions;i++)
                {
                        for(uint32_t j=1;j<y_positions;j++)
                        {
         NS_LOG_UNCOND ("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
                                  grid[i][j][0][0]=m_segment_size*i;
                                  grid[i][j][1][0]=m_segment_size*j;
                        }
                }

                for(uint32_t i=1;i<x_positions;i++)
                {
                   NS_LOG_UNCOND ("x:"<<i);
                        for(uint32_t j=1;j<y_positions;j++)
                        {
                           NS_LOG_UNCOND ("y:"<<j);
                            NS_LOG_UNCOND ("X="<<grid[i][j][0][0]<<"  Y="<<grid[i][j][1][0]);
                        }
                }
        ///////////////////////////////////////////////////////////////////////////////////////

        //////////   reservation of Sink positions in the grid ///////////////////////////////////////////////

        if(m_protocol==2)
        {
                 for(uint32_t i=1;i<=m_nSinks;i++)
                 {
                rand=m_uniformRandomVariable->GetValue(1, x_positions);
                rand_x=floor(rand);
                rand=m_uniformRandomVariable->GetValue(1, y_positions);
                rand_y=floor(rand);
                grid[rand_x][rand_y][0][1]=1.0;
                grid[rand_x][rand_y][1][1]=1.0;

                 }
                           NS_LOG_UNCOND ("ddddddddddddddddddddddddddddy:   "<<rand_x<<"  "<<rand_y);
        }




        ///////////////////////////////////////////////////////////////////////////////////////
        if(m_protocol==2)
        {
        // Atribute (0,0) to the server node
          positionAlloc ->Add(Vector(0, 0, 0)); // server
        // Atribute reserved positions to SINKs
                for(uint32_t i=1;i<x_positions;i++)
                {
                        for(uint32_t j=1;j<y_positions;j++)
                        {
                           if(grid[i][j][0][1]==1.0)
                           {
                                   if(grid[i][j][1][1]==1.0)
                                   {
                                       positionAlloc ->Add(Vector(grid[i][j][0][0], grid[i][j][1][0], 0));
                                   } 

                           }   
                        }
                }
        }
        // // Atribute the rest of the positions to simple nodes
        uint32_t count=0;
        for(uint32_t i=1;i<x_positions;i++)
        {
                for(uint32_t j=1;j<y_positions;j++)
                {
                   if(grid[i][j][0][1]==0)
                   {
                      if(grid[i][j][1][1]==0)
                      {
                      
                           if(count<m_nWifiNodes)
                           {
                               positionAlloc ->Add(Vector(grid[i][j][0][0], grid[i][j][1][0], 0));
                               count++;
                           } 
                      } 

                   }   
                }
        }

  mobilityAdhoc.SetPositionAllocator(positionAlloc);

}

if(m_enbleMobility)
{



  mobilityAdhoc.SetMobilityModel ("ns3::RandomWaypointMobilityModel",
                                  "Speed", StringValue (ssSpeed.str ()),
                                  "Pause", StringValue (ssPause.str ()),
                                  "PositionAllocator", PointerValue (positionAlloc0));
}
else
{



  mobilityAdhoc.SetMobilityModel("ns3::ConstantPositionMobilityModel");

}



  mobilityAdhoc.Install(adhocNodes);

/*
  // Energy Model 
  //----------------------------------------
  // energy source 
  BasicEnergySourceHelper basicSourceHelper;
  // configure energy source
  basicSourceHelper.Set ("BasicEnergySourceInitialEnergyJ", DoubleValue (20000.97));
  // install source
  EnergySourceContainer sources = basicSourceHelper.Install (wifiNodes);
  // device energy model
  WifiRadioEnergyModelHelper radioEnergyHelper;
  // configure radio energy model
  radioEnergyHelper.Set ("TxCurrentA", DoubleValue (0.0174));
  // install device model
  DeviceEnergyModelContainer deviceEnergyModels = radioEnergyHelper.Install (wifiDevices, sources);
  //---------------------------------------------------------------
*/


 //Ptr<Node> nodeWifi = wifiNetDevice->GetNode(); NS_LOG_UNCOND("step 1");

  // source helper
  BasicEnergySourceHelper basicSourceHelper;
  // set energy to 0 so that we deplete energy at the beginning of simulation
  basicSourceHelper.Set ("BasicEnergySourceInitialEnergyJ", DoubleValue (m_initEnergy)); NS_LOG_UNCOND("step 2");
  // set update interval
 ///////// basicSourceHelper.Set ("PeriodicEnergyUpdateInterval",TimeValue (Seconds (updateIntervalS)));
  // install source
  EnergySourceContainer sources = basicSourceHelper.Install (wifiNodes); NS_LOG_UNCOND("step 3");

/*
  // device energy model helper
  WifiRadioEnergyModelHelper radioEnergyHelper;

  // set energy depletion callback
  WifiRadioEnergyModel::WifiRadioEnergyDepletionCallback callback =
    MakeCallback (&dmsrp::RoutingProtocol::DepletionHandler, this);  NS_LOG_UNCOND("step 4");
  radioEnergyHelper.SetDepletionCallback (callback); NS_LOG_UNCOND("step 5");

  // install on node
  DeviceEnergyModelContainer deviceModels = radioEnergyHelper.Install (wifiDevices, sources);NS_LOG_UNCOND("step 6");
*/
//---------------------------------------------------------------------------------------------

 //   MakeCallback (&dmsrp::RoutingProtocol::DepletionHandler, this);  //NS_LOG_UNCOND("step 4");

NS_LOG_UNCOND("Code3");
 /* streamIndex += mobilityAdhoc.AssignStreams (adhocNodes, streamIndex);
  NS_UNUSED (streamIndex); // From this point, streamIndex is unused*/

  DmsrpHelper dmsrp;
  OlsrHelper olsr;
  AodvHelper aodv;
  DsdvHelper dsdv;
  DsrHelper dsr;
  DsrMainHelper dsrMain;
  Ipv4ListRoutingHelper list;
  InternetStackHelper internet;

  switch (m_protocol)
    {
    case 1:
        list.Add (olsr, 100);
        m_protocolName = "OLSR";
        break;
    case 2:
        list.Add (dmsrp, 100);
        m_protocolName = "DMSRP2";
        break;
    case 3:
        list.Add (dsdv, 100);
        m_protocolName = "DSDV";
        break;
    case 4:
        list.Add (aodv, 100);
        m_protocolName = "AODV";
        break;
    case 5:
        m_protocolName = "DSR";
        break;
    default:
        NS_FATAL_ERROR ("No such protocol:" << m_protocol);
    }
  if (m_protocol < 5 && m_protocol != 2)
    {


      internet.SetRoutingHelper (list);
        Config::SetDefault  ("ns3::aodv::RoutingProtocol::RngRep", UintegerValue (m_simulationRep)); 

      internet.Install (adhocNodes);
       wifiSimpleInterfaces = addressAdhoc.Assign (wifiSimpleDevices); 
    }

  if (m_protocol == 2)
    {
       
         
        internet.SetRoutingHelper (list);
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::RngRep", UintegerValue (m_simulationRep)); 

        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::Routingmode", UintegerValue (m_mode)); 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::SinkGateWayAddress", Ipv4AddressValue ("10.1.0.1"));                 // The Ip address is temporary, it will be assigned later 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::SinkOutPutDevice", PointerValue (NeDevSinkOutContainer.Get(0))); 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::ServerAddress", Ipv4AddressValue ("10.1.0.1"));                      // The Ip address is temporary, it will be assigned later

        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsSink", BooleanValue (false)); 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsServer",BooleanValue (true));        
        internet.Install (adhocNodes.Get (0));
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsServer",BooleanValue (false));
        for(uint32_t i=1;i<=m_nSinks;i++)
        {
                SrvInterface = addressAdhoc.Assign (NeDevSrvContainer.Get(i-1)); 
                SrvInterfacesContainer.Add(SrvInterface);  // memorize server interfaces for printing
        }
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsSink", BooleanValue (true)); 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsSink", BooleanValue (false)); 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsSink", BooleanValue (false)); 
        for(uint32_t i=m_nSinks+1;i<m_nWifiNodes+1;i++)
        {
                internet.Install (adhocNodes.Get (i));
        }
        wifiSimpleInterfaces = addressAdhoc.Assign (wifiSimpleDevices); 
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsSink", BooleanValue (true));
        for(uint32_t i=1;i<=m_nSinks;i++)
        {
                Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::SinkGateWayAddress", Ipv4AddressValue( SrvInterfacesContainer.GetAddress(i-1)));  
                Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::SinkOutPutDevice", PointerValue (NeDevSinkOutContainer.Get(i-1))); 
                Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::ServerAddress", Ipv4AddressValue( SrvInterfacesContainer.GetAddress(i-1))); 
                internet.Install (adhocNodes.Get (i));
        }
        Config::SetDefault  ("ns3::dmsrp::RoutingProtocol::IsSink", BooleanValue (false));
        wifiSinkInterfaces = addressAdhoc.Assign (wifiSinkDevices); 

        for(uint32_t i=1;i<=m_nSinks;i++)
        {
                SinkInterface = addressAdhoc.Assign (NeDevSinkOutContainer.Get(i-1)); 
                SinkInterfacesContainer.Add(SinkInterface);  // memorize server interfaces for printing
        }

        for(uint32_t i=1;i<=m_nSinks;i++)
        {
                NS_LOG_UNCOND("Sink wifi "<<i<< ": "<<(wifiSinkDevices.Get(i-1))->GetAddress()<<": IPv4: "<<  wifiSinkInterfaces.GetAddress(i-1));//SinkInterfacesContainer
        }
        for(uint32_t i=0;i<  m_nSinks;i++)
        {
                NS_LOG_UNCOND("Server out"<<i<< ": "<<(NeDevSrvContainer.Get(i))->GetAddress()<<": IPv4: "<<  SrvInterfacesContainer.GetAddress(i));
        }
        for(uint32_t i=m_nSinks+1;i<m_nWifiNodes+1;i++)
        {
                NS_LOG_UNCOND("Node "<<i<< ": "<<(wifiSimpleDevices.Get(i-1-m_nSinks))->GetAddress()<<": IPv4: "<<  wifiSimpleInterfaces.GetAddress(i-1-m_nSinks));
        }

   }
  else if (m_protocol == 5)
    {
        internet.Install (adhocNodes);
        dsrMain.Install (dsr, adhocNodes);
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


        uint32_t rand_int;

        ApplicationContainer apps;
        UdpServerHelper server (m_port);

if(m_protocol==2)
{
        for(uint32_t i=0;i<m_nWifiNodes+1;i++)
        {
                ApplicationContainer apps = server.Install (adhocNodes.Get (i));  //16
                apps.Start (Seconds (m_SRVstartTime));
                apps.Stop (Seconds (m_SRVstopTime));
        }
}
else
{
        for(uint32_t i=0;i<m_nWifiNodes;i++)
        {
                ApplicationContainer apps = server.Install (adhocNodes.Get (i));  //16
                apps.Start (Seconds (m_SRVstartTime));
                apps.Stop (Seconds (m_SRVstopTime));
        }
}
        

  NS_LOG_UNCOND ("server application installed");

if(m_protocol==2)
{
        for(uint32_t i=0;i<m_nWifiNodes;i++)
        {
                rand=m_uniformRandomVariable->GetValue(0,m_nWifiNodes);
                rand_int=floor(rand);
                Address serverAddress;
                if(rand_int<m_nSinks)
                {
                   serverAddress =Address (Ipv4Address(wifiSinkInterfaces.GetAddress (rand_int)));// //=Address (Ipv4Address (adhocInterfaces.GetAddress (4)));//
                }
                else
                {
                   serverAddress =Address (Ipv4Address(wifiSimpleInterfaces.GetAddress (rand_int-m_nSinks)));// //=Address (Ipv4Address (adhocInterfaces.GetAddress (4)));//
                   
                }
  
                UdpClientHelper client (serverAddress, m_port);
                client.SetAttribute ("MaxPackets", UintegerValue (m_maxPackets));
                client.SetAttribute ("Interval", TimeValue (Seconds (m_interval)));
                client.SetAttribute ("PacketSize", UintegerValue (m_packetSize));
                if(m_protocol==2)
                {
                   apps = client.Install (adhocNodes.Get (i+1));
                }
                else
                {
                   apps = client.Install (adhocNodes.Get (i));
                }
                rand=m_uniformRandomVariable->GetValue(0,5);
                apps.Start (Seconds (m_CLIENTstartTime+rand));
                apps.Stop (Seconds (m_CLIENTstopTime+rand));
        }
/*
        for(uint32_t i=0;i<m_nWifiNodes+1-m_nSinks-1;i++)
        {
                rand=m_uniformRandomVariable->GetValue(0,m_nWifiNodes+1-m_nSinks-1);
                rand_int=floor(rand);
                Address serverAddress;
                serverAddress =Address (Ipv4Address(wifiSimpleInterfaces.GetAddress (rand_int)));// //=Address (Ipv4Address (adhocInterfaces.GetAddress (4)));//
                UdpClientHelper client (serverAddress, m_port);
                client.SetAttribute ("MaxPackets", UintegerValue (m_maxPackets));
                client.SetAttribute ("Interval", TimeValue (Seconds (m_interval)));
                client.SetAttribute ("PacketSize", UintegerValue (m_packetSize));
                apps = client.Install (adhocNodes.Get (i+m_nSinks+1));
                rand=m_uniformRandomVariable->GetValue(0,5);
                apps.Start (Seconds (m_CLIENTstartTime+rand));
                apps.Stop (Seconds (m_CLIENTstopTime+rand));
        }*/
}
else
{
        for(uint32_t i=0;i<m_nWifiNodes;i++)
        {
                rand=m_uniformRandomVariable->GetValue(0,m_nWifiNodes);
                rand_int=floor(rand);
                Address serverAddress;
                serverAddress =Address (Ipv4Address(wifiSimpleInterfaces.GetAddress (rand_int)));// //=Address (Ipv4Address (adhocInterfaces.GetAddress (4)));//
                UdpClientHelper client (serverAddress, m_port);
                client.SetAttribute ("MaxPackets", UintegerValue (m_maxPackets));
                client.SetAttribute ("Interval", TimeValue (Seconds (m_interval)));
                client.SetAttribute ("PacketSize", UintegerValue (m_packetSize));
                apps = client.Install (adhocNodes.Get (i));
                rand=m_uniformRandomVariable->GetValue(0,5);
                apps.Start (Seconds (m_CLIENTstartTime+rand));
                apps.Stop (Seconds (m_CLIENTstopTime+rand));
        }
}



  std::stringstream ss;
  ss << m_nWifiNodes;
  std::string nodes = ss.str ();

  std::stringstream ss2;
  ss2 << m_nodeSpeed;
  std::string sm_nodeSpeed = ss2.str ();

  std::stringstream ss3;
  ss3 << m_nodePause;
  std::string sm_nodePause = ss3.str ();

  std::stringstream ss4;
  ss4 << m_rate;
  std::string sm_rate = ss4.str ();

  //NS_LOG_INFO ("Configure Tracing.");
  //tr_name = tr_name + "_" + m_protocolName +"_" + nodes + "nodes_" + sm_nodeSpeed + "speed_" + sm_nodePause + "pause_" + sm_Rate + "rate";

  //AsciiTraceHelper ascii;
  //Ptr<OutputStreamWrapper> osw = ascii.CreateFileStream ( (tr_name + ".tr").c_str());
  //wifiPhy.EnableAsciiAll (osw);
  //AsciiTraceHelper ascii;
  //MobilityHelper::EnableAsciiAll (ascii.CreateFileStream (tr_name + ".mob"));

  Ptr<FlowMonitor> flowmon;
  FlowMonitorHelper flowmonHelper;
  flowmon = flowmonHelper.InstallAll ();

//AnimationInterface anim("anim0.xml");
//anim.SetMaxPktsPerTraceFile(9000000);
  NS_LOG_INFO ("Run Simulation.");

  Config::ConnectWithoutContext ("/NodeList/*/$ns3::dmsrp::RoutingProtocol/DepTime", MakeCallback(&DepletionDetected));
  Config::ConnectWithoutContext ("/NodeList/*/$ns3::aodv::RoutingProtocol/DepTime", MakeCallback(&DepletionDetected));

  Simulator::Stop (Seconds (m_totalTime));
  Simulator::Run ();

  Ptr<EnergySource> EnergySrc;

  for(uint32_t i=0;i< sources.GetN();i++)
  {
      EnergySrc = sources.Get (i);
      m_remainingEnergy=m_remainingEnergy+EnergySrc->GetRemainingEnergy ();
  }
  NS_LOG_UNCOND("Total remainig energy is: "<<m_remainingEnergy);
  NS_LOG_UNCOND("Network life time is: "<<m_lifeTime);
  
  
  std::ofstream out2 (m_fileEnergy.c_str ());
  out2 << m_remainingEnergy <<" ; "<<m_lifeTime<<
  std::endl;
  out2.close ();

  flowmon->SerializeToXmlFile ((m_fileFlowMonName + ".xml").c_str(), false, false);

  Simulator::Destroy ();
}






























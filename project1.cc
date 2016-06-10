/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
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
 */

#include "ns3/core-module.h"

#include <iostream>
#include <string>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("ScratchSimulator");

static void printHello(std::string name,std::string number){
  std::cout << Simulator::Now() << " " 
  << name << " " << number << std::endl;
  Simulator::Schedule(Seconds(3),&printHello,name,number);
}

int 
main (int argc, char *argv[])
{
  NS_LOG_UNCOND ("Project 1");
  CommandLine cmd;
  std::string name;
  std::string number;
  std::string frequence;
  cmd.AddValue("name","My name:",name);
  cmd.AddValue("number","My student number:",number);
  cmd.Parse(argc,argv);

  std::cout << "Printing..." << std::endl;
  printHello(name,number);
  
  Simulator::Stop(Seconds(30));
  Simulator::Run ();
  Simulator::Destroy ();
}

// this program .....

#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libxml/parser.h"
#include "libxml/tree.h"

int main (int argc, char *argv[])
{
      system("cd workspace/ns-allinone-3.27/ns-3.27");


// Lifetime Effect ------------------------------------------------------------------------------------

// STATIC - N=150 SEG=100 SPEED=10 DENSITY=4/40000M2(X=100)  energy 6

 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=851 --simulationRep=1 --protocol=2 --mode=3 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=852 --simulationRep=2 --protocol=2 --mode=3 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=853 --simulationRep=3 --protocol=2 --mode=3 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=854 --simulationRep=4 --protocol=2 --mode=3 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=855 --simulationRep=5 --protocol=2 --mode=3 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");

 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=856 --simulationRep=1 --protocol=2 --mode=2 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=857 --simulationRep=2 --protocol=2 --mode=2 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=858 --simulationRep=3 --protocol=2 --mode=2 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=859 --simulationRep=4 --protocol=2 --mode=2 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=860 --simulationRep=5 --protocol=2 --mode=2 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");


 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=861 --simulationRep=1 --protocol=2 --mode=1 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=862 --simulationRep=2 --protocol=2 --mode=1 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=863 --simulationRep=3 --protocol=2 --mode=1 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=864 --simulationRep=4 --protocol=2 --mode=1 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=865 --simulationRep=5 --protocol=2 --mode=1 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");


 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=866 --simulationRep=1 --protocol=2 --mode=0 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=867 --simulationRep=2 --protocol=2 --mode=0 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=868 --simulationRep=3 --protocol=2 --mode=0 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=869 --simulationRep=4 --protocol=2 --mode=0 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");
 system("./waf --run \"scratch/dmsrptestlifetime --simulationID=870 --simulationRep=5 --protocol=2 --mode=0 --nSinks=2 --enbleMobility=false --randomPositions=false --nWifiNodes=50 --segment_size=100 --nodeSpeed=10 --initEnergy=4 --totalTime=300\"");






}




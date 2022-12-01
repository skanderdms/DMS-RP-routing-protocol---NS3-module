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





// scalability Effect of number of nodes------------------------------------------------------------------------------------

 system("./waf --run \"scratch/dmsrptest --simulationID=833 --simulationRep=3 --protocol=2 --mode=3 --nSinks=40 --enbleMobility=false --randomPositions=true --nWifiNodes=1000 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=834 --simulationRep=4 --protocol=2 --mode=3 --nSinks=40 --enbleMobility=false --randomPositions=true --nWifiNodes=1000 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=835 --simulationRep=5 --protocol=2 --mode=3 --nSinks=40 --enbleMobility=false --randomPositions=true --nWifiNodes=1000 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");














 system("./waf --run \"scratch/dmsrptest --simulationID=460 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=461 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=462 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=463 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=464 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=465 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=466 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=467 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=468 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=469 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=470 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=471 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=472 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=473 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=474 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=475 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// STATIC - N=150 SEG=100 SPEED=10 DENSITY=3/40000M2(X=86.602540)

 system("./waf --run \"scratch/dmsrptest --simulationID=476 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=477 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=478 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=479 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=480 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=481 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=482 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=483 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=484 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=485 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=486 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=487 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=488 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=489 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=490 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=491 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=492 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=493 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=494 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=495 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=496 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=497 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=498 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=499 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=500 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// STATIC - N=150 SEG=100 SPEED=10 DENSITY=4/40000M2(X=100)

 system("./waf --run \"scratch/dmsrptest --simulationID=501 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=502 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=503 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=504 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=505 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=506 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=507 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=508 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=509 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=510 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=511 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=512 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=513 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=514 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=515 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=516 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=517 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=518 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=519 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=520 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=521 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=522 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=523 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=524 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=525 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// STATIC - N=150 SEG=100 SPEED=10 DENSITY=5/40000M2(X=111.803398)

 system("./waf --run \"scratch/dmsrptest --simulationID=526 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=527 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=528 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=529 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=530 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=531 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=532 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=533 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=534 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=535 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=536 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=537 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=538 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=539 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=540 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=541 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=542 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=543 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=544 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=545 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=546 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=547 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=548 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=549 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=550 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// STATIC - N=150 SEG=100 SPEED=10 DENSITY=6/40000M2(X=122.474487)

 system("./waf --run \"scratch/dmsrptest --simulationID=551 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=552 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=553 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=554 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=555 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=556 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=557 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=558 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=559 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=560 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=561 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=562 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=563 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=564 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=565 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=566 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=567 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=568 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=569 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=570 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=571 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=572 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=573 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=574 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=575 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=false --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

//------------------------

// MOBILE - N=150 SEG=100 SPEED=10 DENSITY=2/40000M2(X=70.710678)

 system("./waf --run \"scratch/dmsrptest --simulationID=576 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=577 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=578 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=579 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=580 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=581 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=582 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=583 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=584 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=585 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=586 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=587 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=588 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=589 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=590 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=591 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=592 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=593 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=594 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=595 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=596 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=597 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=598 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=599 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=600 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=70.710678 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// MOBILE - N=150 SEG=100 SPEED=10 DENSITY=3/40000M2(X=86.602540)

 system("./waf --run \"scratch/dmsrptest --simulationID=601 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=602 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=603 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=604 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=605 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=606 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=607 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=608 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=609 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=610 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=611 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=612 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=613 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=614 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=615 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=616 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=617 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=618 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=619 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=620 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=621 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=622 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=623 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=624 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=625 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=86.602540 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// MOBILE - N=150 SEG=100 SPEED=10 DENSITY=4/40000M2(X=100)

 system("./waf --run \"scratch/dmsrptest --simulationID=626 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=627 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=628 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=629 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=630 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=631 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=632 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=633 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=634 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=635 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=636 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=637 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=638 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=639 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=640 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=641 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=642 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=643 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=644 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=645 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=646 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=647 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=648 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=649 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=650 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=100 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// MOBILE - N=150 SEG=100 SPEED=10 DENSITY=5/40000M2(X=111.803398)

 system("./waf --run \"scratch/dmsrptest --simulationID=651 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=652 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=653 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=654 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=655 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=656 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=657 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=658 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=659 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=660 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=661 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=662 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=663 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=664 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=665 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=666 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=667 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=668 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=669 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=670 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=671 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=672 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=673 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=674 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=675 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=111.803398 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

// MOBILE - N=150 SEG=100 SPEED=10 DENSITY=6/40000M2(X=122.474487)

 system("./waf --run \"scratch/dmsrptest --simulationID=676 --simulationRep=1 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=677 --simulationRep=2 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=678 --simulationRep=3 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=679 --simulationRep=4 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=680 --simulationRep=5 --protocol=2 --mode=3 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");

 system("./waf --run \"scratch/dmsrptest --simulationID=681 --simulationRep=1 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=682 --simulationRep=2 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=683 --simulationRep=3 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=684 --simulationRep=4 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=685 --simulationRep=5 --protocol=2 --mode=2 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=686 --simulationRep=1 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=687 --simulationRep=2 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=688 --simulationRep=3 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=689 --simulationRep=4 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=690 --simulationRep=5 --protocol=2 --mode=1 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=691 --simulationRep=1 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=692 --simulationRep=2 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=693 --simulationRep=3 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=694 --simulationRep=4 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=695 --simulationRep=5 --protocol=2 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");


 system("./waf --run \"scratch/dmsrptest --simulationID=696 --simulationRep=1 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=697 --simulationRep=2 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=698 --simulationRep=3 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=699 --simulationRep=4 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");
 system("./waf --run \"scratch/dmsrptest --simulationID=700 --simulationRep=5 --protocol=4 --mode=0 --nSinks=6 --enbleMobility=true --randomPositions=true --nWifiNodes=150 --segment_size=122.474487 --nodeSpeed=10 --initEnergy=10000 --totalTime=200\"");




}










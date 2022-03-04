  ## Table no:1 High level test plan

| *Test ID* | *Description*                                              | *Exp I/P* | *Exp O/P* | *Actual Out* |*Type Of Test*  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Given color code|red,green,yellow   |250 000 -ohms     |250 000-ohms      |Technical |
|  H_02       |Given color code|pink, green,yellow |Invalid color band|Invalid color band|Technical |
|  H_03       |Given color code|brown,black,grey   |1 000 000 -ohms   |1 000 000 -ohms   |Technical |


## Table no:2 Low level test plan

| *Test ID* | *HLT ID* |*Description*                                              | *Exp IN* | *Exp OUT* | *Actual Out* |*Type Of Test*  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------| 
|  L_01       | H_01  |Given color code  |  red,green,yellow  |SUCCESS|SUCCESS |Technical |
|  L_02       | H_02  |Given color code  |  pink,green,yellow |SUCCESS|SUCCESS |Technical |
|  L_03       | H_03  |Given color code  |  brown,black,grey  |SUCCESS|SUCCESS |Technical |


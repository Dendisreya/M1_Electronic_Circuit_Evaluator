# Introduction
* Electronic circuit evaluator is an application that can assist   engineers in analysing circuit difficulties.
* It used to be a very time-consuming operation for engineers, particularly when working with hardware circuits, to regulate the resistance and voltage across the circuit and maintain the overall resistance and current in balance.
* The overall resistance in the circuit, impedance in RLC, and power computations for the circuit to estimate how long it will work in real world were the key jobs for any electronics technician.
* So, in order to minimize calculating time and make the procedure more automated and error-free, the following system was introduced.
This programme is beneficial to anyone who works with hardware circuits boards. It aids in the determination of resistor values based on colour codes, the determination of system current dependent on series or parallel construction, and the calculation of the circuit's total power.

# Research
On the app Store, we can find the number of apps that can help :
1. To determine the current in a circuit and evaluate it using voltage and current characteristics.
2. To compute the resistor values using the colour codes.
* However, this system has combined all of the functions into a single programme, providing you with all of the basic circuit analysis requirements in one common platform.
* For beginners, this is quite helpful.
* People who use fundamental electronic components will find it simple and accurate to calculate.
* Power calculations are crucial for electronic engineers because their designs are heavily reliant on them.

# Defining Our System
The following actions are possible with the Electronic Circuit Evaluator.
1. Values of resistors based on colour codes
2. Information about battery power consumption based on battery type.
3. Resistance, current, and voltage across different components in a series circuit analysis.
4. Resistance, current, and voltage across separate components in a parallel circuit analysis.
5. Analysis of the circuit's power and longevity.

# SWOT Analysis
## Strengths
* Easy to use.
* Faster compilation time.
* More information about circuits.
* Better than previous systems. 
## Weaknesses
* No simulation of circuits.
* High input values.
## Opportunities
* Multi level architecture and circuit implementation.
* New skills and technologies.
* Emerging Technology.
## Threats
* Circuit simulation softwares.
* Competitor applications.

# 4W's and 1'H
## Who
 Electronic engineers, college students and professors who are using electronic circuits.
## What
 Many students have difficulty with power calculations , connecting circuits in parallel makes  calculations get more difficult when the circuit includes multiple elements in series or parallel.
## When
This project has no end date because it can be utilised by generations for ages until the planet requires electronic technology. All device simulations and resistor programming information will be collected in this project.
## Where
Schools, colleges, engineering institutes, electronic projects, labs, industries.
## How
Because it is an input-output application, the use of this project is quite straightforward. The person just types in whatever data they requires; for ex, if the person needs the current in a certain branch of a circuit, the circuit information must be provided, and the outcome will be dependent on all current calculations.

# Detail requirements

# High Level Requirements:

1. Based on the colour code input, the user is allowed to determine the values of the resistors.
2. Based on the input, the user will be able to determine the type of battery, current output, voltage output, and power rating of the battery.
3. The user will be able to compute the circuit's series resistance, as well as the voltage and current flowing through the circuit and via every element.
4. The user will be able to determine the circuit's current, voltage, and power.
5. Depending on the input battery & power ratings, the user is allowed to determine the circuit lifetime in days. 

# Low level Requirements:
1. The readings of the resistor will be presented depending on whether it is a 4 band or a 5 band resistor.
2. For a 4 band, the first three colour bands will be used, and for a 5 band, the first four bands will be used.
3. The total series resistance will be calculated based on the user's input. If the user is unsure of the resistor values, an intermediary procedure will offer them by inquiring for the colour codes.
4. The total parallel resistance will be calculated based on the user's input. If the user is unsure of the resistor values, an intermediary procedure will offer them by inquiring for the colour codes.
5. The total voltage or current for the circuit would be computed &  the output power of circuit would be provided based on resistor value inputs, seriesor paralell or mixed choices by the user.
6. The battery performance of the input signal will be calculated based on previous data &  battery type & current pull of circuit provided by the user.


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




# Result
* Analysed resistor values by color coding.

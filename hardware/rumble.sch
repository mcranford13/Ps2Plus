EESchema Schematic File Version 4
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Transistor_FET:2N7000 Q1
U 1 1 5D28C63C
P 6350 2950
F 0 "Q1" H 6556 2996 50  0000 L CNN
F 1 "2N7000" H 6556 2905 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 6550 2875 50  0001 L CIN
F 3 "https://www.fairchildsemi.com/datasheets/2N/2N7000.pdf" H 6350 2950 50  0001 L CNN
	1    6350 2950
	1    0    0    -1  
$EndComp
$Comp
L Device:D_Schottky D1
U 1 1 5D28DC34
P 7050 2350
F 0 "D1" V 7004 2429 50  0000 L CNN
F 1 "1N58XX" V 7095 2429 50  0000 L CNN
F 2 "" H 7050 2350 50  0001 C CNN
F 3 "~" H 7050 2350 50  0001 C CNN
	1    7050 2350
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 5D28E7A7
P 5900 3250
F 0 "R2" H 5970 3296 50  0000 L CNN
F 1 "100K" H 5970 3205 50  0000 L CNN
F 2 "" V 5830 3250 50  0001 C CNN
F 3 "~" H 5900 3250 50  0001 C CNN
	1    5900 3250
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5D28EDCB
P 5550 2950
F 0 "R1" V 5343 2950 50  0000 C CNN
F 1 "1K" V 5434 2950 50  0000 C CNN
F 2 "" V 5480 2950 50  0001 C CNN
F 3 "~" H 5550 2950 50  0001 C CNN
	1    5550 2950
	0    1    1    0   
$EndComp
$Comp
L Motor:Motor_DC M
U 1 1 5D28F3CB
P 6450 2300
F 0 "M" H 6608 2296 50  0000 L CNN
F 1 "DC Motor" H 6608 2205 50  0000 L CNN
F 2 "" H 6450 2210 50  0001 C CNN
F 3 "~" H 6450 2210 50  0001 C CNN
	1    6450 2300
	1    0    0    -1  
$EndComp
$Comp
L power:GNDREF #PWR?
U 1 1 5D28FAEB
P 5900 3500
F 0 "#PWR?" H 5900 3250 50  0001 C CNN
F 1 "GNDREF" H 5905 3327 50  0000 C CNN
F 2 "" H 5900 3500 50  0001 C CNN
F 3 "" H 5900 3500 50  0001 C CNN
	1    5900 3500
	1    0    0    -1  
$EndComp
$Comp
L power:GNDREF #PWR?
U 1 1 5D29002D
P 6450 3500
F 0 "#PWR?" H 6450 3250 50  0001 C CNN
F 1 "GNDREF" H 6455 3327 50  0000 C CNN
F 2 "" H 6450 3500 50  0001 C CNN
F 3 "" H 6450 3500 50  0001 C CNN
	1    6450 3500
	1    0    0    -1  
$EndComp
Text HLabel 5200 2950 0    50   Input ~ 0
RMB
Text HLabel 6450 1950 0    50   Input ~ 0
PS2_ACTUATOR_WIRE
Wire Wire Line
	5700 2950 5900 2950
Wire Wire Line
	5900 3100 5900 2950
Connection ~ 5900 2950
Wire Wire Line
	5900 2950 6150 2950
Wire Wire Line
	5900 3500 5900 3400
Wire Wire Line
	6450 3500 6450 3150
Wire Wire Line
	5400 2950 5200 2950
$Comp
L Device:CP1 C1
U 1 1 5D28D40D
P 6000 2350
F 0 "C1" H 6115 2396 50  0000 L CNN
F 1 "10uF" H 6115 2305 50  0000 L CNN
F 2 "" H 6000 2350 50  0001 C CNN
F 3 "~" H 6000 2350 50  0001 C CNN
	1    6000 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 2200 6000 2100
Wire Wire Line
	6000 2100 6450 2100
Wire Wire Line
	7050 2200 7050 2100
Wire Wire Line
	7050 2100 6450 2100
Connection ~ 6450 2100
Wire Wire Line
	6000 2500 6000 2600
Wire Wire Line
	6000 2600 6450 2600
Wire Wire Line
	7050 2500 7050 2600
Wire Wire Line
	7050 2600 6450 2600
Connection ~ 6450 2600
Wire Wire Line
	6450 2750 6450 2600
Wire Wire Line
	6450 1950 6450 2100
$EndSCHEMATC

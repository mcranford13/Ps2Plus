EESchema Schematic File Version 4
LIBS:ps2plus-cache
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
L ps2plus-rescue:PIC16F18876-I_PT-PIC16F18876-I_PT U1
U 1 1 5D46ABA3
P 5650 3100
F 0 "U1" H 5600 3250 50  0000 L CNN
F 1 "PIC16F18876-I_PT" H 5300 3450 50  0000 L CNN
F 2 "PIC16F18876-I_PT:QFP80P1200X1200X120-44N" H 5650 3100 50  0001 L BNN
F 3 "" H 5650 3100 50  0001 L BNN
F 4 "TQFP-44 Microchip" H 5650 3100 50  0001 L BNN "Field4"
F 5 "None" H 5650 3100 50  0001 L BNN "Field5"
F 6 "Unavailable" H 5650 3100 50  0001 L BNN "Field6"
F 7 "28KB Flash 2KB RAM 256B EE ADCC Analog PWM CWG SMT HLT WWDT SCAN/CRC" H 5650 3100 50  0001 L BNN "Field7"
F 8 "PIC16F18876-I/PT" H 5650 3100 50  0001 L BNN "Field8"
	1    5650 3100
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint LX1
U 1 1 5D46DA1F
P 6900 2700
F 0 "LX1" V 6900 2900 50  0000 L CNN
F 1 "TP26" V 6900 3200 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 2700 50  0001 C CNN
F 3 "~" H 7100 2700 50  0001 C CNN
	1    6900 2700
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint DU1
U 1 1 5D46E7EF
P 6900 2800
F 0 "DU1" V 6900 3000 50  0000 L CNN
F 1 "TP27" V 6900 3300 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 2800 50  0001 C CNN
F 3 "~" H 7100 2800 50  0001 C CNN
	1    6900 2800
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint TP12
U 1 1 5D46E821
P 6900 2900
F 0 "TP12" V 6900 3400 50  0000 L CNN
F 1 "DD" V 6900 3100 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 2900 50  0001 C CNN
F 3 "~" H 7100 2900 50  0001 C CNN
	1    6900 2900
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint TP13
U 1 1 5D46E9F4
P 6900 3000
F 0 "TP13" V 6900 3500 50  0000 L CNN
F 1 "GND" V 6900 3200 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 3000 50  0001 C CNN
F 3 "~" H 7100 3000 50  0001 C CNN
	1    6900 3000
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint TP14
U 1 1 5D46EC3A
P 6900 3100
F 0 "TP14" V 6900 3600 50  0000 L CNN
F 1 "3.3V" V 6900 3300 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 3100 50  0001 C CNN
F 3 "~" H 7100 3100 50  0001 C CNN
	1    6900 3100
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint TP15
U 1 1 5D46EFE6
P 6900 3500
F 0 "TP15" V 6900 4000 50  0000 L CNN
F 1 "ATN" V 6900 3700 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 3500 50  0001 C CNN
F 3 "~" H 7100 3500 50  0001 C CNN
	1    6900 3500
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint TP16
U 1 1 5D46F0E7
P 6900 3600
F 0 "TP16" V 6900 4100 50  0000 L CNN
F 1 "ACK" V 6900 3800 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 7100 3600 50  0001 C CNN
F 3 "~" H 7100 3600 50  0001 C CNN
	1    6900 3600
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint LY1
U 1 1 5D46F603
P 6050 1950
F 0 "LY1" H 6000 2250 50  0000 L CNN
F 1 "TP23" H 6150 2450 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6250 1950 50  0001 C CNN
F 3 "~" H 6250 1950 50  0001 C CNN
	1    6050 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint L3
U 1 1 5D46F69F
P 5950 1950
F 0 "L3" H 5900 2150 50  0000 L CNN
F 1 "TP20" H 6000 2350 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6150 1950 50  0001 C CNN
F 3 "~" H 6150 1950 50  0001 C CNN
	1    5950 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint CLK1
U 1 1 5D46F8B7
P 5850 1950
F 0 "CLK1" H 5800 2250 50  0000 L CNN
F 1 "TP19" H 5850 2450 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6050 1950 50  0001 C CNN
F 3 "~" H 6050 1950 50  0001 C CNN
	1    5850 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint R3
U 1 1 5D46FB51
P 5750 1950
F 0 "R3" H 5700 2150 50  0000 L CNN
F 1 "TP18" H 5700 2350 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5950 1950 50  0001 C CNN
F 3 "~" H 5950 1950 50  0001 C CNN
	1    5750 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint RX1
U 1 1 5D4706A8
P 5150 1950
F 0 "RX1" H 5050 2250 50  0000 L CNN
F 1 "TP11" H 5050 2450 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5350 1950 50  0001 C CNN
F 3 "~" H 5350 1950 50  0001 C CNN
	1    5150 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint TP4
U 1 1 5D471BC4
P 5350 4250
F 0 "TP4" H 5450 4750 50  0000 R CNN
F 1 "R1" H 5400 4550 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5550 4250 50  0001 C CNN
F 3 "~" H 5550 4250 50  0001 C CNN
	1    5350 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP5
U 1 1 5D471FCB
P 5450 4250
F 0 "TP5" H 5500 4650 50  0000 R CNN
F 1 "R2" H 5500 4450 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5650 4250 50  0001 C CNN
F 3 "~" H 5650 4250 50  0001 C CNN
	1    5450 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP6
U 1 1 5D472132
P 5550 4250
F 0 "TP6" H 5550 4750 50  0000 R CNN
F 1 "SL" H 5600 4550 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5750 4250 50  0001 C CNN
F 3 "~" H 5750 4250 50  0001 C CNN
	1    5550 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP7
U 1 1 5D472186
P 5650 4250
F 0 "TP7" H 5600 4650 50  0000 R CNN
F 1 "ST" H 5700 4450 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5850 4250 50  0001 C CNN
F 3 "~" H 5850 4250 50  0001 C CNN
	1    5650 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP8
U 1 1 5D47235B
P 5850 4250
F 0 "TP8" H 5850 4750 50  0000 R CNN
F 1 "SQ" H 5900 4550 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6050 4250 50  0001 C CNN
F 3 "~" H 6050 4250 50  0001 C CNN
	1    5850 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP9
U 1 1 5D472448
P 5950 4250
F 0 "TP9" H 5900 4650 50  0000 R CNN
F 1 "TRI" H 6000 4450 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6150 4250 50  0001 C CNN
F 3 "~" H 6150 4250 50  0001 C CNN
	1    5950 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP10
U 1 1 5D4724F2
P 6050 4250
F 0 "TP10" H 5950 4750 50  0000 R CNN
F 1 "X" H 6050 4550 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6250 4250 50  0001 C CNN
F 3 "~" H 6250 4250 50  0001 C CNN
	1    6050 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP11
U 1 1 5D472736
P 6150 4250
F 0 "TP11" H 6000 4650 50  0000 R CNN
F 1 "CIR" H 6150 4450 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 6350 4250 50  0001 C CNN
F 3 "~" H 6350 4250 50  0001 C CNN
	1    6150 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint GND1
U 1 1 5D4713A5
P 4500 3100
F 0 "GND1" V 4500 3750 50  0000 C CNN
F 1 "TP5" V 4500 3350 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 3100 50  0001 C CNN
F 3 "~" H 4700 3100 50  0001 C CNN
	1    4500 3100
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint 3.3V1
U 1 1 5D47151E
P 4500 3200
F 0 "3.3V1" V 4500 3850 50  0000 C CNN
F 1 "TP6" V 4500 3450 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 3200 50  0001 C CNN
F 3 "~" H 4700 3200 50  0001 C CNN
	1    4500 3200
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint DL1
U 1 1 5D47166F
P 4500 3300
F 0 "DL1" V 4500 3900 50  0000 C CNN
F 1 "TP7" V 4500 3550 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 3300 50  0001 C CNN
F 3 "~" H 4700 3300 50  0001 C CNN
	1    4500 3300
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint DR1
U 1 1 5D471797
P 4500 3400
F 0 "DR1" V 4500 4000 50  0000 C CNN
F 1 "TP8" V 4500 3650 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 3400 50  0001 C CNN
F 3 "~" H 4700 3400 50  0001 C CNN
	1    4500 3400
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint L2
U 1 1 5D471A04
P 4500 3600
F 0 "L2" V 4500 4200 50  0000 C CNN
F 1 "TP10" V 4500 3850 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 3600 50  0001 C CNN
F 3 "~" H 4700 3600 50  0001 C CNN
	1    4500 3600
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint L1
U 1 1 5D4718BD
P 4500 3500
F 0 "L1" V 4500 4100 50  0000 C CNN
F 1 "TP9" V 4500 3750 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 3500 50  0001 C CNN
F 3 "~" H 4700 3500 50  0001 C CNN
	1    4500 3500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4650 2600 4500 2600
Wire Wire Line
	4650 3300 4500 3300
Wire Wire Line
	4650 3400 4500 3400
Wire Wire Line
	4650 3500 4500 3500
Wire Wire Line
	4650 3600 4500 3600
Wire Wire Line
	5350 4100 5350 4250
Wire Wire Line
	5450 4100 5450 4250
Wire Wire Line
	5650 4100 5650 4150
Wire Wire Line
	5850 4100 5850 4250
Wire Wire Line
	5950 4100 5950 4250
Wire Wire Line
	6050 4100 6050 4250
Wire Wire Line
	6150 4100 6150 4250
Wire Wire Line
	6650 2700 6900 2700
Wire Wire Line
	6650 2800 6900 2800
Wire Wire Line
	6650 2900 6900 2900
Wire Wire Line
	6650 3500 6900 3500
Wire Wire Line
	6650 3600 6900 3600
Wire Wire Line
	5150 1950 5150 2100
Wire Wire Line
	5250 1950 5250 2100
Wire Wire Line
	5350 1950 5350 2100
Wire Wire Line
	5750 1950 5750 2100
Wire Wire Line
	5850 1950 5850 2100
Wire Wire Line
	5950 1950 5950 2100
Wire Wire Line
	6050 1950 6050 2100
$Comp
L Device:R_Small_US R2
U 1 1 5D4A26A6
P 2500 2650
F 0 "R2" V 2295 2650 50  0000 C CNN
F 1 "1K" V 2386 2650 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2500 2650 50  0001 C CNN
F 3 "~" H 2500 2650 50  0001 C CNN
	1    2500 2650
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small_US R1
U 1 1 5D4A3546
P 2150 2300
F 0 "R1" H 2218 2346 50  0000 L CNN
F 1 "100K" H 2218 2255 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2150 2300 50  0001 C CNN
F 3 "~" H 2150 2300 50  0001 C CNN
	1    2150 2300
	1    0    0    -1  
$EndComp
$Comp
L power:GNDREF #PWR02
U 1 1 5D4A3870
P 2150 1900
F 0 "#PWR02" H 2150 1650 50  0001 C CNN
F 1 "GNDREF" H 2155 1727 50  0000 C CNN
F 2 "" H 2150 1900 50  0001 C CNN
F 3 "" H 2150 1900 50  0001 C CNN
	1    2150 1900
	-1   0    0    1   
$EndComp
$Comp
L power:GNDREF #PWR01
U 1 1 5D4A462C
P 1500 1900
F 0 "#PWR01" H 1500 1650 50  0001 C CNN
F 1 "GNDREF" H 1505 1727 50  0000 C CNN
F 2 "" H 1500 1900 50  0001 C CNN
F 3 "" H 1500 1900 50  0001 C CNN
	1    1500 1900
	-1   0    0    1   
$EndComp
$Comp
L Transistor_FET:2N7000 Q1
U 1 1 5D4A4A35
P 1600 2650
F 0 "Q1" H 1806 2604 50  0000 L CNN
F 1 "2N7000" H 1806 2695 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 1800 2575 50  0001 L CIN
F 3 "https://www.fairchildsemi.com/datasheets/2N/2N7000.pdf" H 1600 2650 50  0001 L CNN
	1    1600 2650
	-1   0    0    1   
$EndComp
$Comp
L Device:CP1 C1
U 1 1 5D4A6E48
P 1300 3250
F 0 "C1" H 1050 3300 50  0000 L CNN
F 1 "10uF" H 1000 3200 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1300 3250 50  0001 C CNN
F 3 "~" H 1300 3250 50  0001 C CNN
	1    1300 3250
	1    0    0    -1  
$EndComp
$Comp
L Device:D_Schottky D1
U 1 1 5D4A9568
P 1750 3250
F 0 "D1" V 1796 3171 50  0000 R CNN
F 1 "1N58XX" V 1705 3171 50  0000 R CNN
F 2 "Diode_SMD:D_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1750 3250 50  0001 C CNN
F 3 "~" H 1750 3250 50  0001 C CNN
	1    1750 3250
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint TP1
U 1 1 5D4AB350
P 1500 3050
F 0 "TP1" H 1442 3076 50  0000 R CNN
F 1 "MTR-" H 1550 3250 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 1700 3050 50  0001 C CNN
F 3 "~" H 1700 3050 50  0001 C CNN
	1    1500 3050
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP2
U 1 1 5D4AD03B
P 1500 3550
F 0 "TP2" H 1558 3668 50  0000 L CNN
F 1 "MTR+" H 1450 3750 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 1700 3550 50  0001 C CNN
F 3 "~" H 1700 3550 50  0001 C CNN
	1    1500 3550
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint TP3
U 1 1 5D4AD99B
P 1500 3750
F 0 "TP3" H 1442 3776 50  0000 R CNN
F 1 "RMB" H 1442 3867 50  0000 R CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 1700 3750 50  0001 C CNN
F 3 "~" H 1700 3750 50  0001 C CNN
	1    1500 3750
	-1   0    0    1   
$EndComp
Wire Wire Line
	2400 2650 2150 2650
Wire Wire Line
	2150 2400 2150 2650
Connection ~ 2150 2650
Wire Wire Line
	2150 2650 1800 2650
Wire Wire Line
	2150 1900 2150 2200
Wire Wire Line
	1500 1900 1500 2450
Wire Wire Line
	1300 2950 1300 3100
Wire Wire Line
	2800 2700 2800 2650
Wire Wire Line
	2800 2650 2600 2650
Wire Wire Line
	2800 2700 4650 2700
Wire Wire Line
	1500 2850 1500 2950
Wire Wire Line
	1300 2950 1500 2950
Connection ~ 1500 2950
Wire Wire Line
	1500 2950 1500 3050
Wire Wire Line
	1750 3100 1750 2950
Wire Wire Line
	1750 2950 1500 2950
Wire Wire Line
	1300 3550 1500 3550
Wire Wire Line
	1300 3400 1300 3550
Wire Wire Line
	1750 3550 1500 3550
Wire Wire Line
	1750 3400 1750 3550
Connection ~ 1500 3550
Wire Wire Line
	1500 3750 1500 3550
Wire Wire Line
	5750 4100 5750 4850
Wire Wire Line
	5750 4850 5500 4850
Wire Wire Line
	5800 4150 5650 4150
Connection ~ 5650 4150
Wire Wire Line
	5650 4150 5650 4250
Wire Wire Line
	5550 4800 5900 4800
Wire Wire Line
	5550 4100 5550 4250
Connection ~ 5550 4250
Wire Wire Line
	5550 4250 5550 4800
NoConn ~ 6650 3200
NoConn ~ 6650 3300
NoConn ~ 6650 3400
NoConn ~ 5650 2100
NoConn ~ 5550 2100
NoConn ~ 5450 2100
NoConn ~ 4650 2800
NoConn ~ 4650 2900
NoConn ~ 4650 3000
Wire Wire Line
	5200 3100 5200 3000
Wire Wire Line
	5200 3000 6650 3000
Connection ~ 6650 3000
Wire Wire Line
	5250 3200 5250 3100
Wire Wire Line
	5250 3100 6650 3100
Connection ~ 6650 3100
$Comp
L power:+3.3V #PWR06
U 1 1 5D4DEC95
P 7850 3100
F 0 "#PWR06" H 7850 2950 50  0001 C CNN
F 1 "+3.3V" V 7865 3228 50  0000 L CNN
F 2 "" H 7850 3100 50  0001 C CNN
F 3 "" H 7850 3100 50  0001 C CNN
	1    7850 3100
	0    1    1    0   
$EndComp
$Comp
L power:+3.3V #PWR04
U 1 1 5D4DF831
P 3650 3200
F 0 "#PWR04" H 3650 3050 50  0001 C CNN
F 1 "+3.3V" V 3665 3328 50  0000 L CNN
F 2 "" H 3650 3200 50  0001 C CNN
F 3 "" H 3650 3200 50  0001 C CNN
	1    3650 3200
	0    -1   -1   0   
$EndComp
$Comp
L power:GNDREF #PWR05
U 1 1 5D4E0E22
P 7850 3000
F 0 "#PWR05" H 7850 2750 50  0001 C CNN
F 1 "GNDREF" V 7855 2872 50  0000 R CNN
F 2 "" H 7850 3000 50  0001 C CNN
F 3 "" H 7850 3000 50  0001 C CNN
	1    7850 3000
	0    -1   -1   0   
$EndComp
$Comp
L power:GNDREF #PWR03
U 1 1 5D4E1FF5
P 3650 3100
F 0 "#PWR03" H 3650 2850 50  0001 C CNN
F 1 "GNDREF" V 3655 2972 50  0000 R CNN
F 2 "" H 3650 3100 50  0001 C CNN
F 3 "" H 3650 3100 50  0001 C CNN
	1    3650 3100
	0    1    1    0   
$EndComp
Connection ~ 4500 3100
Wire Wire Line
	4500 3100 4050 3100
Wire Wire Line
	6650 3000 6900 3000
Connection ~ 6900 3000
Wire Wire Line
	6650 3100 6900 3100
Connection ~ 6900 3100
Wire Wire Line
	6900 3100 7750 3100
Connection ~ 4500 3200
$Comp
L power:PWR_FLAG #FLG02
U 1 1 5D4EA98D
P 7750 3200
F 0 "#FLG02" H 7750 3275 50  0001 C CNN
F 1 "PWR_FLAG" H 7750 3373 50  0000 C CNN
F 2 "" H 7750 3200 50  0001 C CNN
F 3 "~" H 7750 3200 50  0001 C CNN
	1    7750 3200
	-1   0    0    1   
$EndComp
$Comp
L power:PWR_FLAG #FLG01
U 1 1 5D4EB44C
P 7750 2900
F 0 "#FLG01" H 7750 2975 50  0001 C CNN
F 1 "PWR_FLAG" H 7850 3050 50  0000 C CNN
F 2 "" H 7750 2900 50  0001 C CNN
F 3 "~" H 7750 2900 50  0001 C CNN
	1    7750 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	7750 3200 7750 3100
Connection ~ 7750 3100
Wire Wire Line
	7750 3100 7850 3100
NoConn ~ 6000 5100
Wire Wire Line
	5900 4800 5900 5100
$Comp
L Connector:Conn_01x06_Female J1
U 1 1 5D4C77D6
P 5800 5300
F 0 "J1" V 5646 5548 50  0000 L CNN
F 1 "Conn_01x06_Female" V 5737 5548 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 5800 5300 50  0001 C CNN
F 3 "~" H 5800 5300 50  0001 C CNN
	1    5800 5300
	0    1    1    0   
$EndComp
Wire Wire Line
	5800 5100 5800 4150
Wire Wire Line
	5500 4850 5500 5100
Wire Wire Line
	6900 3000 7750 3000
Text GLabel 5600 5050 1    50   Input ~ 0
Vdd
Wire Wire Line
	5600 4950 5600 5100
Wire Wire Line
	5700 4950 5700 5100
Wire Wire Line
	4500 3200 3700 3200
Text GLabel 5700 5050 1    50   Input ~ 0
GND
Text GLabel 4050 3000 1    50   Input ~ 0
GND
Text GLabel 3700 3400 3    50   Input ~ 0
Vdd
Wire Wire Line
	3700 3400 3700 3200
Connection ~ 3700 3200
Wire Wire Line
	3700 3200 3650 3200
Wire Wire Line
	4050 3000 4050 3100
Connection ~ 4050 3100
Wire Wire Line
	4050 3100 3650 3100
Wire Wire Line
	4500 3100 4650 3100
Wire Wire Line
	4650 3100 5200 3100
Connection ~ 4650 3100
Wire Wire Line
	4500 3200 4650 3200
Wire Wire Line
	4650 3200 5250 3200
Connection ~ 4650 3200
$Comp
L Connector:TestPoint RY1
U 1 1 5D4708AF
P 4500 2600
F 0 "RY1" V 4500 3250 50  0000 C CNN
F 1 "TP4" V 4500 2850 50  0000 C CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 4700 2600 50  0001 C CNN
F 3 "~" H 4700 2600 50  0001 C CNN
	1    4500 2600
	0    -1   -1   0   
$EndComp
$Comp
L Connector:TestPoint CMD1
U 1 1 5D470360
P 5350 1950
F 0 "CMD1" H 5350 2250 50  0000 L CNN
F 1 "TP13" H 5400 2450 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5550 1950 50  0001 C CNN
F 3 "~" H 5550 1950 50  0001 C CNN
	1    5350 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:TestPoint DAT1
U 1 1 5D4704A8
P 5250 1950
F 0 "DAT1" H 5150 2150 50  0000 L CNN
F 1 "TP12" H 5200 2350 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_2.0x2.0mm" H 5450 1950 50  0001 C CNN
F 3 "~" H 5450 1950 50  0001 C CNN
	1    5250 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	7750 2900 7750 3000
Connection ~ 7750 3000
Wire Wire Line
	7750 3000 7850 3000
$EndSCHEMATC

# Engineering-Design-project _Water level Detector

As part of the course module EN1190 Engineering Design Project, we were given to make a 
project and demonstrate that. We have started this project in the beginning of the semester 02. 
We planned to make a water level sensor to get alert about the water level in tanks to avoid the 
problems due to the water. 


After that we have worked together throughout that entire semester and now we have finished 
that completely. Now our project is ready to demonstration. 
We selected to use Atmega328P micro controller. Then we analyzed the all feasibilities and all 
possibilities. The Design of PCB and Enclosure was done using Altium software and Solid 
works software respectively. This report is written in order to explain the functionality, how we 
approach and implement to achieve the desired task, important issues faced during the project 
progress and the solution we came up.


1.Indroduction

1.1.  Problem
In some houses, they have tanks at the backyard of their houses, and they may be far. So that, it is hard to hear the overflowing sound of the tank from the house. Then after switch on the motor, they have to go somewhat near the tank and wait until they hear the overflowing sound. If they the overflowing sound then, they will immediately run and they will switch off the motor. Think if they could know that the tank is going to overflow by being in the house, then they could easily switch on and off motor by just being in the house. Also, if they are busy doing a work, then if they notified, it will be good for them to switch off the motor at the right time without letting overflow.

In these power cut days, what if their water tank is also empty. They can’t refill at that time and without power and water it will be horrible to be in the house. Think about that if you can know water level of the tank and power cut schedule too, then you can make decision that the remaining water is enough to use in the power cut period. If it is not enough, you can refill the tank, just before the power cut.

If a person is living alone in his house and the water tank is empty while he is the bathroom or toilet, what will he or she could do. It will be more uncomfortable to them to come and switch on the water tank. Then think what if you can get an alert while your water tank is going empty (below 15% of the full tank or as per your lower level), and he or she can switch on the motor if tank is going empty, then there will be no such problem now. 
At nighttime you are watching TV or doing some office work or playing mobile games and you have forgotten to switch off the motor. Then the motor will work for some more minutes. This will cause,
	Water wastage.
	Power wastage.
	Motor coil will burn.
	Water level in well will get below the water pump inlet pipe and then you can’t refill the tank if it got empty after some hours.
Think if they get alert to switch off the motor, then we can avoid these issues.

1.2. Problem validations
We have conducted a survey via Google Forms to obtain quantitative feedback and the expectations from the end-users to validate the problem that we identified.
Survey link:- https://bit.ly/ProposalSurveyE-14
	According to the survey, 76.2% responded, they said they did ever switch off the pump right after the tank got filled fully. 
	They also often face the issue which is forgetting to switch off the motor while overflowing sometime. 
	They face any problem, that your tank got empty during power cut period rarely. 
	Among them, 91.7% wish to see the tank water level, want to refill it according to power cut period schedule and wish to have an indicator system to alert you just before when the water level is low and when the water is getting over flowed. 
	Two-thirds of the respondents they prefer to run that system on a battery. 
Therefore, we can safely conclude from the results obtained by the survey that our product will be beneficial to a majority of Sri Lankans in this economic crisis conditions. 
Reference to survey results: https://bit.ly/SurveyResult_E-14

1.3. Motivation for selection
There is a need of solution to handle following problems
	Water wastage. 
	Power wastage. 
	 Motor coil will burn. 
	Water level in well will get below the water pump inlet pipe and then you can’t refill the tank if it got empty after some hours. 
As Engineering graduate, We have the responsibility for find the solutions. That’s why we motivated

1.4. Solutions
We can return the overflow pipe to the well. Hence the overflow water will not get wasted. But, if it’s a tube well, we can do it. However, we can’t avoid the wastage of power. Moreover, if the motor continues to work, there is a probability of burning winding coil. Here we cannot solve that issue.
Our Solution
Our group has planned to design a system that could identify the water level in the tank and notify the user for 24hrs. Our device will be fixed on the top of the tank. This device will have ultrasound wave generator and receiver. First ultrasound will be sent through the device, and they get reflected at the water level. These reflected waves will be sensed through sensors and there will be an IC to calculate the time difference. By multiplying half of the time difference with the speed of ultrasound waves we can calculate the empty water tank height. We already know the height of the tank.
Percentage of water in the tank =(Height of the tank-Height of empty space water tank)/(Height of the water tank)×100%
 Then we can calculate the percentage of water in the tank, and we can notify the user.
This system will alert the user if the water tank goes empty. For example, if the percentage of water in the tank goes below 15% (can adjust as per user wish), user will get notified with an alert. 
If the tank is going to overflow (over 95%), then the user can switch off the motor before tank gets overflowed and there is no need to hardly hear that overflowing sound of the tank.

1.5. Constrains
There can be a possibility to damage the device by the rain. There will be circuits that can be short, and the enclosure can rust.  We can solve this by making sure that the enclosure is waterproof. We can use the material in enclosure fiber or plastic. But then the budget will also get higher.                                                         
Water level controls need to be replaced every 3 years. Our solution to that problem is our “revolutionary water level control” Checkpoint product that will never rust, foul or deteriorate due to water quality or harsh environments. Never replace water level controls again with the new all-electronic Checkpoint Water Level Controller.                           
Also, budget can be high for this product because this product little bit complicated.
The users are fear of the AC power supply and then we have to use DC power supply and we must manage with low power to increase the duration periods of recharging batteries. we need to recharge the battery every week.
Users prefer an automated motor switch working mechanism on this sensor but as our project is very time-limited we can't include that feature here. 
Also, we can automatically switch off the piped water supply but as our project is very time-limited we can't include that feature here.

1.6. Reasoning
We took sample set of people and did a survey, that’s why we proposed some following ideas
	Use a water level sensor with a mobile alert system (Apps)
	Use a water level sensor with an automated alarm system
	Use an extra tank to collect extra water
	About the discussion of Use a water level sensor with a mobile alert system (Apps)
Most of the people preferred this and it appeared as an easy way to them. Because most of us check mobile phones lot time within a minute. That’s why it is the most suitable solution, and we can get alert from anywhere then we will take action to operate water pump. We can manage with a small equipment’s and low expensive.
	About the discussion of Use a water level sensor with an automated alarm system.
This system is also same as above, but we can’t hear the sound of alarm after we crossed a certain bandwidth. So that they got back to select this. This method doesn’t help to the man, who couldn’t hear overflow sound and forget to be switched off motor
	About the discussion Use an extra tank to collect extra water
It also good idea but if we went outside then the 2 tanks are filled together then the second tank will get ready to overflow. That’s why it’s get reduce of efficiency. Need a lot of cost than other systems
By the inductive reasoning of these discussion of the sample of people then we decide to develop a water level sensor that’s why we proposed this method.
1.7.  Innovation Rating
Our system is not a completely new model. There already exists a system, which works in mechanical manner. But here we develop an electronic system. Comparing to the mechanical system, our design is quiet best as our system is small in size and using low power. In addition to this we are providing the output information 24 hours. Also, we have an alert system to switch on the water pump when the tank is going empty.

2.Technical Analysis
2.1. Technical Feasibilities
	Inexpensive:
Our product only consists of simple electronic components and is technically feasible. The relevant hardware components are common
	Be easy to assemble . This eliminates the necessity for a highly functional software.(Just Bluetooth data receiving app)
	Store the energy that we can use power for during powercut also..(Rechargable) 
	Low Power consumption. 

2.2. Technical Specifications for your product
	The product has low power consumptions.(5 to 12 V D/C)(Rechargable)
	The product has low weight. That’s why fix or hang it easily(400 g – 600 g)
	No threats.              
	No pollutions
	The product can share the Bluetooth signal with same strength for 24 hours
	The product can be manually controlled.
	The product is more effective within a100 m radius.

2.3  Technical Accuracy(power&Weight)

Components	Weight	Power consumption
Atmega 328P Microcontroller	2.16 g	100 mW
Ultrasonic Sensor HC-SR04	8.5 g	75 mW
Bluetooth Module HC-06	4 g	240 mW
16 MHz Oscillator	0.53g	60 mW
PCB	22 g	100 mW
Enclosure	410 g	-
Other components	21 g	120 mW
Total	468.19 g	695 mW


Item	Quantity	Unit Price (Rs)	Total (Rs)
Atmega 328P Microcontroller	1	2000	2000
Ultrasonic Sensor HC-SR04	1	250	250
Bluetooth Module HC-06	1	900	900
16 MHz Oscillator	1	25	25
Battery	1	1000	1000
LED	1	2	2
On off Switch	1	20	20
Air Suckers	2	25	50
4 Pin headers	2	30	60
2 pin headers	2	30	60
0.33 uF capacitor	1	30	30
0.11 uF Capacitor	1	20	20
220 Ω Resistor	2	5	10
470 Ω Resistors	1	5	5
22 pF Capacitor	2	20	20
PCB Printing	1	500	500
Enclosure	1	2800	2800
Total	-	-	7752

3. Design
 3.1. List of components used & Budget
Exporting price 8000 LKR

3.1.1 Atmega 328P Microcontroller
The microcontroller we used was ATmega328p 28-SPDIP package. This is a 8-bit, RISC-based microcontroller with 32KB ISP Flash memory, 1024B EEPROM, 2KB SRAM and 23 general I/O pins. Also it consists of a 6-channel 10- bit A/D converter. This device operates under 1.8-5.5 volts.
The key points we considered to select this microcontroller are its low power consumption, inbuilt ADC and ease of use in a home environment. Implementing an optimum algorithm which uses less memory was one of the major objectives of our project because we had to get the highest performance from the limited resources of the microcontroller. 
When we were in initial steps, an Arduino board was used to program the microcontroller and as we moved into breadboard level, an ”USBasp” programmer was used. The outer appearance and the pin diagram of ATmega328p 28-SPDIP are shown in figure 1 and figure 2 respectively.

3.1.2 Ultrasonic Sensor HC-SR04
This is the HC-SR04 ultrasonic distance sensor. This economical sensor provides 2cm to 400cm of non-contact measurement functionality with a ranging accuracy that can reach up to 3mm. Each HC-SR04 module includes an ultrasonic transmitter, a receiver and a control circuit.
There are only four pins that you need to worry about on the HC-SR04: VCC (Power), Trig (Trigger), Echo (Receive), and GND (Ground). You will find this sensor very easy to set up and use for your next range-finding project!
This sensor has additional control circuitry that can prevent inconsistent "bouncy" data depending on the application.

3.1.3 Bluetooth Module HC-06
HM-06 is a Bluetooth module designed for establishing short range wireless data communication between two microcontrollers or systems. The module works on Bluetooth 2.0 communication protocol and it can only act as a slave device. This is cheapest method for wireless data transmission and more flexible compared to other methods and it even can transmit files at speed up to 2.1Mb/s.
HC-06 uses frequency hopping spread spectrum technique (FHSS) to avoid interference with other devices and to have full duplex transmission. The device works on the frequency range from 2.402 GHz to 2.480GHz.
HC-06 Bluetooth Module Advantages
	HC-06 is best option when short distance wireless communication is needed. The module is used for wireless communications of less than 100 meters.
	The module is very easy to interface and to communicate.
	The module is one of the cheapest solutions for wireless communication of all types present in the market.
	The module consumes very less power to function and can be used on battery operated mobile systems.
	The module can be interfaced with almost all controllers or processors as it uses UART interface.

3.1.3 16 MHz Oscillator
Crystal Oscillator is an Electronics Oscillator circuit which uses the mechanical resonance of a vibrating crystal of piezoelectric material to generate an electrical signal with an accurate frequency. It also has automatic amplitude control and frequency drift is also very low due to change in temperature. Crystal Oscillators are only suitable for high-frequency application. Crystal oscillator works on the principle of the Inverse Piezoelectric Effect, the applied electrical field will generate a mechanical distortion across some material. Therefore, it utilizes the vibrating crystal’s mechanical resonance, which is made through a piezoelectric material for generating an electrical signal of a certain frequency. Almost all microcontrollers have external oscillator when you want to use different clock speed in the microcontroller itself. Crystal Oscillators have two leads, there is no polarity for crystals and hence can be connected in both directions.
Specifications:
	Resonance Resistance 40ohms (max)
	Oscillation mode: Fundamental mode
	Shunt Capacitance less than 7pF
	Drive Level less than 100µW
	Operating Temperature Range: -20 to + 70°C
	Operable Temperature Range: -25 to + 85°C
	Storage Temperature Range: -55 to + 125°C

3.2. Product Architecture
3.3. Circuit Diagram
3.4. PCB Design
The schematic of the circuit was drawn first and the PCB  was designed accordingly using Altium. The PCB was made small as much as possible.(length 5.5 cm and width 5.3 cm) Power lines were made more thick than the signal lines. Lines were routed in the top and the bottom layer. The coper lines were routed at a thickness of 8.5mm 
3.4.1. PCB Schematic
	PCB Design Rules

• PCB length – 55mm 
• PCB width - 53mm 
• PCB clearance between two copper lines 0.85 mm
• width of copper wire – 8.5mm
• Hole size -0.85 mm
3.4.3. PCB Footprint
3.4.4. PCB 3D Model

3.5 Enclosure Design
Our enclosure is 12.5 cm in length, 7.5cm width and 4cm in height. Thickness of the top and bottom plane of the casing is of 3mm. Other sides are 2.5mm in thickness. Our enclosure is composed of two parts base casing and top casing 4 holes with 3mm diameter and 20mm depth are left on top casing for fixing two enclosure parts together. In the top casing holes for LED and Switch are placed at one side and In the top plane there are two round holes left for placing ultra sonic sensor. 4 holes with 3mm diameter and 5mm depth left on base casing to fix PCB on that
At the outside of the base casing 4 holes are left to fix the device on the tank

3.5.1. Enclosure sketch
3.5.2. Enclosure Parts 
3.5.3. Enclosure Assembly 

3.6. UI Design
3.6.1. UI Design sketch
3.6.2. UI Design

Link for mobile app download :- https://bit.ly/3T5Wd2W
	First up all download the app using above link or QR code and install
	Then on Bluetooth
	Pair with HC06
	Then open the app
	 Then connect to the HC06 Bluetooth module
	Then set the total tank height by pressing 'set tank height and capacity ' when the tank is empty
	If the customer want they can enter the tank volume also so that they can get to know how much volume has been filled (Optional)
	After set the total height of the tank, user can see the percentage of filled water level
	After exceeding 90% of the water level, user will get a notification reminding that tank is going to fill completely similarly water level going under 10%,then its shows tanking is going to  empty

4. Methodology 
4.1 Functionality
	Function of the pcb
	We are giving 7.5V by batteries
	Then that voltage will connect to the 7805 voltage regulator
	So, we can get 5V as output of the voltage regulator which will be the input voltage for the other components of the circuit
	We are using two capacitors for the voltage regulator circuit. those are used to smooth the voltage if any ripples occurred
	A LED is set to indicate the on off state of the circuit
	4 pin header is used to connect the ultrasonic sensor. ultrasonic sensor will measure the time taken by ultrasonic wave to hit the object and reflect to itself
	Another 4 pin header is used to connect the HC06 Bluetooth module
	We are using a voltage divider to input 3.3V to the receiver pin for HC06
	16Mhz crystal oscillator is used to input a clock signal. Atmega328p is measuring the time using this crystal oscillator
You have to fix this device in the inside of lid of the tank .Then download the application from the link provide in the user manual. And then set the height of tank and turn on the notifications option for the particular mobile app.
After that we on the switch, then the device will be started to work. Then ultra sonic sensor send the signal and receive the reflected signal. From that it calculated the time difference of the travelling and estimate the distance between the water level and top of the tank. From above calculations, The mobile app will shows the percentage of water in the tank. This will appear as notifications

4.2 Breadboard Implementation

4.3 PCB Implementation

4.4  Results
You have to fix this device in the inside of lid of the tank .Then download the application from the link provide in the user manual. And then set the height of tank and turn on the notifications option for the particular mobile app.
After that we on the switch, then the device will be started to work. Then ultra sonic sensor send the signal and receive the reflected signal. From that it calculated the time difference of the travelling and estimate the distance between the water level and top of the tank. From above calculations, The mobile app will shows the percentage of water in the tank. This will appear as notifications

5. Marketing,sales and Beyond
	Product packaging: -
Protection
We are packing our device in a cuboid cardboard box, wrapping our device with Bubble wrap polythene bag and Styrofoam material will be used to pack our device inside the box perfectly. Our logo will be embedded in the box and other information such as device specifications and warranty period will be also mentioned in that box.
It will protect our device from sudden jerks or vibrations and extreme external environmental conditions while transporting(shipping) our device.
Appearance
Package will be sealed with transparent polythene to clearly 
show what is printed on the package box clearly to others.
Details to be printed on the box. 
	Company Logo and Product name
	mages of the final product
	Price of the product
	Warranty period
	technical specifications
	How to fix our product
Easiness of use
For the easiness of use User Manual or Technical Guide will be placed along with the device in the box. Pictorial  representation will be used mostly since everyone could understand it easily.
Storage
Since our product is a small portable device, there will be not any problem for distributors about storage size.
Promotion
We have planned to do a pictorial or if it is possible an animated video demonstration and publish it through social media paid promotional options.
	Maintenance: -
Service warranty will be provided for six months through your dealers. If you have purchased through online, service warranty will be provided through near-by service centers and users have to submit their online purchase receipts to obtain that service.
You can clarify the things that you want through these dealers.
You can place your complaints, issues related to our device and any other upgrading ideas for developing our device, in our website. It will be very helpful for us to develop and upgrade our product further efficiently and comfortably for users.
	Product Life cycle
	Repair
If you have any issues related to our device, then you can approach our service centers nearby. If it happens before the guaranteed period, service will be provided with free of charge otherwise it will be paid service.
Within the guaranteed period, If the device fails to work properly, they will check for the errors and they will repair it otherwise we will provide refurbished device to you.
	Disposal
If the device is damaged and you can’t use it anymore, then dispose it in a proper manner. Otherwise, we are encouraging our users, hand it over to the nearby service centers and they will dispose it in proper E-waste management system.
	Manufacturing:
-  We have decided to manufacture certain number of products nearly 50 items per day and every item will be send to testing unit to check whether each devices passes all test cases and then products successfully passed in all test cases will be send to packaging unit.
-  Other products will be sent for re-examination.
	Marketing and Sales
	Through online shopping platforms such as e-bay,  
          AliExpress, Alibaba, Daraz, Amazon etc.
	  Advertising through social media platforms using online 
       paid  promotions in Facebook, Instagram etc.
	 Through electronic sales mediators (LG, SINGER, ABANS            
    showrooms)
	Using company’s own web page customers can order for    
     personal and for bulk as well.

6.Discussions
There were various challenges, which we had to face during the execution of this project. The obstacles we had to go through were stated follow. 
• Considering the size and the internal structure of our device will be more complex because of we need to fix the ultrasonic sensor stably and this is a rechargeable device therefore we need to fix a rechargeable battery and rechargeable port also. Hence, we need to correctly calculate the size of holes and ports same time the total size of the enclosure.
• Another main problem is the sending and receiving the signal by sensor, because there was talk like that the signals doesn’t reflect in the surface of water, therefore we need to confirm that else we need to find another substitutable way for that. Then, finally we found the ultrasonic sensor and fix that as the sensor for our device.
• After that we struggled with data transferring from the tank to mobile. Here also another talk like that the Bluetooth module can transfer data within 10 m radius. After that we found a Bluetooth module, which can transfer data within 100m radius
• When  designing enclosure, There also difficulties with fixing the dimensions.
• When designing the PCB there were some difficulties because of the lack of experience in PCB designing. We had to learn and follow PCB design rules

7.  Acknowledgment
We would like to thank each and every person who has helped us even in a very small manner in order to achieve good results in this project. We would like to specially thank Mr. Ajith Pasqual sir, who was module lecturer. He motivated us to learn the extra subjects required for this project ourselves. He also helped us in clearing our doubts and ambiguates regarding the project.

8. References 

	https://www.electronicwings.com/avr-atmega/interfacing-lcd-16x2-in-4-bit-mode-with-atmega16-32- 
	https://www.youtube.com/watch?v=lq0R4Yz05o4 
	https://www.programming-electronics-diy.xyz/2021/02/playing-music-and-tones-usingpiezo.html 
	https://youtube.com/playlist?list=PLA6BB228B08B03EDD 
	https://embedds.com/programming-avr-i2c-interface/ 


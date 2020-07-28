# Robot-Bug
Srishti 2020
## Abstract:<br/>
<p align="center">
Aim of the project is to make a robot bug that can be used to collection information from places that are inaccessible for humans<br/>

![image](https://user-images.githubusercontent.com/55125159/88085295-47a00a80-cba3-11ea-95ea-f0bd5559e5a1.jpg)

 
## Motivation:<br/>
<p align="center">
We have been hearing of robots being used mainly in factories for automating time-consuming processes and how they have radically changed the way work is being done. In the current times, the focus is on how the use of robotics outside the factory can change our lives over the coming decades. This is not just limited to easing out the day to day tasks but also includes the use of robots for more complex tasks. 

## Mechanical Aspects of Design:
1)	3 servo motors have been used for the project. The function of the servo motor placed along the side face of bug’s body rotates the bevel gears which is turn raise the arm up
2)	Once the arms are raised, the 2 servo motors being attached on the arms(1 on each) then moves the arms forward. 
3)	Hence first the arms are raised, then they move forward, touch down and then bot moves forward
4)	A castor wheel is also attached so that the bot can move smoothly without any restrictions due to friction. 


## Electronic Aspects of Design:
1)	Arduino has been attached to the body which controls the servo motors’ performance like angle of rotation and speed etc.
2)	The speed and the angles have been optimized as per the design and weight of the bug
3)	A rechargeable 11V battery has also been connected to Arduino for power supply

## Flowchart
![Screenshot (20)](https://user-images.githubusercontent.com/55125159/88693423-e46f2480-d11c-11ea-87b7-0cd2659561b9.png)


## Cost Structure:
|Components    |Number Used|Cost(INR.) |
|---           |---	   |---        |
|Arduino UNO   |1          |500        |
|Battery       |1          |400        |
|Caster Wheel  |1          |25         |
|Servo Motors|3 |250  |
|Bluetooth Module |1   |350   |
|Miscellaneous   |---|150 |
|Total |2175|
	
                                                            

## Application:

1)	Making surveillance of any disaster-affected area where human beings can’t go.
2)	Some areas need to be placed under video surveillance for a short time only, and therefore equipping them with stationary CCTV systems is not viable. Such challenges often arise in agricultural settings. For example, the fields might only need to be placed under video surveillance when the crops are reaching maturity. Surveillance of pastures is advantageous only while cattle are roaming around them. 
3)	Can be used in industries to detect parts of the machinery that are faulted. 

## Limitations:
1)	The speed of a robot is a concern. It can not to be used for detection purposes when time is a major constraint.
2)	It is occupying more space than expected due to use of macro Arduino, 11V battery.
3)	It currently has only recorded videos and images and not live recording.

## Further Improvements:
1)	We can use nano Arduino, a battery of 9V (smaller than 11V) hence reducing surface areas, in return reducing the dimensions of legs being attached. This will help in reducing space occupied and also increasing the speed due to lesser weight load on motors.
2)	We can also include the features of live recording by using RasberryPi



## Team Members:
1)	Himank Sehgal
2)	Ketan Dongre
3)	Shreyam Bansal
4)	Ujjwal Das
5)	Vaibhav Saini



## Mentors:
1)	Ruchika Guntewar
2)	Shashi Muchkund


## References:
1) https://grabcad.com/  <br/>
2) https://stackoverflow.com/   <br/>
3) https://www.arduino.cc/en/Tutorial/HomePage?from=Main.Tutorials
</p>

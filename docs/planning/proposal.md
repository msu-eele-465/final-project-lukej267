# Memo to:
Trevor Vannoy

# From: 
Luke Johnson

# Date:
April 1, 2025

# Regarding: 
Final-Project Proposal

# Final project proposal

- [ LJ ] I have reviewed the project guidelines.
- [ LJ ] I will be working alone on this project.
- [ LJ ] No significant portion of this project will be (or has been) used in other course work.

## Embedded System Description

    The embedded system will be a motion detector that automatically turns on a light, in this case an LED, and r
emain on for a certain amount of time then automatically turn of if there is no more motion detected after the se
t time. The system will also be able to be overriden with a button and remain on until the next button press, aft
er which will default to the motion detection routine. The distance sensor can be used as a visual debug tool for the user to see whether or not their motion is within the detection range. This system can be useful in the real world by saving energy in a room when it is not in use. It also can function as a safety precaution to prevent people from stumbling or bumping into objects in the room while the lights are not on. It will also be easily debuggable since it has the distance sensor and LED bar to act as a visual confirmation that the device is working.


## Hardware Setup

What hardware will you require? Provide a conceptual circuit diagram and/or block diagram to help the reviewers understand your proposal. Be sure to introduce and discuss your figures in the text.

- MSP430FR2355
- MSP430FR2310
- Motion Detector Device
- Distance Sensor
- Buttons on MSP430FR2355 Board
- LED Bar

## Software overview

![Picture](Final-Flowchart.drawio.svg)

The MSP430FR2355 will act as a master for the MSP430FR2310 and communicate via I2C which will take in data from the motion detector and make a decision on whether to turn on the LEDs or not. There will also be an ISR for the buttons to check for presses in order to turn on or off the LED. The distance sensor will work with the master MSP430FR2355 to adjust how many LEDs to turn on the bar. 

## Testing Procedure

No special equipment should be required. Testing/Demo will consist of the device starting as off while the motion detector scans for motion upon which it will turn on for a set amount of time. The button presses will also be simple to test as button 1 would turn on and off the light. The distance sensor will also require the user to wave their hand in front of the sensor to watch the appropriate amount of LEDs to light up on the bar. 

![Picture](Final-CircuitDiagram.drawio.svg)


## Prescaler

Desired Prescaler level: 

- [ ] 100%
- [ ] 95% 
- [ X ] 90% 
- [ ] 85% 
- [ ] 80% 
- [ ] 75% 

### Prescalar requirements 

**Outline how you meet the requirements for your desired prescalar level**

**The inputs to the system will be:**
1.  Motion Detector
2.  Distance Sensor
3.  Button 

**The outputs of the system will be:**
1.   LED 
2.   LED Bar

**The project objective is**

To make a motion detecting system that automatically turns on a light which turns off automatically after no motion is detected for a certain amount of time. A button will be able to override this function and toggle the lights manually. The distance sensor will detect the distance of the person and display a certain number of LEDs on the bar. 

**The new hardware or software modules are:**
1. Motion Detector
2. Distance Sensor


The Master will be responsible for:

The master will be responsible for handling the LED bar and the distance sensor.

The Slave(s) will be responsible for:

The slave is responsible for handling the data from the motion sensor and the single LED.



### Argument for Desired Prescaler

I believe the Prescaler of 90% is fair because my device uses a total of 5 inputs/outputs and new devices in the form of the motion detector and distance sensor. I have also described how this has some real life application. This also uses some serial communication with I2C.  

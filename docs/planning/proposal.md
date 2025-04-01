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
er which will default to the motion detection routine. Another button will be able to adjust the hue of the LED a
fter is has been turned on. This system can be useful in the real world by saving energy in a room when it is not
 in use. It also can function as a safety precaution to prevent people from stumbling or bumping into objects in
the room while the lights are not on.


## Hardware Setup

What hardware will you require? Provide a conceptual circuit diagram and/or block diagram to help the reviewers understand your proposal. Be sure to introduce and discuss your figures in the text.

- MSP430FR2355
- MSP430FR2310
- Motion Detector Device
- Buttons on MSP430FR2355 Board

## Software overview

![Picture](Final-Flowchart.drawio.svg)

The MSP430FR2355 will act as a master for the MSP430FR2310 which will take in data from the motion detector and make a decision on whether to turn on the LEDs or not. There will also be an ISR for the buttons to check for presses in order to turn on, turn off, or change hue of the lights. 

## Testing Procedure

No special equipment should be required. Testing/Demo will consist of the device starting as off while the motion detector scans for motion upon which it will turn on for a set amount of time. The button presses will also be simple to test as button 1 would turn on and off the light while button 2 will adjust the hue for the light. 

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
2.  Button 1
3.  Button 2

**The outputs of the system will be:**
1.   LED (turn on)
2.   LED (change hue)

**The project objective is**

To make a motion detecting system that automatically turns on a light which turns off automatically after no motion is detected for a certain amount of time. A button will be able to override this function and toggle the lights manually. Another button will be able to adjust the hue/brightness of the light. 

**The new hardware or software modules are:**
1. Motion Detector


The Master will be responsible for:

The master will be responsible for the timing of the light.

The Slave(s) will be responsible for:

The slave is responsible for handling the data from the motion sensor.



### Argument for Desired Prescaler

I believe the Prescaler of 90% is fair because my device uses a total of 5 inputs/outputs and a new device in the form of the motion detector. 

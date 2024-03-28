# AutoBuggy
Auto_Buggy is a 4-wheeler chassis equipped with dual-shaft 100 RPM DC motors, an Intex 2300mAh 3.8V rechargeable Li-Ion DC battery, an L298N-based motor driver module, an Arduino Uno microcontroller, an additional 9V DC battery for the Arduino, and an ultrasonic sensor. 

Using distance information from the ultrasonic sensor, the microcontroller, based on uploaded code, determines whether to move the buggy forward, backward, or remain dormant. You can adjust the threshold values for forward movement (fwdLimit), backward movement (bwdLimit), and staying dormant (HOLD) in the code.

The L298N motor driver controls the speed and direction of the motors' rotation using PWM signals from the Arduino. The buggy is designed to follow or move away from you based on your distance from it within a specific range.

In future updates, I plan to implement speed and turning control via remote control or gestures.

## Table of Contents

- [Overview](#overview)
- [Installation](#installation)
- [Usage](#usage)
- [Issues](#issues)
- [Next Steps](#next-steps)
- [Media](#media)


## Overview

Auto_Buggy is a project aimed at creating a mobile robotic platform capable of autonomous movement. By leveraging the distance information from the ultrasonic sensor, the Arduino Uno microcontroller makes decisions to move the buggy forward, backward, or remain stationary. This project serves as a foundation for implementing more advanced functionalities such as remote control or gesture-based interaction.

## Installation

To get started with Auto_Buggy:
1. Clone this repository to your PC.
2. Upload the Arduino code to your Arduino Uno microcontroller.
3. Make the necessary connections according to the provided circuit diagrams.
4. Turn on the switches for the Arduino and motors to power up the system.

## Usage

Once the Auto_Buggy is set up, it can be used as follows:
- Adjust the values of `fwdLimit` and `bwdLimit` variables in the code to control the buggy's behavior at specific distances.
- Observe how the buggy autonomously follows or moves away from objects based on the information received from the ultrasonic sensor.

## Issues

During the development of Auto_Buggy, the main issues encountered were related to the limitations of the batteries in providing sufficient current to the motors. To address this, it's recommended to use high-current-capacity rechargeable DC batteries for optimal performance.

To prevent voltage fluctuations to the Arduino, consider the following:
- Connect it directly to a voltage source if the voltage is not higher than 12V.
- Alternatively, connect it to a separate power source such as a 9V battery.

## Next Steps

Future enhancements for Auto_Buggy may include:
- Implementing speed and turning control via remote control or gesture-based interaction.
- Enhancing the battery management system to optimize power delivery to the motors.
- Exploring compatibility with different motor drivers and providing guidelines for their integration.

## Media

### Video

[![Auto_Buggy Demo Video]

https://github.com/bhardwaj-kushagra/AutoBuggy/assets/114687412/3dccd6af-d443-4a70-9e45-7e59adcb0088


*Click the image above to watch the Auto_Buggy demo video.*

### Images

1. ![Arduino Uno](https://www.allaboutcircuits.com/uploads/articles/Arduino_UNO_R3_Pinout.jpg)
   *Arduino Uno microcontroller.*

2. ![L298N Motor Driver](https://th.bing.com/th/id/OIP.hHsY3ncNiGiMtBj3rpdc4gAAAA?rs=1&pid=ImgDetMain)
   *L298N motor driver module.*

3. ![Ultrasonic Sensor](https://th.bing.com/th/id/OIP.LmUsIY5SjgZSBWT1XEkHOgHaDp?rs=1&pid=ImgDetMain)
   *Ultrasonic sensor for distance measurement.*

4. ![Connection Diagram](https://th.bing.com/th/id/OIP.G0FhkJFKyWIA7iWqLQQlsQAAAA?rs=1&pid=ImgDetMain)
   *Circuit diagram showing connections between components.*

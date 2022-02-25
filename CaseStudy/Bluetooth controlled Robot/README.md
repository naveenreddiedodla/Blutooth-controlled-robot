## This project is how to design and develop a Bluetooth Controlled Robot using Arduino,
## HC-05 Bluetooth Module and L298N Motor Driver Module.

# Components Required:
### Arduino UNO
### DC Motors-12v
### Bluetooth module HC-05
### Motor Driver L293D
### 9 Volt Battery
### 4.5Volt rechargable v battery-2
### Battery Connector
### Arduino Car kit

## Working:
### Bluetooth controlled car is controlled by using Android mobile phone instead of any other method like buttons, 
### gesture etc. Here only needs to touch button in android phone to control the car in forward, backwardd, left and right directions.
### So here android phone is used as transmitting device and Bluetooth module placed in car is used as receiver. 
### Android phone will transmit command using its in-built Bluetooth to car so that it can move in the required direction like moving forward,
### reverse, turning left, turning right and stop.

# Circuit Design
## Bluetooth module -> Arduino

### Vcc ____________ +5V

### GND ___________ GND

### Tx ____________ D3

### L298n module -> Arduino

### IN1__________ D9

### IN2 __________D10

### IN3 __________D11

### IN4 ___________D12

### GND __________GND

### Here I have given power supply to L298n Module's 12Volt pin similarly have given the ground cable to GND pin of L298n module.
### The robot chassis which I am using in this Bluetooth Controlled Robot Car project is supplied with 2 geared motors.
### I have joined the left side motor as one set and the right side motor as other set and connected both these sets to the output
### of L298N Module.

# Bluetooth app

## Download the app from the playstore:

## First, in the Android App, I have used 5 keys as Forward, Reverse, Left, Right and Stop. The corresponding data associated with each key is as follows:

### Forward – 1
### Reverse – 2
### Left – 3
### Right – 4
### Stop – 5

### When a key is pressed, the corresponding data is transmitted to the Bluetooth Module from the Phone over Bluetooth Communication.


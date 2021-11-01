# Ligma-CCIoT
Repository for M21 CCIoT project. 
### Topic: Vanishing rod

## NodeMCU Code

The code for the NodeMCU is referenced from the Blynk template code.
https://examples.blynk.cc/?board=NodeMCU&shield=ESP8266%20WiFi&example=GettingStarted%2FBlynkBlink
Changes made:
Initialized I/O pins to digital output to work with the motors.

Code flow:
Importing required blynk and board libraries.
Initializing variables that store the ssid, passowrd of the local network and the authentication code for blynk.
Begin the serial monitor.
Establish connection with the local network.
Initialize the required I/O pins.
Run the loop indefinitely.

## ESP32-CAM Code

Referenced from the github repo https://github.com/techiesms/esp32-cam-mjpeg.
This code is to make the mpeg file run as MJPEG. This removes the overhead that comes with regular MPEG. Chunked HTTPS streams aren't accessible on the blynk dashboard so we instead stream pictures in quick succession.
It then streams the above feed to the local network.

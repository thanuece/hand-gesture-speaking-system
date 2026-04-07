## Features

* Promotes independent communication
* Improves accessibility and inclusion
* Gesture detection using MPU6050
* Bluetooth communication
* Voice message transmission

## Working

The Arduino initializes the MPU6050 sensor and HC-05 Bluetooth module.
It continuously reads accelerometer data and detects gestures based on axis values.
Each gesture is mapped to a predefined message such as "Hello", "Yes", or "Thank You".
The detected message is sent via Bluetooth and displayed on the Serial Monitor.
A mobile application receives the message and converts it into speech using Text-to-Speech.

## Future Scope

* Gesture-to-text preview display
* Wireless charging support
* Cloud connectivity for gesture storage
* Emergency alert gesture feature

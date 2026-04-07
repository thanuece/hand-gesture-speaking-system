#Features
-Promotes  Independent  Communication
-Improves  Accessibility  and  Inclusion
-Gesture detection using MPU6050
- Bluetooth communication
- Voice message transmission

#Working
System  Initialization
•	The Arduino Uno begins by initializing serial communication (Serial.begin(9600)) and Bluetooth communication with the HC-05 module (BT.begin(9600))
•	It initializes the MPU6050 sensor (mpu.initialize()).
•	The code checks if the MPU6050 is connected properly using mpu.testConnection(). If it fails, the system halts with an error message.
2. Continuous  Sensor  Reading 
•	Inside the loop(), the Arduino continuously reads raw motion data from the MPU6050 using mpu.getMotion6().
•	This function gives 3-axis accelerometer (ax, ay, az) and gyroscope (gx, gy, gz) data.
3. Gesture  Recognition
•	Based on the values of ax, ay, and az, the Arduino interprets simple hand gestures:
•	If ax > 15000, it recognizes a gesture as "Hello".
•	If ax < -15000, it's "Goodbye".
•	If ay > 15000, it's "Yes".
•	If az > 15000, it's "Thank You".
4. Bluetooth Communication
•	Once a gesture is identified, the Arduino sends the corresponding message (like "Hello" or "No") through the Bluetooth module using BT.println().
5. Serial Monitoring
•	Simultaneously, the same message is printed to the Serial Monitor for debugging using Serial.println().
6. Voice Output via Mobile
•	The paired mobile app receives the message via Bluetooth.
•	The app converts the text to speech using its internal Text-to-Speech (TTS) engine, allowing the message to be heard.

# Future scope
A gesture-to-text display feature could also be introduced, allowing users to preview the output before it is spoken, ensuring clarity and correctness.
Additionally, implementing wireless charging will improve convenience, while cloud connectivity can enable users to back up and sync custom gestures and phrases across devices. 
Introducing an emergency alert function activated by a specific gesture will increase the safety and practicality of the system in urgent situations

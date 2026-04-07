#include <Wire.h>
#include <MPU6050.h>
#include <SoftwareSerial.h>
MPU6050 mpu;
SoftwareSerial BT(2, 3); // RX, TX (Connect HC-05 TX to D2 and RX to D3 via voltage divider)
void setup() {
    Serial.begin(9600);   
    BT.begin(9600); 
    Wire.begin();
    // Initialize MPU6050 
    mpu.initialize(); 
    if (!mpu.testConnection()) { 
        Serial.println("MPU6050 connection failed!"); 
        while (1); // Stop execution if MPU6050 is not detected 
    } 
    Serial.println("Gesture Vocalizer Ready"); 
}
void loop() {
    int16_t ax, ay, az, gx, gy, gz; 
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz); 
    // Example Gesture Mapping (Modify as needed) 
    if (ax > 15000) { 
        BT.println("Hello");  // Send "Hello" via Bluetooth 
        Serial.println("Gesture Detected: Hello"); 
    } else if (ax < -15000) { 
        BT.println("Goodbye"); 
        Serial.println("Gesture Detected: Goodbye"); 
    } else if (ay > 15000) { 
        BT.println("Yes"); 
        Serial.println("Gesture Detected: Yes"); 
    } else if (ay < -15000) { 
        BT.println("No"); 
        Serial.println("Gesture Detected: No"); 
    } else if (az > 15000) { 
        BT.println("Thank You"); 
        Serial.println("Gesture Detected: Thank You"); 
    } 
    delay(500); // Adjust delay based on response speed 
}

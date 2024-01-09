#include <Arduino.h>

// Pin connected to the LED
const int ledPin = 2;

void setup() {
    // Initialize the digital pin as an output
    pinMode(ledPin, OUTPUT);
    Serial.begin(115200); // Initialize serial communication with baud rate 115200
}

void loop() {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON"); // Write LED status to serial monitor
    delay(1000); // Wait for 1 second

    // Turn the LED off
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF"); // Write LED status to serial monitor
    delay(1000); // Wait for 1 second
}

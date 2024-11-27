#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Initialize the LCD
const int buzzerPin = 8;               // Buzzer connected to digital pin 8
int lm35Pin = A0;                      // LM35 temperature sensor connected to analog pin A0

void setup() {
    lcd.begin(16, 2);                  // Initialize the LCD with 16x2 character display
    pinMode(buzzerPin, OUTPUT);        // Set buzzer pin as an output
    lcd.print("Temp: ");               // Display "Temp." on the LCD
}

void loop() {
    float temperature = readTemperature(); // Read temperature from LM35
    lcd.setCursor(6, 0);                   // Set cursor to display temperature value
    lcd.print(temperature);                // Display temperature value on LCD

    if (temperature > 38.0) {
        digitalWrite(buzzerPin, HIGH);     // Activate the buzzer if temperature > 38.0°C
    } else if (temperature < 35.9) {
        digitalWrite(buzzerPin, HIGH);     // Activate the buzzer if temperature < 35.9°C
    } else {
        digitalWrite(buzzerPin, LOW);      // Turn off the buzzer
    }
    delay(1000);                           // Delay for 1 second to update temperature reading
}

float readTemperature() {
    int sensorValue = analogRead(lm35Pin);            // Read the analog sensor value
    float voltage = (sensorValue / 1024.0) * 5.0;     // Convert to voltage (5V Arduino)
    float temperatureC = (voltage - 0.5) * 100.0;     // Convert to degrees Celsius
    return temperatureC;
}

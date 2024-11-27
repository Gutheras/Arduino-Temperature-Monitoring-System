# Arduino Temperature Monitoring System with LM35 and Buzzer
- This repository contains the code and instructions for an Arduino-based Temperature Monitoring System that utilizes an LM35 temperature sensor, 16x2 LCD and a buzzer. The system reads the temperature in real-time, displays it on the LCD screen and activates a buzzer when the temperature exceeds or falls below a predefined range.

**Features**
- Real-time Temperature Display: Uses a 16x2 LCD to show the temperature in Celsius.
- Buzzer Alarm:
  - Activates when the temperature exceeds 38°C (high temperature alert).
  - Activates when the temperature drops below 35.9°C (low temperature alert).
- Turns off when the temperature is within the safe range (35.9°C–38°C).
- Accurate Temperature Measurement: Utilizes the LM35 temperature sensor for precise readings.
- Customizable Thresholds: Thresholds for the buzzer activation can be adjusted in the code.
  
**Components Used**
- Arduino Uno (or compatible board)
- LM35 Temperature Sensor
- 16x2 LCD Display
- Buzzer
- Connecting Wires
- Breadboard
- Resistors 
  
**How It Works**
- The LM35 sensor measures the ambient temperature and sends an analog signal to the Arduino.
- The Arduino converts this signal into a temperature value in Celsius.
- The LCD displays the temperature in real-time.
- If the temperature exceeds or falls below the predefined thresholds (35.9°C–38°C), the buzzer is activated.
- The system updates every second to ensure accurate monitoring.

**Installation and Usage**
- Clone this repository:
 - ```Copy code
    git clone https://github.com/your-username/arduino-temperature-monitoring-system.git
- Install the arduino IDE ``https://www.arduino.cc/en/software``
- Open the .ino file in the Arduino IDE.
- Connect the components as described in the Circuit Diagram.
- Upload the code to your Arduino board.
- Observe the temperature readings on the LCD and listen for the buzzer alerts.

**Customization**
- To modify the temperature thresholds for the buzzer:
- Open the code and adjust the if conditions in the loop() function.
- Example:
```Copy code
if (temperature > 40.0) { // Change 38.0 to your desired high threshold
    digitalWrite(buzzerPin, HIGH);
} else if (temperature < 30.0) { // Change 35.9 to your desired low threshold
    digitalWrite(buzzerPin, HIGH);
}




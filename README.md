## **📌 Project Overview**

This project demonstrates how to control two LEDs using a push button and an Arduino UNO. The Arduino uses the `INPUT_PULLUP` feature to detect the button press. When the button is pressed, the red LED turns ON and the green LED turns OFF. When the button is released, the green LED turns ON and the red LED turns OFF.

## **🎯 Objectives**

- To learn how to interface a push button with Arduino UNO.
- To control two LEDs using a single push button.
- To understand the `INPUT_PULLUP` function.
- To learn digital input and output operations.

## **🧰 Components Required**

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| Red LED | 1 |
| Green LED | 1 |
| Push button | 1 |
| 220Ω or 330Ω resistors | 2 |
| Breadboard | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## **🔌 Circuit Connections**

| Component | Arduino Connection |
|---|---|
| Push button terminal 1 | Digital Pin 2 |
| Push button terminal 2 | GND |
| Red LED long leg (+) | Digital Pin 7 through a resistor |
| Red LED short leg (−) | GND |
| Green LED long leg (+) | Digital Pin 8 through a resistor |
| Green LED short leg (−) | GND |

**Note:** Each external LED must have its own current-limiting resistor. The button uses `INPUT_PULLUP`, so an external pull-up resistor is not required.

## **💻 Arduino Source Code**

```cpp
const int buttonPin = 2;
const int redLed = 7;
const int greenLed = 8;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  } else {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  }
}
```

## **⚙️ Working Principle**

1. The Arduino initializes the push button as `INPUT_PULLUP`.
2. When the button is pressed, the input reads `LOW`.
3. The red LED turns ON, and the green LED turns OFF.
4. When the button is released, the input reads `HIGH`.
5. The red LED turns OFF, and the green LED turns ON.

## **✅ Expected Output**

- **Button pressed:** Red LED ON, Green LED OFF.
- **Button released:** Red LED OFF, Green LED ON.

## **📚 Concepts Learned**

- Arduino UNO programming
- Digital input and output
- Push button interfacing
- `INPUT_PULLUP` configuration
- LED control using conditional statements
- Basic electronic circuit connections

## **🚀 Future Improvements**

- Use multiple buttons to control different LEDs.
- Add blinking patterns to the LEDs.
- Use a buzzer to provide sound feedback.
- Display the button status on an LCD.

## **🏁 Conclusion**

This project demonstrates how a single push button can control two LEDs using an Arduino UNO. It provides practical experience with digital input, output control, and the internal pull-up resistor feature.

## **🛠️ Technologies Used**

- Arduino UNO
- Arduino IDE
- Embedded C/C++
- Basic electronic components

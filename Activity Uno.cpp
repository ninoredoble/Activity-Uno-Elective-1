const int ledPin1 = 16; // Pin number where the first LED is connected
const int buttonPin1 = 33; // Pin number where the first button is connected

const int ledPin2 = 17; // Pin number where the second LED is connected
const int buttonPin2 = 25; // Pin number where the second button is connected

const int ledPin3 = 5; // Pin number where the third LED is connected
const int buttonPin3 = 26; // Pin number where the third button is connected

const int ledPin4 = 19; // Pin number where the fourth LED is connected
const int buttonPin4 = 27; // Pin number where the fourth button is connected

const int ledPin5 = 22; // Pin number where the fifth LED is connected
const int buttonPin5 = 14; // Pin number where the fifth button is connected

bool ledState1 = false; // Stores the state of the first LED (false = OFF, true = ON)
bool ledState2 = false; // Stores the state of the second LED (false = OFF, true = ON)
bool ledState3 = false; // Stores the state of the third LED (false = OFF, true = ON)
bool ledState4 = false; // Stores the state of the fourth LED (false = OFF, true = ON)
bool ledState5 = false; // Stores the state of the fifth LED (false = OFF, true = ON)

bool button1Pressed = false; // Flag to track the state of the first button
bool button2Pressed = false; // Flag to track the state of the second button
bool button3Pressed = false; // Flag to track the state of the third button
bool button4Pressed = false; // Flag to track the state of the fourth button
bool button5Pressed = false; // Flag to track the state of the fifth button

unsigned long button1PressTime = 0; // Variable to store the time when button 1 is pressed
unsigned long button2PressTime = 0; // Variable to store the time when button 2 is pressed
unsigned long button3PressTime = 0; // Variable to store the time when button 3 is pressed
unsigned long button4PressTime = 0; // Variable to store the time when button 4 is pressed
unsigned long button5PressTime = 0; // Variable to store the time when button 5 is pressed

const unsigned long longPressDuration = 100; // Define the duration for a long press (in milliseconds)

void setup() {
  pinMode(ledPin1, OUTPUT); // Set the first LED pin as an OUTPUT
  pinMode(buttonPin1, INPUT_PULLUP); // Set the first button pin as an INPUT with internal pull-up resistor

  pinMode(ledPin2, OUTPUT); // Set the second LED pin as an OUTPUT
  pinMode(buttonPin2, INPUT_PULLUP); // Set the second button pin as an INPUT with internal pull-up resistor

  pinMode(ledPin3, OUTPUT); // Set the third LED pin as an OUTPUT
  pinMode(buttonPin3, INPUT_PULLUP); // Set the third button pin as an INPUT with internal pull-up resistor

  pinMode(ledPin4, OUTPUT); // Set the fourth LED pin as an OUTPUT
  pinMode(buttonPin4, INPUT_PULLUP); // Set the fourth button pin as an INPUT with internal pull-up resistor

  pinMode(ledPin5, OUTPUT); // Set the fifth LED pin as an OUTPUT
  pinMode(buttonPin5, INPUT_PULLUP); // Set the fifth button pin as an INPUT with internal pull-up resistor

  digitalWrite(ledPin1, LOW); // Turn the first LED OFF initially
  digitalWrite(ledPin2, LOW); // Turn the second LED OFF initially
  digitalWrite(ledPin3, LOW); // Turn the third LED OFF initially
  digitalWrite(ledPin4, LOW); // Turn the fourth LED OFF initially
  digitalWrite(ledPin5, LOW); // Turn the fifth LED OFF initially
}

void loop() {
  // Check if the first button is pressed
  if (digitalRead(buttonPin1) == LOW) {
    if (!button1Pressed) {
      button1Pressed = true;
      button1PressTime = millis(); // Record the time when the button was pressed
    }
  } else {
    if (button1Pressed) {
      unsigned long button1Duration = millis() - button1PressTime;
      if (button1Duration >= longPressDuration) {
        ledState1 = !ledState1;
        digitalWrite(ledPin1, ledState1 ? HIGH : LOW);
      }
      button1Pressed = false; // Reset the button pressed flag
    }
  }

  // Check if the second button is pressed
  if (digitalRead(buttonPin2) == LOW) {
    if (!button2Pressed) {
      button2Pressed = true;
      button2PressTime = millis(); // Record the time when the button was pressed
    }
  } else {
    if (button2Pressed) {
      unsigned long button2Duration = millis() - button2PressTime;
      if (button2Duration >= longPressDuration) {
        ledState2 = !ledState2;
        digitalWrite(ledPin2, ledState2 ? HIGH : LOW);
      }
      button2Pressed = false; // Reset the button pressed flag
    }
  }

  // Check if the third button is pressed
  if (digitalRead(buttonPin3) == LOW) {
    if (!button3Pressed) {
      button3Pressed = true;
      button3PressTime = millis(); // Record the time when the button was pressed
    }
  } else {
    if (button3Pressed) {
      unsigned long button3Duration = millis() - button3PressTime;
      if (button3Duration >= longPressDuration) {
        ledState3 = !ledState3;
        digitalWrite(ledPin3, ledState3 ? HIGH : LOW);
      }
      button3Pressed = false; // Reset the button pressed flag
    }
  }

  // Check if the fourth button is pressed
  if (digitalRead(buttonPin4) == LOW) {
    if (!button4Pressed) {
      button4Pressed = true;
      button4PressTime = millis(); // Record the time when the button was pressed
    }
  } else {
    if (button4Pressed) {
      unsigned long button4Duration = millis() - button4PressTime;
      if (button4Duration >= longPressDuration) {
        ledState4 = !ledState4;
        digitalWrite(ledPin4, ledState4 ? HIGH : LOW);
      }
      button4Pressed = false; // Reset the button pressed flag
    }
  }

  // Check if the fifth button is pressed
  if (digitalRead(buttonPin5) == LOW) {
    if (!button5Pressed) {
      button5Pressed = true;
      button5PressTime = millis(); // Record the time when the button was pressed
    }
  } else {
    if (button5Pressed) {
      unsigned long button5Duration = millis() - button5PressTime;
      if (button5Duration >= longPressDuration) {
        ledState5 = !ledState5;
        digitalWrite(ledPin5, ledState5 ? HIGH : LOW);
      }
      button5Pressed = false; // Reset the button pressed flag
    }
  }
}
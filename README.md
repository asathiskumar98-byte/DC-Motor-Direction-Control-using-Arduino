🔄 DC Motor Direction Control using Arduino

This Arduino project demonstrates how to control the direction of a DC motor using two push buttons.

Press Button 1 → Motor rotates Forward

Press Button 2 → Motor rotates Reverse

No button pressed → Motor Stops

🧠 Concept

The project uses two GPIO pins to drive a motor driver (like L293D or L298N) through the Arduino.
Each button sends a digital HIGH signal to decide the direction of motor rotation.

⚙️ Components Required
Component	Quantity
Arduino UNO	1
DC Motor	1
L293D / L298N Motor Driver	1
Push Buttons	2
10kΩ Resistors (for pull-down)	2
Jumper Wires	As required
Breadboard	1
External Power Supply (for motor)	1
🧩 Circuit Connections
Arduino Pin	Connected To
D5	Motor Driver IN1 (Forward)
D6	Motor Driver IN2 (Reverse)
D2	Button 1
D3	Button 2
5V	VCC (Motor Driver + Buttons)
GND	Common Ground

⚡ Important: Never power the motor directly from Arduino. Use a motor driver with a separate motor power source.

🧾 Code
```c
#define Motor_Forward 5
#define Motor_Reverse 6
#define Button1 2
#define Button2 3

void setup()
{
  pinMode(Motor_Forward,OUTPUT);
  pinMode(Motor_Reverse,OUTPUT);
  pinMode(Button1,INPUT);
  pinMode(Button2,INPUT);
}

unsigned char button1_state,button2_state;
void loop()
{
  button1_state = digitalRead(Button1);
  button2_state = digitalRead(Button2);

  if(button1_state == HIGH)
  {
    digitalWrite(Motor_Forward,HIGH);
    digitalWrite(Motor_Reverse,LOW);
  }
  else if(button2_state == HIGH)
  {
    digitalWrite(Motor_Forward,LOW);
    digitalWrite(Motor_Reverse,HIGH);
  }
  else
  {
    digitalWrite(Motor_Forward,LOW);
    digitalWrite(Motor_Reverse,LOW);
  }
}
```
🚀 How It Works

When Button 1 is pressed → Arduino sends a HIGH signal to pin 5.
Motor Driver drives the motor forward.

When Button 2 is pressed → Pin 6 goes HIGH.
Motor Driver reverses polarity → Motor runs backward.

When neither is pressed → Both control pins are LOW → Motor stops.

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

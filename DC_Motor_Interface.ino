#define Motor_Forward 5
#define Motor_Reverse 6

void setup()
{
  pinMode(Motor_Forward,OUTPUT);
  pinMode(Motor_Reverse,OUTPUT);
}

void loop()
{
  digitalWrite(Motor_Forward,HIGH);
  digitalWrite(Motor_Reverse,LOW);
  delay(1000);
  digitalWrite(Motor_Forward,LOW);
  digitalWrite(Motor_Reverse,HIGH);
  delay(1000);
}

/*************************************************/
const int photocellPin = A0;
const int ledPin = 13;
int outputValue = 0;
const int res = 1023;
/*************************************************/
void setup()
{
Serial.begin(9600);
}
/*************************************************/
void loop()
{
outputValue = analogRead(photocellPin);
//outputValue = outputValue/1023;
Serial.print("Value:  ");
Serial.println(outputValue/2);
delay(1000);
}
/*************************************************/

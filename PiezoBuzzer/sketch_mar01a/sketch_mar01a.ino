// Programmer: Brenden Krueger
// Date: 3-1-2022

int pos = 0;

void setup()    //pinMode identifies the pins
{
pinMode(A0, INPUT);
pinMode(8, OUTPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
}

void loop()
{
// if button press on A0 is detected
if (digitalRead(A0) == HIGH) {
tone(8, 440, 100); // play tone 57 (A4 = 440 Hz)
}
}

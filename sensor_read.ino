// C++ code
//
int Analog = 0;

int Digital = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Digital = digitalRead(2);
  Analog = (-40 + 0.488155 * (analogRead(A0) - 20));
  Serial.println(Analog);
  Serial.println(Digital);
  delay(3000); // Wait for 3000 millisecond(s)
}
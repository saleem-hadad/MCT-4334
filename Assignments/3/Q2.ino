
void setup()
{
  int value, counter = 0;

  Serial.begin(9600);

  while (1)
  {
    value =  (sin((counter * 2 * PI) / (360)) + 1) * 128;
    Serial.println(value);
    delay(11);
    counter++;
  }
}


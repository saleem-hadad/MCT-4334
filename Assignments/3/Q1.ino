void setup(){
  unsigned char counter = 0;
  Serial.begin(9600);

  while (1)
  {
    counter = 0;
    while(counter < 183) {
      counter++;
      Serial.println(counter);
      analogWrite(9, counter);
      delay(11);
    }
  }
}
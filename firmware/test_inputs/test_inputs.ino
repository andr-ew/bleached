 
void setup() {
  Serial.begin(31250);

  pinMode(A14, INPUT);    // sets the DAC as input
}

void loop() {
  // print the analog input values

  ////////// 4-POT ROW / COLUMN //////////

  Serial.print(analogRead(0));   // the lonely pot
  Serial.print('\t');

  Serial.print(analogRead(1));
  Serial.print('\t');

  Serial.print(analogRead(2));
  Serial.print('\t');

  Serial.print(analogRead(3));
  Serial.print('\t');

  ////////// 3-POT ROW / COLUMN //////////

  Serial.print(analogRead(4));
  Serial.print('\t');

  Serial.print(analogRead(5));
  Serial.print('\t');

  Serial.print(analogRead(6));

  Serial.println();
}



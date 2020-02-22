 
void setup() {
  Serial.begin(31250);

  pinMode(A14, INPUT);    // sets the DAC as input
}

void loop() {
  // print the analog input values
  Serial.print(analogRead(0));   // print the lonely pot
  Serial.print('\t');            // print a tab character

  /////////////////////////////////////////////////////// First 4 (1-4) ////////////////////

  Serial.print(analogRead(2));   // Print Knob 1 / 1
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(3));   // Print Knob 2 / 1
  Serial.print('\t');            // print a tab character


  Serial.print(analogRead(4));   // Print Knob 3 / 1
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(5));   // Print Knob 4 / 1
  Serial.print('\t');            // print a tab character

  /////////////////////////////////////////////////////// Second 4 (5-8) ////////////////////

  Serial.print(analogRead(6));   // Print Knob 5 / 1
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(7));   // Print Knob 6 / 1
  Serial.print('\t');            // print a tab character


  Serial.print(analogRead(8));   // Print Knob 7 / 1
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(9));   // Print Knob 8 / 1
  Serial.print('\t');            // print a tab character



  ///////// SECOND ROW /////


  /////////////////////////////////////////////////////// First 4 (1-4) ////////////////////

  Serial.print(analogRead(10));   // Print Knob 1 / 2
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(11));   // Print Knob 2 / 2
  Serial.print('\t');            // print a tab character


  Serial.print(analogRead(12));   // Print Knob 3 / 2
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(13));   // Print Knob 4 / 2
  Serial.print('\t');            // print a tab character

    /////////////////////////////////////////////////////// Second 4 (1-4) ////////////////////

  Serial.print(analogRead(A14));   // Print Knob 5 / 2
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(26));   // Print Knob 6 / 2
  Serial.print('\t');            // print a tab character


  Serial.print(analogRead(27));   // Print Knob 7 / 2
  Serial.print('\t');            // print a tab character

  Serial.print(analogRead(28));   // Print Knob 8 / 2
  Serial.print('\t');            // print a tab character



  Serial.println();              // line feed

 
}



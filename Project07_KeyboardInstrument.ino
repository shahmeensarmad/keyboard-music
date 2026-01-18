//  Project - Keyboard Instrument
  // build a small musical keyboard using a few resistors and buttons

// create an array of frequencies
int notes[] = {262,294,330,349};
            //  C   D   E   F
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); // begin serial communication


}

void loop() {
  // put your main code here, to run repeatedly:

  // read the analog value and send it to the serial monitor
  int keyVal = analogRead(A0);
  Serial.println(keyVal);  // print, then have a new line

  // Note: since each switch has a different resistor value connecting it to power, each will have a different value associated with it

  // use if else statements to assign each value to a different tone
  if (keyVal >= 1000 && keyVal <= 1023){
    tone(8, notes[0]);  // First Switch: C
  }

  else if(keyVal >= 980 && keyVal <= 999){
    tone(8, notes[1]);  // Second Switch: D
  }

  else if(keyVal >= 480 && keyVal <= 530){
    tone(8, notes[2]);  // Third Switch: E
  }

  else if(keyVal >= 960 && keyVal <= 975){
    tone(8, notes[3]);  // Fourth Switch: F
  }

  else{
    noTone(8);  // stop playing notes when there is no button being pressed
  }
}

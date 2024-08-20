

#include "SevSeg.h"
SevSeg sevseg;
int var, x;
void setup() {
    byte numDigits = 4;  
    byte digitPins[] = {2, 3, 4, 5};
    byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
    bool resistorsOnSegments = 0; 
  
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(60);
    pinMode (A0, INPUT);
    Serial.begin (9600) ;
}

void loop() {
    var = analogRead (A0);
    Serial.println (var);
    x = 1000;
        while(x!=0)
        {
          sevseg.setNumber(var);  // Setează numărul curent pe afișaj
          sevseg.refreshDisplay();
          x--;
        }
    
}

#include "SegmentDisplay.h";

void setup() {
  SegmentDisplay sd(2, 3, 4, 5, 6, 7, 8, 9);
  for(int i = 9; i >= 0; i--){
    sd.displayHex(i, false);
    delay(1500);
  }
} 

void loop() {
  

}

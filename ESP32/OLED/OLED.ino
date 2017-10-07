#include "SSD1306.h"

// Initialize the OLED display Wire Library
SSD1306 display(0x3c,5,4);

void setup() {

  pinMode(LED, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  
  // put your main code here, to run repeatedly:
  Serial.println("Happy Moon Festival!");
  delay(500);
  Serial.println("中秋节快乐！");
  delay(500);  

}

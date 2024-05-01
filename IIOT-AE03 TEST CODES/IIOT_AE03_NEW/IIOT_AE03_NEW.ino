#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define ANALOG_PIN_0 32

const int analogPin = 33; 
int analog_value = 0;

int digital_inputs[8] = {18, 39, 34, 35, 19, 21, 22, 23};

int readSwitch(){
  analog_value = analogRead(ANALOG_PIN_0);
    return analog_value       ; //Read analog
}


void setup() {
  Serial.begin(9600); 
 
  pinMode(18, INPUT);
  pinMode(39, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  pinMode(19, INPUT);
  pinMode(21, INPUT);
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  
 adcAttachPin(32);
}

void loop() {

   Serial.print(digitalRead(18));Serial.print(digitalRead(39));Serial.print(digitalRead(34));Serial.print(digitalRead(35));Serial.print(digitalRead(19));Serial.print(digitalRead(21));Serial.print(digitalRead(22));Serial.print(digitalRead(23));
 Serial.println(""); 
 
  int sensorValue = analogRead(analogPin); 

  Serial.print("Analog value on IO33: ");
  Serial.println(sensorValue); 

  
 Serial.println(""); 
  Serial.print("Push button  ");Serial.println(readSwitch());
  Serial.println(""); 

  delay(1000); 
}

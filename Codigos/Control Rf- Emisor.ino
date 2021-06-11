#include <VirtualWire.h>


boolean running = true;
char *controller;
int xPin = A0;
int yPin = A5;
int buttonPin = 0;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;
void setup() {
Serial.begin(9600);
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(13,OUTPUT);
pinMode(buttonPin, INPUT);


vw_set_ptt_inverted(true); 
vw_set_tx_pin(12);
vw_setup(4000);
}

void loop(){
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  
  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.print(yPosition);
  Serial.print("buttonState: ");
  Serial.print(buttonState);
  Serial.print(" | Emitiendo: ");
  Serial.println(controller);


 if ( xPosition >= 800 && yPosition >= 800 )  
  {
controller="D"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); 
digitalWrite(13,1);

}

else  if ( xPosition >= 800 && yPosition >= 300) 
  {
controller="C"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}

else  if ( xPosition >= 300 && yPosition >= 800) 
  {
controller="E"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); 
digitalWrite(13,1);
}

else  if ( xPosition >= 800 && yPosition <= 300) 
  {
controller="B"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}
else  if ( xPosition >= 300 && yPosition <= 100) 
  {
controller="A"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}

else  if ( xPosition >= 300 && yPosition <= 250) 
  {
controller="3"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}


else  if ( xPosition >= 300 && yPosition <= 400) 
  {
controller="2"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}


else  if ( xPosition >= 512 && yPosition <= 500) 
  {
controller="1"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); 
digitalWrite(13,1);
}

else  if ( xPosition <= 300 && yPosition >= 800) 
  {
controller="F"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}

else  if ( xPosition <= 300 && yPosition >= 300) 
  {
controller="G"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); 
digitalWrite(13,1);
}

else  if ( xPosition <= 300 && yPosition <= 300) 
  {
controller="H"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx();
digitalWrite(13,1);
}

 else
{
controller="0"  ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); 
digitalWrite(13,0);
}}

#include <VirtualWire.h>


void setup(){ //Configuración básica
  
  Serial.begin(9600);


    vw_set_ptt_inverted(true);
    vw_set_rx_pin(12);
    vw_setup(4000); 
    pinMode(3, OUTPUT); 
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);

    vw_rx_start();    
}
    void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

 
    if (vw_get_message(buf, &buflen)) 

    {  
            
  
    if(buf[0]=='0'){
    digitalWrite(3,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(9,0);
    }

    if(buf[0]=='A'){
    digitalWrite(3,1);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(9,1);

    }

  if(buf[0]=='3'){
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(75);  
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(25);   

    }
 
    if(buf[0]=='2'){
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(50);  
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(50); 

    }

    
    if(buf[0]=='1'){
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(25);  
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(75); 

    }   

    
    if(buf[0]=='B'){
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(50);  
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(50); 
 
    }
 
    if(buf[0]=='C'){
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(50);  
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(50); 
 
    }

   if(buf[0]=='D'){
  digitalWrite(3,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(9,0);
  delay(50);  
  digitalWrite(3,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(50); 
 
    }

       if(buf[0]=='E'){
  digitalWrite(3,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
digitalWrite(9,0);
delay(50);  
 digitalWrite(3,0);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(9,0);
 delay(50); 
 
    }

 if(buf[0]=='F'){
digitalWrite(3,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(9,0);
delay(50);  
 digitalWrite(3,0);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(9,0);
 delay(50); 
 
    }
    
 if(buf[0]=='G'){
digitalWrite(3,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(9,0);
delay(50);  
 digitalWrite(3,0);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(9,0);
 delay(50); 
 
    }

 if(buf[0]=='H'){
digitalWrite(3,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(9,1);
delay(50);  
 digitalWrite(3,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(9,0);
 delay(50); 
 
    }

    } 

}

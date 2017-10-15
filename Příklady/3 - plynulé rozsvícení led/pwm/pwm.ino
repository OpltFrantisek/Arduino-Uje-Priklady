
int LED = 13;  // pin ke kterému je připojena LED        
void setup() {  
  pinMode(LED,OUTPUT); // nastavení pinu jako výstup
 
}

void loop() {
 for(int i = 0; i < 256;i++){  // na pin LED se nastaví hodnota "i"  ( arduino UNU má standartně nastavený rozsah PWM  na 0 až 255 ) 
    analogWrite(LED,i); // PWM
    delay(50);
  }   
 delay(1000);
 for(int i = 255; i > -1; i--){
     analogWrite(LED,i);
     delay(50);
  }
  delay(1000);
  
}



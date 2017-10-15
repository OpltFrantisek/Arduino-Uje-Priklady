int analogSenzor = A0;
int zelenaLED = 12;
int cervenaLED = 11;
int hodnota;
void setup() {
  pinMode(analogSenzor,INPUT);
}

void loop() {
    int hodnota = analogRead(analogSenzor);
    if(hodnota > 50){
          digitalWrite(zelenaLED,1);
          digitalWrite(cervenaLED,0);
    }
    else{
         digitalWrite(zelenaLED,1);
         digitalWrite(cervenaLED,0);
    }
    delay(10);
}


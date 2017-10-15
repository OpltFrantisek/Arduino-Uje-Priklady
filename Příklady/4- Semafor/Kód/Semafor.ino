int Semafor1[] = { 11,12,13};
int Semafor_Chodci[] = {10,9};
int Semafor3[] = {6,7,8};


int aktivni_semafor = 0;


int tlacitko1 = 4 ;
int tlacitko2 =  5;


long interval = 10000;
long cas = 0;


void RozsvitZelenou(int semafor[]){
    digitalWrite(semafor[2],1);
    digitalWrite(semafor[1],1);
    digitalWrite(semafor[2],0);
    delay(1000);
    digitalWrite(semafor[2],0);
    digitalWrite(semafor[1],0);
    digitalWrite(semafor[0],1);
}
void RozsvitCervenou(int semafor[]){
    digitalWrite(semafor[2],0);
    digitalWrite(semafor[1],1);
    digitalWrite(semafor[0],0);
    delay(1000);
    digitalWrite(semafor[2],1);
    digitalWrite(semafor[1],0);
    digitalWrite(semafor[0],0);
}
void ChodciZelena(int Semafor[]){
    digitalWrite(Semafor[1],0);
    digitalWrite(Semafor[0],1);
}
void ChodciCervena(int Semafor[]){
    digitalWrite(Semafor[1],1);
    digitalWrite(Semafor[0],0);
}



void setup(){
    for(int i = 6; i < 14; i++)
        pinMode(i ,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
}
void loop(){
    if(digitalRead(tlacitko1) == 1 || digitalRead(tlacitko2) == 1){
        if(aktivni_semafor == 1){
            RozsvitCervenou(Semafor1);   
        }
        else{
            RozsvitCervenou(Semafor3);
        }
        delay(1000);
        ChodciZelena(Semafor_Chodci);
        delay(5000);
        ChodciCervena(Semafor_Chodci);
    }
    if(cas - millis() > interval){
        if(aktivni_semafor == 1){ 
            aktivni_semafor = 2;
            RozsvitCervenou(Semafor1);
            RozsvitZelenou(Semafor3);
        }
        else{
            aktivni_semafor = 1;
            RozsvitCervenou(Semafor3);
            RozsvitZelenou(Semafor1);
        }
        cas = millis();
    }
        
}
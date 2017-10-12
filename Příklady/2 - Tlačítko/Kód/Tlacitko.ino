
int LED1 = 9;	// nastavení pinu na ke kterému je p?ipojena LED
int Tlacitko = 2;// nastavení pinu na kterém je p?ipojeno tla?ítko 

void setup(){
	pinMode(LED1,OUTPUT); // nastavení pinu LED1  jako výstpní
	pinMode(Tlacitko,INPUT); // nastavení pinu Tlaciko jako  vstupní
}
void loop(){
	if(digitalRead(Tlacitko) == 1) // pokud je na pin Tlaciko p?ivedeno 5V ( tlacitko je  zmá?knuto) tak rozsvi? LED
		digitalWrite(LED1,1); // nastaví výstup pinu LED1 na 1 (5V)
	else
		digitalWrite(LED1,0); // nastaví výstup LED1 na 0 (0V)
	
}
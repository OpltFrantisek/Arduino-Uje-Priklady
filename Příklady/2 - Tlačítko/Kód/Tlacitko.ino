
int LED1 = 9;	// nastaven� pinu na ke kter�mu je p?ipojena LED
int Tlacitko = 2;// nastaven� pinu na kter�m je p?ipojeno tla?�tko 

void setup(){
	pinMode(LED1,OUTPUT); // nastaven� pinu LED1  jako v�stpn�
	pinMode(Tlacitko,INPUT); // nastaven� pinu Tlaciko jako  vstupn�
}
void loop(){
	if(digitalRead(Tlacitko) == 1) // pokud je na pin Tlaciko p?ivedeno 5V ( tlacitko je  zm�?knuto) tak rozsvi? LED
		digitalWrite(LED1,1); // nastav� v�stup pinu LED1 na 1 (5V)
	else
		digitalWrite(LED1,0); // nastav� v�stup LED1 na 0 (0V)
	
}
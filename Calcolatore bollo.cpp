#include <iostream>
#include <stdlib.h>

using namespace std;
int y;


int main(){
	do{	
		
	//configurazione del cmd
		system("title Calcolatore Bollo Veicoli - dev gioele.deo");
		system("color 0a");
		system("cls");
	
	//inizializzazione variabili
    	int cil, emiss, fisc, error; 
    	float a, b, price, cv, kilo, sk;
    	
		error = 0; //settaggio variabile errori. Indica al sistema che in partenza non ci sono errori.
    	
    //stampare le inforamzioni per l'utente
    	printf("Calcolatore Bollo Veicoli   v1.0   relase 1/04/2020 \n");
    	printf("           Developed by Gioele De Odorico. \n");
    	printf("          GNU LICENSE - All right reserved. \n");
    	printf("\n");
    	printf("Inserire tutti i valori richiesti arrotondati senza cifre decimali. \n");
    	printf("Il calcolo del bollo %c effettuato secondo le tabelle fornite da AE. \n", 138);
    	printf("Ultimo aggiornamento database: 1/4/2020 \n");
    	printf("\n");
    	printf("\n");
    	
    //inserimento cilindrata
		cout << "Cilindrata [cc]: ";
    	cin >> cil;
    	
    //inserimento classe emissioni
		cout << "Classe emissioni: EURO ";
		cin >> emiss;
    	
   	//inserimento potenza del veicolo
		cout << "Kilowatt [kW]: ";
    	cin >> kilo;
    
    //calcolo cavalli vapore veicolo
		cv = kilo*1.36;
	    cout << "Cavalli vapore [cv]: " << cv << endl;
	
	//calcoli cv fiscali
		if(cil < 19 ) 			{fisc = 0;}
		else if(cil <= 57)		{fisc = 1;}
		else if(cil <= 106)		{fisc = 2;}
		else if(cil <= 164)		{fisc = 3;}
		else if(cil <= 231)		{fisc = 4;}
		else if(cil <= 306)		{fisc = 5;}
		else if(cil <= 387)		{fisc = 6;}
		else if(cil <= 475)		{fisc = 7;}
		else if(cil <= 569)		{fisc = 8;}
		else if(cil <= 669)		{fisc = 9;}
		else if(cil <= 774)		{fisc = 10;}
		else if(cil <= 884)		{fisc = 11;}
		else if(cil <= 999)		{fisc = 12;}
		else if(cil <= 1119)	{fisc = 13;}
		else if(cil <= 1243)	{fisc = 14;}
		else if(cil <= 1372)	{fisc = 15;}
		else if(cil <= 1505)	{fisc = 16;}
		else if(cil <= 1643)	{fisc = 17;}
		else if(cil <= 1784)	{fisc = 18;}
		else if(cil <= 1930)	{fisc = 19;}
		else if(cil <= 2080)	{fisc = 20;}
		else if(cil <= 2233)	{fisc = 21;}
		else if(cil <= 2390)	{fisc = 22;}
		else if(cil <= 2551)	{fisc = 23;}
		else if(cil <= 2715)	{fisc = 24;}
		else if(cil <= 2883)	{fisc = 25;}
		else if(cil <= 3054)	{fisc = 26;}
		else if(cil <= 3229)	{fisc = 27;}
		else if(cil <= 3407)	{fisc = 28;}
		else if(cil <= 3588)	{fisc = 29;}
		else if(cil <= 3772)	{fisc = 30;}
		else if(cil <= 3960)	{fisc = 31;}
		else if(cil <= 4151)	{fisc = 32;}
		else if(cil <= 4345)	{fisc = 33;}
		else if(cil <= 4542)	{fisc = 34;}
		else if(cil > 4542)		{fisc = 35;}
	
	//calcolo cavalli fiscali
	    cout << "Cavalli fiscali [cvf]: " << fisc << endl;
	    if(cil > 4542){
			printf("  ATTENZIONE! Per veicoli di cc superiore a 4542.1 il calcolo dei cvf non %c garantito", 138);
		}
		printf("\n");
	
		if(emiss == 0){
			a = 3; //definizione prezzo al kW fino ai 100
			b = 4.5; //definizione prezzo al kW superiore al 100
		}
		else if(emiss == 1){
			a = 2.9;
			b = 4.35;
		}
		else if(emiss == 2){
			a = 2.8;
			b = 4.2;
		}
		else if(emiss == 3){
			a = 2.7;
			b = 4.05;
		}
		else if(emiss > 3 && emiss < 7){
			a = 2.58;
			b = 3.87;
		}
		else if(emiss >= 7){
			a = 0;
			b = 0;
			printf("Errore inserimento dato relativo alle emissioni. \n");
			printf("Impossibile fornire risultato prezzo. \n");
			error = 1;
			system("color 0c");
			printf("\n");
		}
	
	//calcolo prezzo finale
		if(error == 0){ //verifica che non ci siano errori per i quali è impossibile calcolare il risultato.
			sk = kilo -100;
			price = (a * 100) + (b * sk);
		
			cout << "Prezzo bollo stimato [EUR]: " << price; 
    		printf("\n");	
		}
		
    
    	cout << "Premere 1 per ricalcolare, 2 per uscire  --  ";
    	cin >> y;
    
	}
	while(y == 1);
	
	system("cls");
	
	printf("Calcolatore Bollo Veicoli   v1.0   relase 1/04/2020 \n");
    printf("           Developed by Gioele De Odorico. \n");
    printf("          GNU LICENSE - All right reserved. \n");
    printf("\n");
    printf("\n");
    
    printf("Spero di essere stato utile! :)");
    printf("\n");
    printf("Visita le mie repository: https://github.com/Gioeledeo");
    printf("Condividi il mio programma: https://github.com/Gioeledeo/Calcolatore-bolli");
	
	return 0;
}


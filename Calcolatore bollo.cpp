#include <iostream>
#include <stdlib.h>

using namespace std;
int y;


int main(){
		
	//configurazione del cmd
		system("title Calcolatore Bollo Veicoli - dev gioele.deo");
		system("color 0a");
		system("cls");
    	
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
    	system("pause");
    	//system("cls");
    	
    do{	
    	system("cls");
    	
    	//inizializzazione variabili
    	int cil, emiss, fisc, error, classn, subclass, portata, assi, classeAC; 
    	float a, b, c, price, priceq, cv, kilo, sk;
    	
    	error = 0; //settaggio variabile errori. Indica al sistema che in partenza non ci sono errori.
    	
    //Inserimento classe veicoli tramite menu numerato
    	do{
    		system("cls");
    		system("color 0a");
    		
    		printf("Inserire il numero rispettivo alla classe del veicolo \n");
    		printf("\n");
    		printf("1. Autovetture e autoveicoli per uso promiscuo; autocarri Art.1 c.321 L.n. 296/2006 \n");
    		printf("2. Autobus \n");
    		printf("3. Autoveicoli speciali (escluso caravan) \n");
    		printf("4. Rimorchi speciali con massa uguale o superiore a 3.5 tonnellate \n");
    		printf("5. Autocaravan \n");
    		printf("6. Motocicli oltre 50cc \n");
    		printf("7. Rimorchio con massa inferiore a 3.5 tonnellate \n");
    		printf("8. Autovettura ultratrentennale (no veicoli iscritti nei Registri Storici) \n");
    		printf("9. Motocicli ultratrentennali (no veicoli iscritti nei Registri Storici) \n"); //sas
    		printf("10. Rimorchio per trasporto di persone \n");
    		printf("11. Targhe prova \n");
    		printf("12 Motocarri e motofurgoni \n");
    		printf("\n");
    	
    		printf("Numero rispettivo classe: ");
    		cin >> classn;	//attendere in input il valore corrispettivo alla classe
    		cout << "Classe selezionata: " << classn << endl; //stampa il valore inserito
    		printf("\n");
    	
    		cout << "Premere 1 per procedere, 2 per modificare la classe -- "; //in caso di errato inserimento, è possibile slezionare la classe nuovamente
    		cin >> y; 
    		
    		printf("\n");
    		printf("\n");
    		
    	}while(y == 2);  	
    	
    //inserimento valori per la valutazione del costo
    	do{
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
	    	printf("\n");
	
			cout << "Premere 1 per procedere, 2 per modificare i valori inseriti -- "; //in caso di errato inserimento, è possibile slezionare la classe nuovamente
    		cin >> y;
    		
    		printf("\n");
    		printf("\n");
		
		}while(y == 2);
	
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
		printf("\n");
	
	//per alcune classi vige una tassazione fissa, verifica ed eventuale stampa del prezzo per le classi interessate
		if(classn == 7){
			printf("Per la classe selezionata, vige una tassazione fissa per il bollo. \n");
			printf("Tassa di circolazione annuale: 25.00 EUR \n");
		}
		else if(classn == 8){
			printf("Per la classe selezionata, vige una tassazione fissa per il bollo. \n");
			printf("Tassa di circolazione annuale: 30.00 EUR \n");
		}
		else if(classn == 9){
			printf("Per la classe selezionata, vige una tassazione fissa per il bollo. \n");
			printf("Tassa di circolazione annuale: 20.00 EUR \n");
		}
		else if(classn == 4){
			printf("Per la classe selezionata, vige una tassazione fissa per il bollo. \n");
			printf("Tassa di circolazione annuale: 25.00 EUR \n");
		}
	
		else if(classn == 1){
			printf("Selezionare una delle seguenti voci: \n");
			printf("\n");
			printf("1. Autovettura \n");
			printf("2. Autocarro peso complessivo inferiore a 12 tonnellate \n");
			printf("3. Autocarro peso complessivo superiore a 12 tonnellate \n");
			printf("\n");
			
			printf("Numero rispettivo classe: ");
    		cin >> subclass;
    		printf("\n");
    		printf("\n");
			
			if(subclass == 1){
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
		
				if(error == 0){ //verifica che non ci siano errori per i quali è impossibile calcolare il risultato.
					if(kilo > 100){
						sk = kilo -100;
						price = (a * 100) + (b * sk);
					}
					else{
						price = a * 100;
					}
		
					cout << "Tassa di circolazione annuale: " << price << " EUR"; 
    				printf("\n");	
    			}
			}
			
			else if(subclass == 2){
				printf("Inserire portata massima espressa in kilogrammi arrotondata per eccesso senza decimali: ");
				cin >> portata;
				printf("\n");
				
				if(portata <= 400){
					price = 22.82;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 800){
					price = 31.95;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 1000){
					price = 41.07;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 1500){
					price = 54.77;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 2000){
					price = 77.58;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 2500){
					price = 100.4;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 3000){
					price = 123.22;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 3500){
					price = 146.04;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 4000){
					price = 168.86;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 4500){
					price = 191.68;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 5000){
					price = 214.50;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 6000){
					price = 237.32;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 7000){
					price = 264.7;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
				else if(portata <= 8000){
					price = 292.08;
					cout << "Tassa di circolazione annuale: " << price << " EUR";
				}
			}
			
			else if(subclass == 3){
				printf("Inserire numero assi: ");
				cin >> assi;
				printf("\n");
				printf("Inserire portata massima espressa in tonnellate arrotondata per eccesso senza decimali: ");
				cin >> portata;
				printf("\n");
				printf("\n");
				printf("\n");
				
				if(assi == 2){
					if(portata >= 12 && portata < 15){
						classeAC = 1;
					}
					else if(portata >= 15){
						classeAC = 4;
					}
				}
				
				else if(assi == 3){
					if(portata >= 15 && portata < 19){
						classeAC = 1;
					}
					else if(portata >= 19 && portata < 21){
						classeAC = 2;
					}
					else if(portata >= 21 && portata < 23){
						classeAC = 3;
					}
					else if(portata >= 23){
						classeAC = 5;
					}
				}
				
				else if(assi >= 4){
					if(portata >= 23 && portata < 25){
						classeAC = 2;
					}
					else if(portata >= 25 && portata < 27){
						classeAC = 3;
					}
					else if(portata >= 27 && portata < 29){
						classeAC = 6;
					}
					else if(portata >= 29){
						classeAC = 7;
					}
				}
				
				if(classeAC == 1){
					price = 299.55;
					priceq = 99.85;
				}
				else if(classeAC == 2){
					price = 333.63;
					priceq = 111.21;
				}
				else if(classeAC == 3){
					price = 368.23;
					priceq = 122.74; 
				}
				else if(classeAC == 4){
					price = 414.20;
					priceq = 138.07;
				}
				else if(classeAC == 5){
					price = 471.53;
					priceq = 157.18;
				}
				else if(classeAC == 6){
					price = 528.85;
					priceq = 176.28;
				}
				else if(classeAC == 7){
					price = 673.98;
					priceq = 224.66;
				}
				
				cout << "Tassa di circolazione annuale: " << price << " EUR" << endl;
				cout << "Tassa di circolazione quadrimestrale: " << price << " EUR" << endl;
				printf("\n");
				
			}
		}			
		
		else if(classn == 2){
			price = 2.94 * kilo;
			cout << "Tassa di circolazione annuale: " << price << " EUR";
		}
		
		else if(classn == 3){
			price = 0.43 * kilo;
			cout << "Tassa di circolazione annuale: " << price << " EUR";
		}
		
		else if(classn == 5){
			price = kilo;
			cout << "Tassa di circolazione annuale: " << price << " EUR";
		}
		
		else if(classn == 6){
			if(emiss == 0){
				a = 26.00;
				b = 1.70;
				c = 0;
			}
			else if(emiss == 1){
				a = 23.00;
				b = 1.30;
				c = 0;
			}
			else if(emiss == 2){
				a = 21.00;
				b = 1.00;
				c = 0;
			}
			else if(emiss >= 3){
				a = 20;
				b = 0.88;
				c = 0.89;
			}
			
			if(kilo <= 11){
				price = a;
				cout << "Tassa di circolazione annuale: " << price << " EUR"; 
    			printf("\n");
			}
			else if(kilo > 11){
				price = (a - c) + (b * kilo);
				cout << "Tassa di circolazione annuale: " << price << " EUR"; 
    			printf("\n");
			}
		}
		
    	printf("\n");
    	printf("\n");
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
    
    printf("Spero di essere stato utile! :) \n");
    printf("\n");
    printf("Visita le mie repository: https://github.com/Gioeledeo \n");
    printf("Condividi il mio programma: https://github.com/Gioeledeo/Calcolatore-bolli \n");
    printf("\n");
    system("pause");
    
    for(int i=0; i<3; i++){
    	system("color 0a");
    	system("color 0b");
    	system("color 0c");
    	system("color 0d");
    	system("color 0e");
    	system("color 0f");
	}
	return 0;
}


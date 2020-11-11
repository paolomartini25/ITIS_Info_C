//Dato un numero binario convertirlo in decimale (inizialmente chiedere da quante cifre è composto il numero e poi far inserire una cifra per volta a partire dalla più significativa)
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>

int conversione(int bin, int cifra_attuale); //conversione da ciffra binaria a decimle

int main(){
    int bin, dec = 0; //cifra binaria, numero decimale
    int num_cifre;//numero di cifre del numero binario

    printf("inserisci il numero di cifre del numero binario che andrai ad inserire, deve essere maggiore di 0:\n");
    do{
        scanf("%d", &num_cifre); //inserimento numero di cifre

        if (num_cifre<0){ //se il numero è minore di 0
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(num_cifre<0); //se il numero è maggiore d 0 si esce dal ciclo sennò si richiede il dato

    printf("inserisci tutte le cifre del tuo numero binario partendo da quella meno significativa.\n111110 in questo caso lo 0 e' la cifra meno signifaciva quindi:\n0->1->1->[...]\n");
    
    for (int j=0; j < num_cifre; j++){ //ripete per quante sono le cifre
        printf("inserisci la cifra:\n");
        do{
            scanf("%d", &bin);//inserimento della cifra

            if (bin<0 || bin >1){ //se il numero è diverso da 0 o 1
                printf("Errore, la cifra può essere solo 0 o 1.\n");
            }

        }while(bin<0 || bin >1); //se il numero è uguale a 0 o 1 si esce dal ciclo sennò si richiede il dato

        int num =conversione(bin, j); //num contine la cifra convertita in decimale
        dec+=num; //sommo tutte le cifre per ottenere il numero decimale
    }

    printf("numero decimale = %d\n", dec); //stampo il numero convertito
    return 0;
}

int conversione(int bin, int cifra_attuale){
    
    int num; //cifra convertita in decimale

    if (bin>0){
        for (int i=0; i<cifra_attuale; i++){ //num = bin*(2^cifra_attuale)
            num = bin * 2;
        } 
    }
    else{ //cifra_attuale = 0
        num = bin * 1; //2^0 = 1
    }

    return num; //ritorno il numero
}
//Dato un numero binario convertirlo in decimale (inizialmente chiedere da quante cifre è composto il numero e poi far inserire una cifra per volta a partire dalla più significativa)
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>

int conversione(int bin, int cifra_attuale);

int main(){
    int bin, dec = 0;
    int num_cifre;

    printf("inserisci il numero di cifre del numero binario che andrai ad inserire, deve essere maggiore di 0:\n");
    do{
        scanf("%d", &num_cifre);

        if (num_cifre<0){
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(num_cifre<0);

    printf("inserisci tutte le cifre del tuo numero binario partendo da quella meno significativa.\n111110 in questo caso lo 0 e' la cifra meno signifaciva quindi:\n0->1->1->[...]\n");
    
    for (int j=0; j < num_cifre; j++){
        printf("inserisci la cifra:\n");
        do{
            scanf("%d", &bin);

            if (bin<0 || bin >1){
                printf("Errore, la cifra può essere solo 0 o 1.\n");
            }

        }while(bin<0 || bin >1);

        int num =conversione(bin, j);
        dec+=num;
    }

    printf("numero decimale = %d\n", dec);
    return 0;
}

int conversione(int bin, int cifra_attuale){
    
    int num;

    if (bin>0){
        for (int i=0; i<cifra_attuale; i++){ //num = bin*(2^cifra_attuale)
            num = bin * 2;
        } 
    }
    else{
        num = bin * 1;
    }

    return num;
}
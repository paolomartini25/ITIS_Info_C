// Dato un numero n calcolarne il fattoriale ricordando che 0!=1 1!=1 n!=n*(n-1)*(n-2)*…*2*1
// Paolo Martini 4^BROB

#include <stdio.h>
#include <stdlib.h>

int fattoriale(int num);

int main(){
    int num; //numero di cui devo trovare il fattoriale
    int fatt; //il fattoriale

    printf("inserisci un numero maggiore di 0:\n");
    do{
        scanf("%d", &num); //inserimento di n

        if (num<0){//se il numero è minore di 0
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(num<0);//se il numero è maggiore uaguale a 0 si esce dal ciclo sennò si richiede il dato

    fatt = fattoriale(num);

    printf("il fattoriale di %d e': %d\n", num, fatt); //stampo il fattoriale

    return 0;
}

int fattoriale(int num){

    int fatt = 1;

    if (num!=0){
        for (int j = 0; j<num; j++){ //ripeto num volte partendo da 0 
            fatt = fatt * (num-j); //num-0 -> num-1 -> num-2 -> ...
        }
    }

    return fatt;//restituisco il fattoriale

}
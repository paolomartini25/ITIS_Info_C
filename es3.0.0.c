//Calcolare la somma degli elementi di posizione pari e quelli di posizione dispari di un vettore
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>

#define DIM 1000

void function(int *vett, int *sommapari, int *sommadispari, int lung);

int main(){

    int vett[DIM], pari = 0, dispari = 0, lung;

    printf("Inserire la lunghezza del vettore:\n");
    do{
        scanf("%d", &lung);

        if (lung<0){
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(lung<0);

    for (int j = 0; j < lung; j++){
        printf("\ninserire l'elemento %d del vettore", (j+1));
        scanf("%d", (vett+j));
    }

    function(vett, &pari, &dispari, lung);
    
    printf("\nla somma dei membri nelle posizioni pari: %d \n", pari);
    printf("\nla somma dei membri nelle posizioni dispari: %d \n", dispari);

    return 0;
}

void function(int *vett, int *sommapari, int *sommadispari, int lung){

    for (int a = 0; a < lung; a++){
        if (a%2==0){
            *sommapari+=*(vett+a);
        }
        else{
            *sommadispari+=*(vett+a);
        }
    }

}
//Dato in input un numero intero n, sommare i primi n numeri dispari e verificare che tale somma è uguale al quadrato di n
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool sommadispari(int n); 

int main(){
    int n;
    bool corretto;

    printf("inserisci un numero maggiore di 0:\n");
    do{
        scanf("%d", &n);

        if (n<0){
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(n<0);

    corretto = sommadispari(n);

    if(corretto){
        printf("La somma dei primi %d numeri dispari e' uguale al quadrato di %d\n", n, n);
    }
    else{
        printf("La somma dei primi %d numeri dispari non e' uguale al quadrato di %d\n", n, n);
    }

    return 0;
}

bool sommadispari(int n){
    int somma = 0;
    bool potenza = false;

    for (int i = 0; i < n; i++){
        somma+=(i*2)+1;
    }
    if (somma == n*n){
        potenza = true;
    }

    return potenza;
}
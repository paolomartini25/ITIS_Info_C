//Dato in input un numero intero n, sommare i primi n numeri dispari e verificare che tale somma è uguale al quadrato di n
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool sommadispari(int n);  //funzione che somma i primi n numeri dispari

int main(){
    int n; //numero inserito dall'utente
    bool corretto; //se la somma dei primi n numeri dispari è uguale al quadrato di n = true

    printf("inserisci un numero maggiore di 0:\n");
    do{
        scanf("%d", &n); //inserimento di n

        if (n<0){//se il numero è minore di 0
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(n<0);//se il numero è maggiore d 0 si esce dal ciclo sennò si richiede il dato

    corretto = sommadispari(n);

    if(corretto){ //se la somma dei primi n numeri dispari è uguale al quadrato di n
        printf("La somma dei primi %d numeri dispari e' uguale al quadrato di %d\n", n, n);
    }
    else{ //se la somma dei primi n numeri dispari è diversa dal quadrato di n
        printf("La somma dei primi %d numeri dispari non e' uguale al quadrato di %d\n", n, n);
    }

    return 0;
}

bool sommadispari(int n){
    int somma = 0;
    bool potenza = false; //imposto l'uguaglianza'tra potenza e somma dei primi n numeri dispari a falsa

    for (int i = 0; i < n; i++){ //ripeto n volte
        somma+=(i*2)+1; //(i*2)+1= numero disari
    }
    if (somma == n*n){
        potenza = true; //se è uguale imposto a vero
    }

    return potenza; //ritorno il booleano dell'uguaglianza
}
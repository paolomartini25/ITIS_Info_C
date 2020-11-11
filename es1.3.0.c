// Data una sequenza di numeri dire quante volte un numero è maggiore del successivo
// Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool maggiore(int num, int *maggiore);

int main(){
    int num, num_di_num;
    int mag = 0;
    int cont = 0;
    bool controllo;

    printf("quanti numeri vuoi inserire? deve essere maggiore di 0:\n");
    do{
        scanf("%d", &num_di_num); //inserimento numero di cifre

        if (num_di_num<0){ //se il numero è minore di 0
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }

    }while(num_di_num<0); //se il numero è maggiore d 0 si esce dal ciclo sennò si richiede il dato

    
    for (int j=0; j < num_di_num; ++j){ //ripete per quante sono le cifre
        
        printf("inserisci il numero:\n");
        scanf("%d", &num);

        controllo = maggiore(num, &mag);
        if (controllo)
            cont++;
    }

    printf("Il numero maggiore e': %d\nun numero e' maggiore del successivo per %d volte\n", mag, cont);

    return 0;
}

bool maggiore(int num, int *maggiore){
    bool controllo = false;
    
    if (*maggiore<num){
        *maggiore=num;
        controllo = true;
    }

    return controllo;
}
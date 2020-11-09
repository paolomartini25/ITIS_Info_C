/*
Scrivere un programma C che definisca la struttura Data con i campi giorno, mese e anno e quindi la struttura Persona composta da nome, cognome e data di nascita.
Si richiedano i dati di n persone e una data e si stampino tutte le persone nate in quella data.
*/
//Paolo Martini 4BROB
// versione 1, modifica nella struct e nel metodo di controllo di uguaglianza

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define DIM 100

typedef struct Data{
    int giorno;
    int mese;
    int anno;
}Tipodata;

typedef struct Persona{
    char nome[DIM];
    char cognome[DIM]; 
    Tipodata nascita; // giorno, mese e anno di nascita
    bool uguale; //serve per vedere se la persona è nata in quel giorno o no
}Tipopersona;

void gemelli(Tipopersona *umano, Tipodata ricerca, int cont);
/*
alla funzione bisogna dare:
il vettore struttura che contiene i dati personali,
la data di nascita da ricercare
il numero di persone da controllare
*/

int main(){

    //inserimento del numero di persone da confrontare ---------------------------------------------------

    int num;

    printf("Qunte persone vuoi controllare:\n");
    do{
        scanf("%d", &num);

        if (num<0){
            printf("Errore, il numero che hai inserito è minore di 0.\n");
        }
    }while(num<0);

    //-----------------------------------------------------------------------------------------------------

    Tipopersona umano[num];     //vettore di struct che conterrà i dati personali delle persone inserite.
    Tipodata ricerca;           //data di nascita che deve essere ricercata tra le persone per vedere se c'e' qualcuno nato in quel giorno.


    printf("Inserisci il giorno da ricercare\n");
    scanf("%d", &ricerca.giorno);

    printf("Inserisci il mese da ricercare\n");
    scanf("%d", &ricerca.mese);

    printf("Inserisci l'anno da ricercare\n");
    scanf("%d", &ricerca.anno);
    printf("\n"); 


    //---------------------------------------
    //inserisco i dati personali delle persone

    for (int a = 0; a < num; a++){ //il ciclo vinene ripetuto tante volte tante deciso dall'utente in precedenza

        const char *standard; //variabile d'appoggio da utilizzare per la strcpy
        char stringa[DIM];    //variavile d'appoggio per la fgets

        printf("persona: %d\n", (a+1));
        
        printf("Inserici il nome della persona\n");
        // errore: devo inserire 2 volte il nome della persona nell' fgets perchè la prima volta mi rrestituisce NULL <------------------------------- "ERRORE"
        gets(stringa);          //1 mi restituisce NULL
        gets(stringa);          //2 inserisco il nome nella variabile stringa
        standard=stringa;       //standard è la variabile costante che uso per poter copiare la stringa con strcpy
        strcpy(umano[a].nome, standard);

        printf("Inserici il cognome della persona\n");
        gets(stringa);                                              //inserisco il cognome
        standard=stringa;
        strcpy(umano[a].cognome, standard);
        
        printf("Inserisci il giorno della sua nascita\n");
        scanf("%d", &umano[a].nascita.giorno);                      //inserisco il giorno di nascita

        printf("Inserisci il mese della sua nascita\n");
        scanf("%d", &umano[a].nascita.mese);                        //inserisco il mese di nascita

        printf("Inserisci l'anno della sua nascita\n");
        scanf("%d", &umano[a].nascita.anno);                        //inserisco l'anno di nascita
        printf("\n");

    }

    //-------------------------------------------------------------

    gemelli(umano, ricerca, num); //richiamo la funzione

    //stampo i nomi:
    
    for (int i=0; i<num; i++){ //il ciclo vinene ripetuto tante volte tante deciso dall'utente in precedenza

        if (umano[i].uguale){ //e' nato nel giorno riciesto
            printf("nome: %s\t cognome: %s\nE' nato nel giorno da te inserito\n.",umano[i].nome, umano[i].cognome); 
        }
        else{                 //non è nato nel giorno richiedto
            printf("nome: %s\t cognome: %s\nNon e' nato nel giorno da te inserito\n.",umano[i].nome, umano[i].cognome);
        }
    }

    return 0;

}

void gemelli(Tipopersona *umano, Tipodata ricerca, int cont){
        
    for (int j = 0; j < cont; j++){ //il ciclo vinene ripetuto tante volte tante deciso dall'utente in precedenza

        if (umano[j].nascita.giorno==ricerca.giorno && umano[j].nascita.mese==ricerca.mese && umano[j].nascita.anno==ricerca.anno){ //se le date di nascita coincidono:
            umano[j].uguale==true; //uguale viene settato su true
        }
        else{ //se le date non coincidono:
            umano[j].uguale=false; //uguale viene settato su false
        }
    }
}
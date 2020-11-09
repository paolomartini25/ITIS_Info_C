//Data una stringa letta da tastiera (può contenere spazi),(con elemento tappo\0) creare la stringa con i caratteri invertiti
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>

#define DIM 1000

int contacaratteri(char *str);

void inverti(char *str, char *rts, int z);

int main(){

    char stringa[DIM], agnirts[DIM];

    printf("inserire una frase:");
    gets(stringa);

    int lung = contacaratteri(stringa);
    inverti(stringa, agnirts, lung);

    printf("la frase e' dientata: %s", agnirts);

    return 0;

}

int contacaratteri(char *str){

    int cont = 0;

    while(*(str+cont)!='\0'){
        cont ++;
    }

    cont--;

    return cont;

}

void inverti(char *str, char *rts, int z){
    
    int a = 0;

    while(*(str+a)!='\0'){

        *(rts+a)=*(str+z);

        a++;
        z--; 
    }

    *(rts+a)='\0';


}
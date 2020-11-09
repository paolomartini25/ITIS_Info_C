//Raddoppiare le occorrenze delle vocali in una stringa (ciao->ciiaaoo) usare 2 stringhe;
//Paolo Martini 4BROB

#include <stdio.h>
#include <stdlib.h>

#define DIM 1000

void raaddooppiiaa(char *stringa, char *striingaa);

int main(){
    char str[DIM], r_str[DIM];

    printf("inserire una parola:");
    gets(str);

    raaddooppiiaa(str, r_str);

    printf("la parola e' diventata: %s", r_str);

    return 0;
}

void raaddooppiiaa(char *stringa, char *striingaa){

    int a = 0;
    int aa = 0;
    
    while(*(stringa+a)!='\0'){

        if (*(stringa+a)=='a' || *(stringa+a)=='e' || *(stringa+a)=='i' || *(stringa+a)=='o' || *(stringa+a)=='u'){

            *(striingaa+aa)=*(stringa+a);
            aa++;

        }

        *(striingaa+aa)=*(stringa+a);
        aa++;

        a++;

    }

    *(striingaa+aa)='\0';

}
#include <stdio.h>
#include <stdlib.h>

int main(){
int i = 0;
FILE *file;
file = fopen("arqdeentrada3.txt", "r");
if(file == NULL){

    printf("Error");
    exit(1);
}

char vetor[100];

while(fgets(vetor, 100, file) != NULL){

     printf("%s\n", vetor);
     i++;
     printf("%d\n", i);

}

fclose(file);

}
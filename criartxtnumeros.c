#include <stdio.h>
#include <stdlib.h>

int main (void){



FILE *arquivo;
arquivo = fopen("arqdeentrada1.txt", "w");

fprintf(arquivo, "20\n");
fprintf(arquivo, "87\n");
fprintf(arquivo, "65\n");
fprintf(arquivo, "54\n");

fclose(arquivo);
return 0;
}
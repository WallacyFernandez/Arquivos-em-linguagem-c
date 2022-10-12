#include <stdio.h>
#include <stdlib.h>

int main (void){



FILE *arquivo;
arquivo = fopen("arqdeentrada3.txt", "w");

fprintf(arquivo, "Aline\n");
fprintf(arquivo, "Pedro\n");
fprintf(arquivo, "sofia\n");
fprintf(arquivo, "alberto\n");

fclose(arquivo);
return 0;
}
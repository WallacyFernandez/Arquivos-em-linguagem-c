#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *file;
file = fopen("arqdeentrada1.txt", "r");


int x, y, z, r;

fscanf(file, "%d %d %d %d", &x, &y, &z, &r);



fclose(file);

printf("%d %d %d %d \n", x, y, z, r);

return 0;


}
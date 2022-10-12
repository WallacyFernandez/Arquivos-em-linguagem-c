#include <stdio.h>
#include <stdlib.h>

int main (void){

int i, j, soma = 0, media, menor, maior;

FILE *arquivo;
arquivo = fopen("teste2.txt", "w");

int **vetor = (int**) malloc(4 * sizeof(int*));
if (vetor == NULL){

    printf("memoria insuficiente\n");
    exit(1);
}

for(i = 0; i < 4; i++){

    vetor[i] = (int *)malloc(25 * sizeof(int));

}

for(i = 0; i < 4; i++){

    for(j = 0; j < 25; j++){

        vetor[i][j] = rand()% 100;
    }
}

for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 25; j++)
        {

            printf("Numeros da linha (%d) coluna (%d) Matriz A: %3d \n", i + 1, j + 1, vetor[i][j]);
            printf("\n");
        }
    }


for(i = 0; i < 4; i++){

    for(j = 0; j < 25; j++){
        
        fprintf(arquivo, "%d ", vetor[i][j]);
        
    }
}

menor = vetor[0][0];
maior = vetor[0][0];

for(i = 0; i <= 4; i++){
    
    for(j = 1; j < 25; j++){

     if(vetor[i][j] > maior){
    	
    	maior = vetor[i][j];
    	
	}
	
	if(vetor[i][j] < menor){
    	
    	menor = vetor[i][j];
	}

    }
   
}



media = soma / 100;




    fprintf(arquivo, "Maior valor: %d \n", maior);
    fprintf(arquivo, "Menor valor: %d \n", menor);
    fprintf(arquivo, "media do vetor: %d \n", media);







fclose(arquivo);

free(vetor);

}
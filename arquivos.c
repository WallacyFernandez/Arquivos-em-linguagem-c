#include <stdio.h>
#include <stdlib.h>

int main (void){

int i, soma = 0, media, menor, maior;

FILE *arquivo;
arquivo = fopen("teste3.txt", "w");

int *vetor = (int) malloc(100 * sizeof(int));
if (vetor == NULL){

    printf("memoria insuficiente\n");
    exit(1);
}

for(i = 0; i <= 100; i++){

    vetor[i] = rand()% 100;
    
    soma = soma + vetor[i];
}

for(i = 0; i < 25; i++){
    
     if(vetor[i] < 10){

     fprintf(arquivo, "0%d ", vetor[i]);
     

    }else if(vetor[i] >= 10){

     fprintf(arquivo, "%d ", vetor[i]);
    
    }
}
printf("\n");

for(i = 25; i < 50; i++){

     if(vetor[i] < 10){

     fprintf(arquivo, "0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

     fprintf(arquivo, "%d ", vetor[i]);

    }

    
    
}

printf("\n");

for(i = 50; i < 75; i++){

      if(vetor[i] < 10){

     fprintf(arquivo, "0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

     fprintf(arquivo, "%d ", vetor[i]);
    
    }
    
}

printf("\n");

for(i = 75; i < 100; i++){

      if(vetor[i] < 10){

     fprintf(arquivo, "0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

     fprintf(arquivo, "%d ", vetor[i]);
    
    }
}
menor = vetor[0];
maior = vetor[0];

for(i = 1; i <= 100; i++){
    
    if(vetor[i] > maior){
    	
    	maior = vetor[i];
    	
	}
	
	if(vetor[i] < menor){
    	
    	menor = vetor[i];
	}
   
}



media = soma / 100;




    fprintf(arquivo, "\n Maior valor: %d \n", maior);
    fprintf(arquivo, "Menor valor: %d \n", menor);
    fprintf(arquivo, "media do vetor: %d \n", media);







fclose(arquivo);

free(vetor);

}
#include <stdio.h>
#include <stdlib.h>

int main (void){

int i, soma = 0, media, menor, maior;

int *vetor = (int) malloc(100 * sizeof(int));
if (vetor == NULL){

    printf("memoria insuficiente\n");
    exit(1);
}

for(i = 0; i <= 100; i++){

    vetor[i] = rand()% 100;
    
   
}


for(i = 0; i < 25; i++){
    
     if(vetor[i] < 10){

     printf("0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

    printf("%d ", vetor[i]);
    
    }
}
printf("\n");

for(i = 25; i < 50; i++){

     if(vetor[i] < 10){

     printf("0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

    printf("%d ", vetor[i]);

    }

    
    
}

printf("\n");

for(i = 50; i < 75; i++){

      if(vetor[i] < 10){

     printf("0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

    printf("%d ", vetor[i]);
    
    }
    
}

printf("\n");

for(i = 75; i < 100; i++){

      if(vetor[i] < 10){

     printf("0%d ", vetor[i]);

    }else if(vetor[i] >= 10){

    printf("%d ", vetor[i]);
    
    }
}





   








free(vetor);

}
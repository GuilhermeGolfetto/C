#include <stdio.h>
#include <stdlib.h>

void AlgoritmoSelecao(int tamVetor, int vetor[]);

void AlgoritmoRecursivoSelecao();

void AlgoritmoInsercao(int tamVetor, int vetor[]);

void AlgoritmoRecursivoInsercao();

void ApresentarVetor(int tamVetor, int vetor[]);

int main(int argc, char *argv[])
{
  int tam = 10;
  int vetor[10] = {5,7,9,8,2,10,16,1,0,95};
  printf("\n \n \nvetor bagunçado \n \n \n");
  ApresentarVetor(tam,vetor);
  AlgoritmoSelecao(tam,vetor);
  int vetor2[10] = {5,7,9,8,2,10,16,1,0,95};
  printf("\n \n \nvetor bagunçado \n \n \n");
  ApresentarVetor(tam,vetor2);
  AlgoritmoInsercao(tam,vetor2);
  system("PAUSE");	
  return 0;
}

void ApresentarVetor(int tamVetor, int vetor[])
{
    int i=0;
    for(i=0;i<tamVetor;i++)
    {
      printf("Valor do vetor: %d \n", vetor[i]);
    }    
}

void AlgoritmoSelecao(int tamVetor, int vetor[])
{
     int i,j,min,x;
     for(i=0;i< tamVetor-1;i++)
     {
         min = i;
         for(j= i+1;j<tamVetor;j++)
         {
            if(vetor[j] < vetor[min])
            {
                min =j;
            }
         }
         x = vetor[i];
         vetor[i] = vetor[min];
         vetor[min] = x;
     }
     printf("\n \n \nvetor ordenado \n \n \n");
     ApresentarVetor(tamVetor, vetor);
}

void AlgoritmoInsercao(int tamVetor, int vetor[])
{
    int i, j, x;
    for( j = 1 ; j < tamVetor ; j++ )
    {
        x = vetor[j];
        for( i = j-1 ; i >= 0 && vetor[i] > x ; i--)
		{
	 	    vetor[i+1] = vetor[i];
	 	}
	 	vetor[i+1] = x;

	 }
	 printf("\n \n \nvetor ordenado \n \n \n");
     ApresentarVetor(tamVetor, vetor); 	 
}

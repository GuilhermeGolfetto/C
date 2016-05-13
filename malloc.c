#include <stdio.h>
#include <stdlib.h>

int* vetorDinamico(int tam){
    return (int*) malloc(tam * sizeof(int));
}


int main()
{
    int *v;
    int numero =0;
    int i;
    printf("digite o tamanho do vetor\n");
    scanf("%d",&numero);

    v = vetorDinamico(numero);

    for(i =0;i<numero;i++){
        printf("digite o valor da posicao %d do vetor:",i+1);
        scanf("%d",&v[i]);
    }

    for(i =0;i<numero;i++){
        printf("%d \n",v[i]);
    }
    return 0;
}

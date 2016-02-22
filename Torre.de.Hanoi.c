#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void contaMovimento(int discos){
    int movimentos = pow(2,discos) -1;
    printf("Foram necessarios: %d movimentos",movimentos);
}
void moveDisco(int d, char ori, char dest, char aux){
    //por ser recursiva, deve se passar a quantidade disco menos 1
    if(d==1){
        printf("Mover disco %d de %c para %c \n",d,ori,dest);
    }else{
        //sempre vai ter um movimento possivel
        moveDisco(d-1,ori,aux,dest);
        printf("Mover disco %d de %c para %c \n",d,ori,dest);
        moveDisco(d-1,aux,dest,ori);
    }
}
int main()
{
    int discos = 0;
    printf("Digite a quantidade de discos:");
    scanf("%d",&discos);
    moveDisco(discos, 'A', 'C', 'B');
    contaMovimento(discos);
    return 0;
}

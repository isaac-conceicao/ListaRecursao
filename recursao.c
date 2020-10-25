#include <stdio.h>
#include <stdlib.h>
#include "recursao.h"

//n!=n*(n-1)! | n>0
int questao1 (int n){
  if(n==1){
    return 1;
  }

  return n*questao1(n-1);
}

int questao7(int *vet,int index){
  
  int aux=vet[(TAM-1)-index];
  vet[(TAM-1)-index]=vet[index];
  vet[index]=aux;
  index++;

  if (index>(int)(TAM/2)){
    return SUCESSO;
  }

  return questao7(vet, index);
}

#include <stdio.h>
#include <stdlib.h>
#include "recursao.h"

int main(void){
  printf("Hello World\n");
  int vet[TAM];
  
  //Questao 1
  int n=5;
  int result=questao1(n);
  printf("O fatorial de %d = %d\n",n,result);


  //Questao 7
  for (int i=0;i<TAM;i++){
    vet[i]=i+1;
  }
  result=questao7(vet,0);
  for (int i=0;i<TAM;i++){
    printf("vet[%d]=%d\n",i,vet[i]);
  }
  
  return 0;
}


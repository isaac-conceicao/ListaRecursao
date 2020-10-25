#include <stdio.h>
#include <stdlib.h>
#include "listaRecursao.h"

int main(void){
  int vet[TAM];
  int k,n,x,y;
  int result;
  int tamanho;

  show_log("Questao 1: fatorial()");
  printf("1) Informe um inteiro positivo: ");
  scanf("%d",&n);
  result=fatorial(n);
  printf("O fatorial de %d = %d\n",n,result);

  show_log("Questao 2: fibonacci()");
  printf("2) Informe a posicao do termo fibonacci (n>1): ");
  scanf("%d",&n);
  result=fibonacci(n);
  printf("O %dº numero da sequencia fibonacci = %d\n",n,result);

  show_log("Questao 3: invertInt()");
  printf("3) Informe o inteiro positivo n (ex.: 1234): ");
  scanf("%d",&n);
  result=0;
  invertInt(n,&result);
  printf("O inverso de %d = %d\n",n,result);

  show_log("Questao 4: somaVet()");
  printf("4) Informe o tamanho do vetor (de 1 a %d): ",TAM);
  scanf("%d",&tamanho);
  printf("vet = {");
  for (int i=0;i<tamanho;i++){
    vet[i]=i+1;
    printf("%d",vet[i]);
    if(((i>1)&&i%(tamanho-1)!=0)||vet[i]==1||vet[i]==2){
      printf(", ");
    }
  }printf("}\n");
  int *vetor=vet;
  result=somaVet(vetor,tamanho);
  printf("A soma dos elementos de vet = %d\n",result);

  show_log("Questao 5: somaAteN()");
  printf("5) Informe o inteiro positivo n: ");
  scanf("%d",&n);
  result=somaAteN(n);
  printf("Asoma de 1 ate %d = %d\n",n,result);

  show_log("Questao 6: expon()");
  printf("6) Informe o inteiro positivo k: ");
  scanf("%d",&k);
  printf("Informe o inteiro positivo n: ");
  scanf("%d",&n);
  result=expon(k,n);
  printf("%d elevado a %d = %d\n",k,n,result);

  show_log("Questao 7: invertVet()");
  printf("vet = {");
  for (int i=0;i<TAM;i++){
    vet[i]=i+1;
    printf("%d",vet[i]);
    if(((i>1)&&i%(tamanho-1)!=0)||vet[i]==1||vet[i]==2){
      printf(", ");
    }
  }printf("}\n");
  invertVet(vet,0);
  printf("Segue vetor com elementos invertidos:\n");
  printf("vet = {");
  for (int i=0;i<TAM;i++){
    printf("%d",vet[i]);
    if(((i>1)&&i%(TAM-1)!=0&&vet[i]!=1)||vet[i]==100||vet[i]==99||vet[i]==98){
      printf(", ");
    }
  }
  printf("}\n");

  show_log("Questao 8: mdc()");
  printf("6) Informe o inteiro positivo x: ");
  scanf("%d",&x);
  printf("Informe o inteiro positivo y: ");
  scanf("%d",&y);
  result=mdc(x,y);
  printf("O mdc de %d e %d = %d\n",x,y,result);

  show_log("Questao 9: somaAteN()");
  printf("9) Informe o inteiro positivo n: ");
  scanf("%d",&n);
  result=somaAteN(n);
  printf("Asoma de 1 ate %d = %d\n",n,result);

  show_log("Questao 10: contaDigito()");
  printf("6) Informe um digito (ex.: 1): ");
  scanf("%d",&k);
  printf("Informe o inteiro positivo n: ");
  scanf("%d",&n);
  result=contaDigito(k,n);
  printf("O digito %d aparece %d vezes no inteiro %d\n",k,result,n);
  printf("FIM");
  
  return 0;
}
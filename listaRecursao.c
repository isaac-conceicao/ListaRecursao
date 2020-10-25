#include <stdio.h>
#include <stdlib.h>
#include "listaRecursao.h"

int ligado = SHOW_LOG;
void show_log(char *str){
    if (ligado)
        printf("\n##%s##\n", str);
}

//1) Fatorial. n!=n*(n-1)! | n>0
int fatorial(int n){
  if(n==0){
    return 1;
  }
  
  return n*fatorial(n-1);
}

//2) Sequancia fibonacci nº numero = fibonacci(n-1)+fibonacci(n-2) | n>0
int fibonacci(int n){
  if(n==1){
    return 0;
  }else if(n==2||n==3){
    return 1; 
  }else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}

//3) Inverte valores de um inteiro (ex.: 123->321)
void invertInt(int n, int* inv){
    if(n>10){
      *inv=*inv+n%10;
      *inv=*inv*10;
      invertInt(n/10,inv);
    }else{
      *inv=*inv+n;
    }
}

//4) Somar os numeros do vetor[TAM]
int somaVet(int *vet, int tam){
  
  if(tam==1){
    return *vet;
  }
  return *vet+somaVet(++vet,--tam);
}

//5) Somar de 1 a n | n>0
int somaAteN(int n){
  if (n==1){
    return 1;
  }
  return n+somaAteN(n-1);
}

//6) Calcular k^n | n>0 & k>0
int expon(int k, int n){
  if(n<1){
    return 1;
  }
  return k*expon(k,n-1);
}

//7) inverter a ordem dos elementos do vetor[TAM]
void invertVet(int *vet,int index){
  
  int aux=vet[(TAM-1)-index];
  vet[(TAM-1)-index]=vet[index];
  vet[index]=aux;
  index++;

  if (index<(int)(TAM/2)){
    invertVet(vet, index);
  }
}

//8) calcular o mdc de x e y
int mdc(int x, int y){
  if(y==0){
    return x;
  }else{
    return mdc(y,x%y);
  }
}

//9) o mesmo que a questao 5)

//10) contar quantas vezes o digito k ocorre no intiro n
int contaDigito(int k, int n){
  int x=n%10;
  if((n>10)){
    if(n%10==k)
      return 1+contaDigito(k,(int)n/10);
    else
      return contaDigito(k,(int)n/10);
  }else if(n%10==k){
    return 1;
  }else{
    return 0;
  }
}
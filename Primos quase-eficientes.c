#include<stdio.h>

int LerInt(){
  int Num;
  scanf("%d", &Num);

  return Num;
}

int HePotencialDivisor(int Num,int possivelDivisor){
  if((possivelDivisor*possivelDivisor)<=Num) return 1;
  else return 0;
  
}

int main(){
  int possivelprimo, possivelDivisor, proxTeste;

  while(possivelprimo=LerInt(), possivelprimo!=0){

    possivelDivisor = 2;
    proxTeste = 1;
    
    if(possivelprimo<=3){
      printf("%d: 2\n", possivelprimo);
      continue;
    } 

    printf("%d: ", possivelprimo);
    
    while(proxTeste){
      
      if(HePotencialDivisor(possivelprimo, possivelDivisor)){
        printf("%d ", possivelDivisor);
        if(possivelprimo%possivelDivisor==0) proxTeste = 0;
      }
      else proxTeste = 0;

      if(possivelDivisor==2) possivelDivisor += 1;
      else possivelDivisor += 2;
    }    
  }
simples
  return 0;  
}

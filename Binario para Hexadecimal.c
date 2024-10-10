#include<stdio.h>
#include<math.h>

int main(){

  char bit;
  unsigned int decimal;  
  int cont, resto, divisor;
  
  for(cont = 31; cont>=0; cont--){
    scanf("%c", &bit);
    if(bit=='1') decimal += pow(2,cont);
    
  }
  
  printf("0x");

  for(cont = 7; cont>=0; cont--){
    divisor = pow(16,cont);
    resto = decimal/divisor;
    
    if(resto<=9) printf("%d", resto);
    else printf("%c", (resto-10)+'A');

    decimal = decimal % divisor;
  }

  return 0;  
}

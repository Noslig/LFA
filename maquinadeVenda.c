#include <stdio.h>

int main(void) {

int moeda=0, contaMoeda=0, troco=0;


printf("Insira a moeda:"); scanf("%d",&moeda);

if(moeda == 25 || moeda == 10){
    contaMoeda += moeda;
    while(contaMoeda < 45){

         printf("Insira mais moedas ");
        scanf("%d",&moeda);
        
      contaMoeda += moeda;
      printf("Total %d:",contaMoeda);
  }

}else{
    printf("Insira moedas de 25 ou 10");
}

if(contaMoeda > 45){
  troco += contaMoeda - 45;
}

  
  return 0;
}

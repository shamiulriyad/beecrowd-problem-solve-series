#include<stdio.h>

int main()
{
   double value;
   int banknotes[6] ={100, 50, 20, 10, 5, 2};
    float bankcoins[6] ={1, 0.50, 0.25, 0.10, 0.05, 0.01};
   scanf("%lf",&value);

   printf("NOTAS:\n");

   //for banknote

   for(int i=0; i<6; i++){
    // Calculate the number of banknote

     int count = value/ banknotes[i];

    value -= count * banknotes[i];


    printf("%d nota(s) de R$ %.2f\n",count,(double)banknotes[i]);


   }
    //for coins
    printf("MOEDAS:\n");

    for(int i=0;i<6;i++){
    // Calculate the number of coins
     int count = value/ bankcoins[i];

      value -= count * bankcoins[i];

      printf("%d moeda(s) de R$ %.2f\n",count,bankcoins[i]) ;
    }
  return 0;


}


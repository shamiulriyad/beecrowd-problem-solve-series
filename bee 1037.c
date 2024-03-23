#include<stdio.h>

int main()
{
    float num;
    printf("enter the num : ");
    scanf("%f", &num);
    //Intervalo condition
    if (num >= 0 && num <= 25 ){
        printf("Intervalo [0,25]\n");
    }
    if (num >= 25 && num <= 50 ){
        printf("Intervalo (25,50]\n");
    }
    if (num >= 50 && num <= 75 ){               // range given the question
        printf("Intervalo (50,75]\n");
    }
    if (num >= 75 && num <= 100 ){
        printf("Intervalo (75,100]\n");
    }
    else{
        printf("Fora de intervalo\n");      //Fora de intervalo condition
    }

    return 0;
}

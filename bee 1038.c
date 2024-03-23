#include<stdio.h>

int main()
{
    int X, Y;
    float total;
    scanf("%d%d",&X,&Y);
    
       /*
        call the switch(x) and submited the value of x and go to this switch and
        submit the value of y and multiplication one by one.
        like switch value 1 and go to the case 1 and y value is 3 then total value is 12.00
       */

    switch(X){
                                        
        case 1:
        total = Y * 4.00;
        break;

        case 2:
        total = Y * 4.50;
        break;

        case 3:
        total = Y * 5.00;
        break;
        case 4:
        total = Y * 2.00;
        break;

        case 5:
        total = Y * 1.50;
        break;

        default:
        printf("Invalid product code\n");
        return 1;

    }

    printf("Total: R$ %.2f\n", total);


    return 0;

}
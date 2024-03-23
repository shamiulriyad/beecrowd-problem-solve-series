#include<stdio.h>
#include<math.h>

int main()
{
    double A, B, C, pr1;
    scanf("%lf%lf%lf",&A,&B,&C);

    pr1=(B*B)-(4*(A)*(C));
    if(pr1>0 && A !=0){
        double x, y;
        pr1 = sqrt(pr1);
        x =(-B+pr1)/(2*A);
        y=(-B-pr1)/(2*A);
        printf("R1 = %.5lf\n", x);
         printf("R2 = %.5lf\n", y);

    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;

}

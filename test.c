#include <stdio.h>
int main(){
    int Num;
    double radius,height;
    double x=3.14;
    printf("Please Enter the number of the shape");
    printf("\n1.Sphere");
    printf("\n2.Cone");
    printf("\n0.Exit");
    printf("\nEnter your answer:");
    scanf("%d",&Num);
    if(Num!=0){
        switch (Num){
            case 1:
                double volume;
                printf("Enter the Radius:");
                scanf("%lf",&radius);
                volume=(4.0/3.0)*x*radius*radius*radius;
                printf("Answer:%lf",volume);
                break;
            
            case 2:
                double volume1;
                printf("Enter the Radius:");
                scanf("%lf",&radius);
                printf("Enter the Height:");
                scanf("%lf",&height);
                volume=(1.0/3.0)*x*radius*radius*height;
                printf("Answer:%lf",volume1);
                break;
            default:
                printf("Invalid Number");


        }
    }
}
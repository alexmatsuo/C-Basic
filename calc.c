#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void entrada(double *num1, double *num2){
    printf("Digite o 1 numero: \n");
    scanf("%lf", num1);
    printf("Digite o 2 numero: \n");
    scanf("%lf", num2);
}

int main(){
    double num1, num2;
    entrada(&num1, &num2);
    printf("%f %f\n", num1, num2);
    printf("Digite o numero para a operacao desejada \n");
    printf("1: +\n");
    printf("2: -\n");
    printf("3: *\n");
    printf("4: /\n");
    int op;
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("%f\n", num1 + num2);
            break;
        case 2:
            printf("%f\n", num1 - num2);
            break;
        case 3:
            printf("%f\n", num1 * num2);
            break;
        case 4:
            printf("%f\n", num1 / num2);
            break;
        default:
            printf("Operacao invalida\n");
    }
    return 0;
}
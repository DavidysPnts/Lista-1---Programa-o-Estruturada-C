#include <stdio.h>

int main(){
    float salario_bruto, salario_liq, reajuste;
    int percentual;

    printf("Seu salario bruto: ");
    scanf("%f", &salario_bruto);

    if(salario_bruto < 1500){
        percentual = 20;
    }
    else if(salario_bruto > 5000){
        percentual = 10;
    }
    else{
        percentual = 15;
    }

    reajuste = salario_bruto * (percentual / 100.0);
    salario_liq = salario_bruto + reajuste;

    printf("Novo salario: %.2f\n", salario_liq);
    printf("Reajuste: %.2f\n", reajuste);
    printf("Percentual: %d%%", percentual);

    return 0;
}
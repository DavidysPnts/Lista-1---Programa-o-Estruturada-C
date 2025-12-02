#include <stdio.h>

int main(){
    int x, y, soma = 0;

    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);

    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i = x + 1; i < y; i++){
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("Resultado da soma dos impares entre eles: %d", soma);

    return 0;
}
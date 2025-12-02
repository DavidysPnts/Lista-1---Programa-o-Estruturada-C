#include <stdio.h>

int main(){
    int n, maior, pos;

    printf("Digite o primeiro valor: ");
    scanf("%d", &maior);
    pos = 1;

    for(int i = 2; i <= 10; i++){
        
        printf("Digite o %do valor: ", i);
        scanf("%d", &n);

        if(n > maior){
            maior = n;
            pos = i;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: %d", pos);

    return 0;
}
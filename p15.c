#include <stdio.h>

int main(){
    int N, X, Y;

    printf("Quantos pares? ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++){

        printf("Digite X e Y: ");
        scanf("%d %d", &X, &Y);

        if(Y == 0){
            printf("divisao impossivel\n");
        } 

        else{
            printf("X / Y = %d\n", X / Y);
        }
    }

    return 0;
}
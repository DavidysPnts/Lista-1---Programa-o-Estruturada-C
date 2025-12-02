#include <stdio.h>

int main(){
    int M, N;

    while(1){

        printf("Digite os dois inteiros: ");
        scanf("%d %d", &M, &N);

        if(M <= 0 || N <= 0){
            printf("Os valores precisam ser positivos e maiores que 0.");
            break;
        }

        else{
            int menor = M < N ? M : N;
            int maior = M > N ? M : N;
            int soma = 0;

            for(int i = menor; i <= maior; i++){
                printf("%d ", i);
                soma += i;
            }

            printf("\nSoma=%d\n", soma);
        }
    }

    return 0;
}

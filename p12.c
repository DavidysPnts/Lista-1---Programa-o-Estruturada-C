#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= 20; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
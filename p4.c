# include <stdio.h>

int main(){
    int N, horas, minutos, segundos;

    printf("Segundos: ");
    scanf("%d", &N);

    horas = N / 3600;
    minutos = (N % 3600) / 60;
    segundos = N % 60;

    printf("%d hrs:%d min:%d seg", horas, minutos, segundos);

    return 0;
}
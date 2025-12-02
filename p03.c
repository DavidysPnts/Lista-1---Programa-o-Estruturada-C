#include <stdio.h>

int main(){
    float distancia, tempo;

    printf("Distancia entre os carros (km): ");
    scanf("%f", &distancia);

    // 150 é a soma das velocidades (km/h)
    tempo = (distancia / 150) * 60;

    printf("Tempo necessario: %.2f minutos", tempo);

    return 0;
}
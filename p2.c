# include <stdio.h>

int main(){
    int distancia;
    float combustivel, consumo;

    printf("distancia total (km): ");
    scanf("%d", &distancia);

    printf("combustivel gasto (l): ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo medio: %.3f km/l", consumo);

    return 0;
}
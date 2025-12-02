# include <stdio.h>

int main(){
    int hr_i, min_i, hr_f, min_f;
    int duracao, horas, minutos;

    printf("Hora e minuto de inicio: ");
    scanf("%d %d", &hr_i, &min_i);

    printf("Hora e minuto de termino: ");
    scanf("%d %d", &hr_f, &min_f);

    duracao = (hr_f * 60 + min_f) - (hr_i * 60 + min_i);

    if(duracao <= 0){
        duracao += 24 * 60;
    }

    horas = duracao / 60;
    minutos = duracao % 60;

    printf("O jogo durou %d hora(s) e %d minuto(s)", horas, minutos);

    return 0;
}
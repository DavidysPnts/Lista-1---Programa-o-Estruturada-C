# include <stdio.h>

int main(){
    float R, V;

    printf("Raio: ");
    scanf("%f", &R);

    V = (4.0 / 3.0) * 3.14159 * R * R * R;

    printf("VOLUME = %.3f", V);

    return 0;
}
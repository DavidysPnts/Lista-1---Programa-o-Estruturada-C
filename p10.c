# include <stdio.h>
# include <math.h>

int main(){
    float A, B, C, delta, x1, x2;

    printf("Digite A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if(A == 0){
        printf("Impossivel calcular!");

        return 0;
    }

    else{
        delta = B * B - 4 * A * C;

        if(delta < 0){
            printf("Impossivel calcular!");

            return 0;
        }

        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
    }

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f", x2);

    return 0;
}
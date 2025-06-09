#include <stdio.h>

int main()
{
    float peso, alt, imc;
    
    printf("Ingrese su peso(Kg): ");
    scanf("%f", &peso);
    printf("Ingrese su altura(m): ");
    scanf("%f", &alt);
    
    imc = peso/(alt * alt);
    
    printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
    
    if(imc < 18.5)
    printf("Condición: Bajo peso\n");
    else if(imc < 24.9)
    printf("Condición: Normal\n");
    else if(imc < 29.9)
    printf("Condición: Sobrepeso\n");
    else
    printf("Condición: Obesidad\n");

    return 0;
}

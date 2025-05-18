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
    
    printf(" Indice | Condición\n");
    printf("----------------------------\n");
    printf(" <18.5 | Bajo peso\n");
    printf(" 18.5 a 24.9 | Normal\n");
    printf(" 25.0 a 29.9 | Sobrepeso\n");
    printf(" >=30| Obesidad\n");

    return 0;
}
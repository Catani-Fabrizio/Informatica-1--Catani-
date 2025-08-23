#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo(float altura, float longitud){
    float areaR;
    
    areaR = altura * longitud;
    return areaR;
}

float calcularPerimetroRectangulo(float altura, float longitud){
    float perimR;
    
    perimR = altura*2 + longitud*2;
    return perimR;
}

float calcularDiagonalRectangulo(float altura, float longitud){
    float diagonal;
    
    diagonal = sqrt(pow(altura,2) + pow(longitud,2));
    return diagonal;
}

float calcularAreaCirculo(float radio){
    float areaC;
    
    areaC = 3.14159265359*pow(radio, 2);
    return areaC;
}

float calcularPerimetroCirculo(float radio){
    float perimC;
    
    perimC = 2*3.14159265359*radio;
    return perimC;
}

void imprimirResultados(float area, float perim){
    printf("\nEl área del rectángulo es: %.2f", area);
    printf("\n\nEl perimetro del rectángulo es: %.2f", perim);
}

int main()
{ 
  int selec;
  float perimR, areaR, longitud, altura;
  float perimC, areaC, radio;
  
  do{
  printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
  scanf(" %d", &selec); 
  
  if(selec == 1){
      printf("Opción de rectángulo seleccionada‬\n\n");
      printf("Ingrese la longitud del rectángulo: ");
      scanf(" %f", &longitud);
      printf("\nIngrese la altura del rectángulo: ");
      scanf(" %f", &altura);
      
      areaR = calcularAreaRectangulo(altura, longitud);
      perimR = calcularPerimetroRectangulo(altura, longitud);
      
      imprimirResultados(areaR, perimR);
  }    
  else if(selec == 2){
      printf("Opción de circulo seleccionada‬\n\n");
      printf("Ingrese el radio del circulo: ");
      scanf(" %f", &radio);
      
      areaC = calcularAreaCirculo(radio);
      perimC = calcularPerimetroCirculo(radio);
      
      imprimirResultados(areaC, perimC);
  }    
  else
      printf("Opción invalida\n\n");
}while(selec<1 || selec>2);

  return 0;
}
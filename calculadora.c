#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar(float  num1, float num2){
    return num1+num2;
}

float subtrair(float  num1, float num2){
    return num1-num2;
}

float multiplicar(float  num1, float num2){
    return num1*num2;
}

float dividir(float  num1, float num2){
    return num1/num2;
}

float calcularPorcentagem(float  num1, float num2){
    return (num1*num2)/100;
}

int main( int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float num1, num2, resultado;
    
    printf("calculadora\n");
    printf("-----------------------------------------\n");
    printf("digite o valor do primeiro número: ");
    scanf("%f",&num1);
    printf("digite o valor do segundo número: ");
    scanf("%f",&num2);
    printf("-----------------------------------------\n");
    printf("1. somar\n");
    printf("2. subtrair\n");
    printf("3. multiplicar\n");
    printf("4. dividir\n");
    printf("5. Calcular a Porcentagem\n");
    printf("\n");
    printf("digite a opção desejada: ");
    scanf("%d",&opcao);
    
    switch(opcao){
        case 1:
        resultado = somar(num1, num2);
        break;
        case 2:
        resultado = subtrair(num1, num2);
        break;
        case 3:
        resultado = multiplicar(num1, num2);
        break;
        case 4:
            if(num2 == 0){
                printf("\n não é possível dividir por 0");
                return 0;
            }else{
                resultado = dividir(num1, num2);
            }
            break;
        case 5:
            resultado = calcularPorcentagem(num1, num2);
            break;
        default:
        printf("opção inválida\n");
        break;
        
    }
    printf("\n-----------------------------------------\n");
    printf("Resultado: %.2f\n", resultado);
    printf("\n");
    
    
    return 0;
}

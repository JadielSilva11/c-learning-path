 #include <stdio.h>

 void Kelvin(float *valor);
 void Fahrenheit(float *valor);

 int main()
 {
    float valor;
    int op;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &valor);
    printf("1 - Kelvin\n2 - Fahrenheit\nPara qual valor voce deseja tranformar: ");
    scanf("%d", &op);
    if (op == 1)
    {
        Kelvin(&valor);
    }
    else 
    {
        Fahrenheit(&valor);
    }

    return 0;
 }

 void Kelvin(float *kelvin)
 {
    *kelvin = *kelvin + 273.15;
    printf("A temperatura tranformada em graus Kevin: %.1f\n", *kelvin);
 }

 void Fahrenheit(float *Fahrenheit)
 {
    *Fahrenheit = (*Fahrenheit * 1.8) + 32;
    printf("A temperatura tranformada em graus fahrenheit: %.1f", *Fahrenheit);
 }
 
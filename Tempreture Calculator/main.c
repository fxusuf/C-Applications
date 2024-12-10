/*
    Uzayda sıcaklık ölçümlerini yaparken kullanılan sıcaklık birimlerini dönüştüren basit bir program yaz.
    Celsius'tan Kelvin'e: 𝐾 = 𝐶 + 273.15
    Fahrenheit'tan Celsius'a: C = (F-32) x 5/9
    Kelvin'den Fahrenheit'a: F = (K x 9/5) - 459.67

*/

#include <stdio.h>

float celToKelvin(float s);
float fahToCelsius(float s);
float kelToFahrenheit(float s);

int main(){

    int process;
    float result;
    float n;

    printf("Choose the operation you want to perform: \n1- Celsius to Kelvin\n2- Fahrenheit to Celsius\n3- Kelvin to Fahrenheit\n");
    scanf("%d", &process);

    switch(process){
        case 1:
        printf("Enter Celsius to convert Kelvin: ");
        scanf("%f", &n);
        result = celToKelvin(n);
        printf("%.2f Celsius = %.2f Kelvin.\n", n, result);
        break;
        case 2:
        printf("Enter Fahrenheit to convert Celsius: ");
        scanf("%f", &n);
        result = fahToCelsius(n);
        printf("%.2f Fahrenheit = %.2f Celsius.\n", n, result);
        break;
        case 3:
        printf("Enter Kelvin to convert Fahrenheit: ");
        scanf("%f", &n);
        result = kelToFahrenheit(n);
        printf("%.2f Kelvin = %.2f Fahrenheit.\n", n, result);
        break;
        default:
        printf("Error: Undefined process.");
        break;
    }


    return 0;
}

float celToKelvin(float s){
    return(s + 273.15);
}
float fahToCelsius(float s){
    return((s-32)*5/9);
}
float kelToFahrenheit(float s){
    return((s * 9/5) - 459.67);
}

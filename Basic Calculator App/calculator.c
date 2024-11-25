/*
Kullanıcıdan iki farklı sayı al
Kullanıcıya seçenekler sun 
Her seçenek için farklı matematiksel işlemleri uygulayıp ekrana yazdır
Bölümde paydanın sıfır olmamasını sağla ve tanımlanmamış seçenekte kullanıcıyı uyar.
*/

#include <stdio.h>

int main(){

    int num1, num2, process; 
    float result; 

    printf("Please enter first number:\n");
    scanf("%d", &num1);
    printf("Please enter second number:\n");
    scanf("%d", &num2);

    printf("--------(Calculator)--------\n");
    printf("1- Add the numbers\n2- Subtract the numbers\n3- Multiply the numbers\n4- Divide the numbers\n");
    printf("-------------------------\n");

    while(1){
    printf("Please choose the operation you want to perform:\n");
    scanf("%d", &process);

    switch (process)
    {
    case 1:
        result = num1 + num2;
        printf("%d + %d = %.2f",num1, num2, result);
        return 0;
    case 2:
        result = num1 - num2;
        printf("%d - %d = %.2f",num1, num2, result);
        return 0;
    case 3:
        result = num1 * num2;
        printf("%d x %d = %.2f",num1, num2, result);
        return 0;
    case 4:
    while (1) {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed. \nEnter second number again:\n");
            scanf("%d", &num2); 
        } else {
            result = (float) num1 / num2; 
            printf("%d / %d = %.2f", num1, num2, result); 
            break;
        }
    }
        return 0;  
    default:
        printf("Error: Undefined action try again..\n");
        break;
    }
    }
    return 0;
}

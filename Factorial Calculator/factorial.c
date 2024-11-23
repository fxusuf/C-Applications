/*
Kullanıcıdan bir sayı alıp ve o sayının faktöriyelini hesapla
negatif sayı girdiğinde hata verip tekrardan sayı girmesini sağla
faktöriyelin nasıl hesaplandığını göstererek sonucu yazdır.
Kullanıcıya devam etmek isteyip istemediğini sor.
*/
#include <stdio.h>

int main(){

    int num = 0;
    int n = num;
    long long int factorial = 1;

    while(1){
    printf("Please enter a number to calculate its factorial: ");
    scanf("%d", &num);
    if(num >= 0){
        for(int i = 1; i <= num; i++){
            factorial *= i;
        }
        if(num != 0){
        printf("%d!: ",num);
        for(n = num; n > 0; n--){
            printf("%d", n);
            if(n>1){
                printf(" * ");
            }
        }
        printf(" = %lld",  factorial);
        }else{
            printf("%d factorial is equal to 1", num);
        }
        return 0;
        }else{
        printf("Error: Factorial is not defined for negative numbers.\n");
        }
    }

    return 0;
}

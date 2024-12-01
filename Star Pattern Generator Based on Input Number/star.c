/* 7- Girilen sayıya göre 
*****
****
***
**
*
gibi şekiller oluştur. */

#include <stdio.h>

int main(){

    int num;
    int n;

    printf("Please enter a number: ");
    scanf("%d", &num);

    while(num >= 1){
        n = num;
        while(n > 0){
            printf("*");
            n--;
        }
        printf("\n");
       num --; 
    }  


    return 0;
}
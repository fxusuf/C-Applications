/*
switch case kullanarak kullanıcıdan hangi şeklin alanını hesaplayacağını sor
seçilen şekle göre gerekli bilgileri kullanıcıdan al ve hesapla
sonuçları kullanıcıya yazdır
*/
#include <stdio.h>
#include <math.h>

int main(){

    int option = 0; 
    float sqLenght, triBase, triH, crcR = 0;
    int checker = 0;
    float areaSQ, areaTri, areaCrc = 0;

    printf("---(Choose Geometric Shape to Calculate)---\n");
    printf("1- Square\n2- Triangle\n3- Circle");
    printf("\n-------------------------------------------\n");
    scanf("%d", &option);

    while(checker == 0){
        if(option == 1 || option == 2 || option == 3 ){
            break;
        }else{
            checker = 0;
            printf("Error: Undefined shape. Try again..\n");
            scanf("%d", &option);
        }
    }

    switch (option)
    {
    case 1:
        printf("Enter the length of one side of the square:\n");
        scanf("%f", &sqLenght);
        areaSQ = sqLenght * sqLenght;
        printf("Area is: %.2f", areaSQ);
        break;
    case 2:
        printf("Enter the base length of the triangle:\n");
        scanf("%f", &triBase);
        printf("Enter the height of the triangle:\n");
        scanf("%f", &triH);
        areaTri = (triBase * triH) / 2;
        printf("Area is: %.2f", areaTri);
        break;
    case 3:
        printf("Enter the radius of circle:\n");
        scanf("%f", &crcR);
        areaCrc = M_PI * crcR * crcR;
        printf("Area is: %.2f", areaCrc);
        break;
    default:
        break;
    }


    return 0;
}
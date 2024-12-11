/*1'den 999'a kadar olan tam sayılar içeresinden basamaklarının küp değeri toplamı kendisine eşit olan c programı*/

#include <stdio.h>

int main(){

    int first, second, third;
    int i = 1;

    for(i = 1; i < 10; i++){
        if(i*i*i == i){
            printf("%d ", i);
        }
    }

    for(i; i < 100; i++){
        first = i / 10;
        second = i % 10;
        if(first*first*first + second*second*second == i){
            printf("%d ", i);
        }
    }

    for(i; i < 1000; i++){
        first = i / 100;
        second = (i/10) % 10;
        third = i % 10;
        if(first*first*first + second*second*second + third*third*third == i){
            printf("%d ", i);
        }
    }

    return 0;
}
/*
İç içe döngüler ile 1'den 10'a kadar çarpım tablosu oluştur.
*/

#include <stdio.h>

int main(){

    int counter; //
    int maxBorder = 9;
    int final1 = 1;
    int result = 1;
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(result = 1; result < 10; result++){ 
        for(counter = 0; counter <= maxBorder; counter++){
            final1 = result * numbers[counter];
            printf(" %d x %d = %d",result, numbers[counter], final1);
            if(counter < 9){
                printf(" |");
            }
            final1 = 1;
            if(counter == 9){
                printf("\n");
            }
        }
    }
}
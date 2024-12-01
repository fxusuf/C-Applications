/* Bir yere ziyarete gelenlerden en küçük yaşlardaki ziyaretçileri ve bunların sayısını hesaplayacak uygulama. */

#include <stdio.h>

int main(){

    int n;
    int total = 0;
    float average = 0;

    printf("How many guests visited here ?\n");
    scanf("%d", &n);

    int guests[n];

    for(int i = 1; i <= n; i++){
        printf("Enter age of %d. visiter: ", i);
        scanf("%d", &guests[i - 1]);
        total += guests[i - 1];
    }

    average = (float) total / n;

    printf("Average age of guests : %.2f\n", average);

    int littleGuests[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (guests[i] < average) {
            littleGuests[count] = guests[i];
            count++;
        }
    }

    printf("%d guests are below average.\n", count);
    printf("Ages below average: ");
    for(int x = 1; x <= count; x++){
        printf("%d", littleGuests[x -1]);
        if(x == count){
            break;
        }else{
            printf(", ");
        }
    }

    printf("\n");


    return 0;
}
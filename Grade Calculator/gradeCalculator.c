/*
Belirtilen sayıda öğrencinin notlarını alıp aşağıdaki işlemleri gerçekleştirir:

1- Notları kullanıcıdan alıp doğrulama:
Geçersiz not girişlerini (0-100 arası olmayan) engelle.
Negatif bir sayı girilirse uyarı verip programı sonlandır.

2- Ortalama hesapla:
Notların ortalamasını hesaplayıp yazdır.

3- En yüksek ve en düşük notu bul:
En yüksek ve en düşük notları ve bunların sırasını göster.
*/
#include <stdio.h>


int main(){

    int toplam = 0;
    int girilecekNot;

    printf("Kac adet not gireceksiniz ?: ");
    scanf("%d", &girilecekNot); 

    if(girilecekNot<0){
        printf("Not sayisi 0'dan buyuk olmalidir.");
        return 0;
    }

    int not[girilecekNot];

    int boyut = girilecekNot;

    for(int i=1; i<=boyut; i++){
        printf("%d. notu giriniz: ", i);
        scanf("%d", &not[i - 1]);
        if(not[i -1]>100 || not[i - 1] < 0){
            printf("Bir ogrencinin notu \"%d\" olamaz. Tekrar deneyin..", not[i - 1]);
            return 0;
        }
    }

    for(int a=0; a<boyut; a++){
        toplam += not[a];
    }

    float ortalama = (float) toplam / boyut;

    printf("Ogrencilerin not ortalamasi: %.2f", ortalama);


    int maxDeger = not[0];
    int konum = 0;

    for(int b=0; b<boyut; b++){
        if(not[b] >= maxDeger){
            maxDeger = not[b];
            konum = b + 1;
        }
    }

    printf("\nEn yuksek not %d. siradaki  \"%d\".", konum, maxDeger);

    int minDeger = not[0];
    int sira = 0;

    for(int c=0; c<boyut; c++){
        if(not[c] <= minDeger){
            minDeger = not[c];
            sira = c + 1;
        }
    }

    printf("\nEn dusuk not %d. siradaki \"%d\".", sira, minDeger);

    return 0;
}
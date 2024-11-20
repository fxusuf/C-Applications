/*
Klavyeden girilen kalma süresine göre otopark ücretini hesaplayıp ekrana yazan C programı
 1 saat =>3tl
 1-4 saat =>6tl
 4-6 saat =>8tl
 6-10 saat =>10tl
 10 saat ve fazlası => her saat için 1tl artacak(10 saat = 10tl, 11 saat = 11tl...)
*/
#include <stdio.h>

int main(){

    /*Değişkenleri oluştur*/
    float kalmaSuresi = 0; // Buçuklu saatleri girebilmek için float olarak tanımladık.
    int saat = 10;
    int toplam = 0;

    /*Kullanıcıdan kalma süresini al*/
    printf("Otoparkta kalma surenizi giriniz: ");
    scanf("%f", &kalmaSuresi);

    /*Kullanıcı doğru süreyi girene kadar soruyu tekrar sor.*/
    while(kalmaSuresi < 0){  //Süre negatifken döngü devam eder.
        printf("%.0f gecerli bir sure degildir.\n", kalmaSuresi);
        printf("Lutfen gecerli bir sure giriniz: ");
        scanf("%f", &kalmaSuresi);
    }

    /*Süreye göre ücreti yazdır.*/
    if(kalmaSuresi <= 1){
        printf("Borcunuz 3 tl'dir.");
    }
    if(kalmaSuresi > 1 && kalmaSuresi <= 4){
        printf("Borcunuz 6 tl'dir.");
    }
    if(kalmaSuresi > 4 && kalmaSuresi <=6){
        printf("Borcunuz 8 tl'dir.");
    }
    if(kalmaSuresi > 6 && kalmaSuresi < 10){
        printf("Borcunuz 10 tl'dir.");
    }

    /*10 saat ve üzeri için her saate 1 tl ek saat ücreti ekle.*/
    if(kalmaSuresi >= 10){
        for(saat = 10; saat <= kalmaSuresi; saat++){
            toplam += saat;
        }
        printf("Borcunuz %d tl'dir.", toplam);
    }

    return 0;
}
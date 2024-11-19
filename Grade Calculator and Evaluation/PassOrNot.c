/*
bir dersten alınan arasınav (vize), sonsınav (final), ve devam puanları girilip, 
ortalamayı hesapladıktan sonra ekrana dersten geçip kalındığını, geçtiyse ne ile geçtiğini yazan c programı.

AA / 90 - 100 / 4.0 / Başarılı
BA / 80 - 89 / 3.5 / Başarılı
BB / 75 - 79 / 3.0 / Başarılı
CB / 70 - 74 / 2.5 / Başarılı
CC / 60 - 69 / 2.0 / Başarılı
DC / 50 - 59 / 1.5 / Koşullu Başarılı - Başarısız
DD / 40 - 49 / 1.0 / Başarısız
FD / 30 - 39 / 0.5 / Başarısız
FF / 0 - 29 / 0.0 / Başarısız
   
ortalama (ara sınavın %40ı )+ (finalin %50si) + (devam notunun %10u)
*/

#include <stdio.h>

int main(){

    int vize, final, devamNotu;
    float ortalama;
    
    printf("Vize notunuzu giriniz: ");
    scanf("%d", &vize);
    while (vize < 0 || vize > 100){
        printf("Hata: Not 0-100 arasinda olmaidir.\n");
        printf("Vize notunuzu giriniz: ");
        scanf("%d", &vize);
    }  

    printf("Final notunuzu giriniz: ");
    scanf("%d", &final);
    while (final < 0|| final > 100){
        printf("Hata: Not 0-100 arasinda olmaidir.\n");
        printf("Final notunuzu giriniz: ");
        scanf("%d", &final);
    }  

    printf("Devam notunuzu giriniz: ");
    scanf("%d", &devamNotu);
    while (devamNotu < 0|| devamNotu > 100){
        printf("Hata: Not 0-100 arasinda olmaidir.\n");
        printf("Devam notunuzu giriniz: ");
        scanf("%d", &devamNotu);
    }  

    ortalama = (vize * 0.4) + (final * 0.5) + (devamNotu * 0.1);
    printf("Ogrencinin not ortalamasi: \"%.2f\"\n", ortalama);

    if(ortalama >= 90){
        printf("Ogrenci \"AA\" ile gecmistir.");
    }else if(ortalama >= 80){
        printf("Ogrenci \"BA\" ile gecmistir.");
    }else if(ortalama >= 75){
        printf("Ogrenci \"BB\" ile gecmistir.");
    }else if(ortalama >= 70){
        printf("Ogrenci \"CB\" ile gecmistir.");
    }else if(ortalama >= 60){
        printf("Ogrenci \"CC\" ile gecmistir.");
    }else if(ortalama >= 50){
        printf("Ogrenci \"DC\" ile kosullu basarili/basarisizdir..");
    }else if(ortalama >= 40){
        printf("Ogrenci \"DD\" ile kalmistir.");
    }else if(ortalama >= 30){
        printf("Ogrenci \"FD\" ile kalmistir.");
    }else{
        printf("Ogrenci \"FF\" ile kalmistir.");
    }

    return 0;
}
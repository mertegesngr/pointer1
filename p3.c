#include <stdio.h>
#include <stdlib.h>


void bolme(int *bolunen, int *bolen, int *kalan, int *bolum) {
    *bolum = 0; 
    while (*bolunen >= *bolen) {
        *bolunen -= *bolen; 
        (*bolum)++;        
    }
    *kalan = *bolunen; 
}

int main() {
    int sayi1, sayi2;
    int kalan, bolum; 

    printf("Sayı 1 gir: ");
    scanf("%d", &sayi1);
    printf("Sayı 2 gir: ");
    scanf("%d", &sayi2);

    if (sayi2 == 0) {
        printf("Hata: Bölen sıfır olamaz!\n");
        return 1; 
    }

    if (sayi1 < sayi2) {
        bolme(&sayi2, &sayi1, &kalan, &bolum);
    } else {
        bolme(&sayi1, &sayi2, &kalan, &bolum);
    }

    printf("Bölüm = %d\n", bolum);
    printf("Kalan = %d\n", kalan);

    return 0;
}

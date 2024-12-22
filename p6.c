#include <stdlib.h>
#include <stdio.h>
/*Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır. 
Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir,
 toplam ve fark sonuçları da main metodunda yazılacaktır.
*/
void toplamFark(int sayi1,int sayi2 ,int *toplam ,int *fark){


*toplam=sayi1+sayi2;
*fark=sayi1-sayi2;

}

int main (){

int sayi1, sayi2, toplam , fark ; 


printf("Sayı 1 gir: ");
    scanf("%d", &sayi1);
    printf("Sayı 2 gir: ");
    scanf("%d", &sayi2);
toplamFark(sayi1,sayi2 ,&toplam ,&fark);
printf("toplam = %d \n fark = %d ",toplam,fark) ;

    return 0 ; 
}
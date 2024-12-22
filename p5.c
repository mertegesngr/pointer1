#include <stdio.h>
#include <stdlib.h>

int sayiBul(int sayi1, int sayi2,int sayi3 ,int *enB,int *enK){

if(sayi1<sayi2<sayi3&&sayi1<sayi3<sayi2){
    *enK=sayi1 ; 
}

else if(sayi2<sayi3<sayi1&&sayi2<sayi1<sayi3){
    *enK=sayi2 ; 
}


else if(sayi3<sayi2<sayi1&&sayi3<sayi1<sayi2){
    *enK=sayi3 ; 
}

if(sayi1<sayi2<sayi3&&sayi2<sayi1<sayi3){
    *enB=sayi3 ; 
}

else if(sayi3<sayi1<sayi2&&sayi1<sayi3<sayi2){
    *enB=sayi2 ; 
}


else if(sayi3<sayi2<sayi1&&sayi2<sayi3<sayi1){
    *enB=sayi1 ; 
}
    return 0 ; 
}



int main (){


int  sayi1, sayi2,sayi3 ,enB,enK; 



printf("Sayı 1 gir: ");
    scanf("%d", &sayi1);
    printf("Sayı 2 gir: ");
    scanf("%d", &sayi2);
printf("Sayı 3 gir: ");
    scanf("%d", &sayi3);

sayiBul(sayi1,sayi2,sayi3 ,&enB,&enK); 

printf("en küçük sayı : %d\n",enK); 
printf("en büyük sayı : %d",enB);

    return 0 ; 
}


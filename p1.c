#include <stdio.h>
#include <stdlib.h>

int main (){

int *ptr=(int *) malloc(2*sizeof(int));

printf("sayi 1 gir : "); 
scanf("%d",&ptr[0]);
 printf("sayi 2 gir : "); 
scanf("%d",&ptr[1]);
ptr[0]+=ptr[1]; 
printf("sayıları toplamı : %d",ptr[0]);









    return 0 ; 
}
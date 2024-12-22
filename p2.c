#include <stdio.h>
#include<stdlib.h>

int yerDegistir (int *a,int *b){
int gecici ; 
gecici =*b; 
*b =*a ;
*a = gecici ;  

}

int main (){


int a , b ; 

int *p1=&a ; 
int *p2=&b ; 

printf("sayı 1 gir : "); 
scanf("%d",&a); 

printf("sayı 2 gir : "); 
scanf("%d",&b);
yerDegistir(p1,p2);
printf("sayı 1  : %d \n",a);
printf("sayı 2  : %d",b);

    return 0 ; 
}
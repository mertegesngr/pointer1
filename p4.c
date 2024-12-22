#include <stdio.h>
#include <stdlib.h>


int fakt(int a , int *b){
*b=1 ; 
for(int i =1 ; i<=a;i++){

    (*b)*=i ;
}




}

int main(){

int a , b ;


printf("faktöriyel bulmak istediğiniz sayi : "); 
scanf("%d",&a);

fakt(a,&b);

printf("sayınızın faktöriyeli : %d",b);






    return 0 ; 
}
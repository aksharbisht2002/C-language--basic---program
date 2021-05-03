#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x = 10 ;
    int a , b, c ;
    a = b= c =10;
   // 10 = a;

    int k=10;// illegal cnnot write a constant on left side

    printf("value of a,b,c is %d %d %d\n" ,a ,b , c);
    //comma operater
    printf("\n %d %d %d %d" , k , k++ , k , k--);


    printf("\n size of a is %d" , size(a));
    printf("\n size of t is %d" , size(t));
    printf("\n size of r is %d" , size(r));

    printf("\n size of integer is %d" , sizeof(int));
    printf("\n size of character is %d" , sizeof(char));
    printf("\n size of  is %d" , sizeof(a));
    return 0;
}

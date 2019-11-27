/*
Name   :  Factorial of a number.
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int fac = 1;
    for(int i=2; i<=a; i++){
        fac *= i;
    }
    printf("%d",fac);
    printf("\n");
    return 0;
}
/*
Name   :  Factorial of a number.(Recursive function)
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>

int fac(int n){
    if( n==2 ) return 2;
    return n*fac(n-1);
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fac(a));
    printf("\n");
    return 0;
}
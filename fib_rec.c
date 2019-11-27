/*
Name   :  Fibonacci series.(Recursive function)
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>

int fib(int n){
    if(n == 1) return 0;
    if( n==2 ) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
        printf("%d ",fib(i));
    printf("\n");
    return 0;
}
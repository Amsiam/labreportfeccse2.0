/*
Name   :  Fibonacci series.
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int f1 = 0 ,f2= 1;
    printf("0 1 ");
    for(int i=3; i<=a; i++){
        int temp = f1;
        f1 = f2;
        f2 = temp + f2;
        printf("%d ",f2);
    }
    printf("\n");
    return 0;
}
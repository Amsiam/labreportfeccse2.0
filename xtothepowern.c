/*
Name   :  Value of x^n.
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>
typedef long int li;
int main(){
    int x,n;
    li value=1;
    scanf("%d",&x);
    scanf("%d",&n);
    for(int i = 1;i<=n; i++)
        value *= x;
    printf("%li\n",value);
    return 0;
}
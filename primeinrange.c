/*
Name   :  Prime numbers in range of a,b.
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d",&a);
    scanf("%d",&b);
    int primes[b+1];
    for(i=2;i<b+1;i++)
        primes[i] = i;
    i=2;
    while((i*i)<=b){
        for(j=2;j<b;j++){
            if(primes[i]*j>b)
                break;
            else
                primes[primes[i]*j] = 0;
        }
        i++;
    }
    for(i=a;i<b+1;i++){
        if(primes[i])
            printf("%d ",primes[i]);
    }
    puts("");
    return 0;
}
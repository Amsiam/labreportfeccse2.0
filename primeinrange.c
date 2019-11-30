/*
Name   :  A number is prime or not.
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>
unsigned long int primes[10001];
void primenumbers(){
	int i,j,b = 10000;
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
}
int main(){
    int a;
    scanf("%d",&a);
    primenumbers();
    if(primes[a]){
        printf("%d is a prime number.",a);
    }else{
        printf("%d is not a prime number.",a);
    }
    puts("");
    return 0;
}

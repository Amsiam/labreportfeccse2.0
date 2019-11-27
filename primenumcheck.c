/*
Name   :  A number is prime or not.
Author :  Aslam Mahmud Siam.
Date   :  27/11/2019
*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int is_prime = 1;
    if(a != 2){
        for(int i=2;i*i<a;i++){
            if(a%i == 0){
                is_prime = 0;
                break;
            }
        }
    }else if(a<2){
        is_prime = 0;
    }
    if(is_prime){
        printf("%d is a prime number.",a);
    }else{
        printf("%d is not a prime number.",a);
    }
    puts("");
    return 0;
}
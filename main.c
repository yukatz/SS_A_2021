#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main(){
   int x,y;
    scanf(" %d",&x);
    scanf(" %d",&y);
        int first = x;
        int last = y;
   
        
        }
   
        printf("The Armstrong numbers are:");
        for (int i = first; i <= last; i++) {
            if(isArmstrong(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");
   
        printf("The Palindromes are:");
        for (int i = first; i <= last; i++) {
            if(isPalindrome(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");


        printf("The Prime numbers are:");
        for (int i = first; i <= last; i++) {
            if(isPrime(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");


        printf("The Strong numbers are:");
        for (int i = first; i <= last; i++) {
            if(isStrong(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");
        return 0;
}

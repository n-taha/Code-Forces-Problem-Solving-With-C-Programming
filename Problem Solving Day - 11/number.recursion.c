#include<stdio.h>
 void num(int i , int n){
    if(i > n){
        return 0;
    }

    printf("%d\n", i);
    num(i + 1 , n);
 }

 int main(){
    int n;
    scanf("%d", &n);

    num(1 , n);
 }
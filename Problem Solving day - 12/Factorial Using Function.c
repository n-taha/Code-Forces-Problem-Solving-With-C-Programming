#include<stdio.h>

  long long factorial(int n){

     if(n == 1){
        return 1;
     }

     return n * factorial(n - 1);

    }

  int main(){

   int n;
   scanf("%d", &n);

   int result = factorial(n);

   printf("%lld" , result);

  }
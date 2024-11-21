#include<stdio.h>


  void req(int n){
    if(n == 0 ){
        return 0;
    }

    printf("I love Recursion\n");
    req( n - 1);
  }

 int main(){
    
   int n;
   scanf("%d", &n);

   req(n);

 }
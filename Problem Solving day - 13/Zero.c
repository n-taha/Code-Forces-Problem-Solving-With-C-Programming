#include<stdio.h>

  void Zero(int a[] , int n){

   int count = 0;

   for(int i = 0 ; i < n ; i++){
     if(a[i] != 0){
       a[count++] = a[i];
     }
   }

  while(count < n){
    a[count++] = 0;
  }


  }

  int main(){

     int n;
     scanf("%d", &n);

     int a[n];

     for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
     }

     Zero(a , n);


     for(int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
     }


 return 0;


  }
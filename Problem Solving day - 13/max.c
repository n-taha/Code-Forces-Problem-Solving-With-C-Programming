#include<stdio.h>

 int FindMax(int a[] ,  int n){


    if(n == 1){
        return a[0];
    }

    int num = FindMax( a , n - 1);

    if(a[n-1] > num){
        return a[n-1];
    }else{
        return num;
    }


   }






 int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }


    int number = FindMax(a ,  n );

    printf("%d", number);

    return 0;
 }
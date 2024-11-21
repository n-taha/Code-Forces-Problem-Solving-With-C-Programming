#include<stdio.h>
  int main(){
    int n , x;
    scanf("%d", &n);
     int sum = 0;
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &x);

      sum = sum + x;

    }

    printf("%d", sum);
  }
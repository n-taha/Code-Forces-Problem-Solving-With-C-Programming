#include<stdio.h>
 int main(){
    int n;
    scanf("%d", &n);
    for(int t = 0 ; t < n ; t++){
      int x;
      scanf("%d", &x);

      for(int i = 1 ; i <= x ; i++){
        printf("%d ", i);
      }



      for(int i = x - 1 ; i >= 1 ; i--){
        printf("%d ", i);
      }
     printf("\n");

    }
 }

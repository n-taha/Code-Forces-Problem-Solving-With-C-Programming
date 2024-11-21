#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0 ; i < t ; i++){
        int x;
        scanf("%d", &x);

        if (x == 0)
        {
            printf("0");
        }
        

      while(x > 0){
        int digit = x % 10;
        printf("%d", digit);
         x /= 10;
      }

      printf("\n\n");
        
    }
}
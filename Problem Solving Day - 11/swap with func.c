#include<stdio.h>
 
 void func(int x , int y){
       
       int temp = x;
       x = y ;
       y = temp;
     
    printf("%d %d", x , y);

  }

  int main(){

      int x , y;
      scanf("%d %d", &x , &y);

     func(x , y);
     

  }
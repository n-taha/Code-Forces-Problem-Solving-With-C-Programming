#include<stdio.h>

 void digit(int num){

  if(num == 0){
    return;
  }

  int result = num % 10;
  printf("%d", result);

  digit(num / 10);

 }

 int main(){

  int n;
  scanf("%d", &n);

  for(int i = 0 ; i < n ; i++){
    int num;

    scanf("%d", &num);

    digit(num);
  }

 }
#include<stdio.h>
#include<string.h>
  int main(){
    char str[100001];
   
   scanf("%s", str);

   
    int sum = 0;
   for(int i = 0 ; str[i] != '\0'; i++){
       sum = sum + str[i] - '0';
   }

     printf("%d\n", sum);

    return 0;
  }
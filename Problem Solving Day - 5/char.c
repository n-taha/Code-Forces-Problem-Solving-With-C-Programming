#include<stdio.h>
int main(){
    char input;
    scanf("%c", &input);
   if(input >= 'a' && input <= 'z'){
          input = input - 32;
   }else{
    input = input + 32;
   }

   printf("%c", input);
   return 0;

}
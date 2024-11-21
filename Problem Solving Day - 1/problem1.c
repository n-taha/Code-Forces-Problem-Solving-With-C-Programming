#include<stdio.h>
int main(){
    char ch;
    scanf("%c" , &ch);

    if (ch >= 'a' && ch <= 'z')
    {
     

        printf("ALPHA\n");
        printf("IS SMALL\n");

    }
     else if(ch >= 'A' && ch <= 'Z'){
            printf("ALPHA\n");
            printf("IS CAPITAL\n");
        }
    else{
        printf("IS DIGIT");
    }
  
    return 0;
}
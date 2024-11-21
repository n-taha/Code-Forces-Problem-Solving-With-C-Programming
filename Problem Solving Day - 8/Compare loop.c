#include<stdio.h>
 int main(){

    char a[100];
    char b[100];

    scanf("%s %s" , a , b);

    for(int i = 0 ; i <= 100 ; i++){
        if(a[i] > b[i]){
            printf("%s", b);
            break;
        }

        else if(a[i] < b[i]){
            printf("%s" , a);
            break;
        }

        else if(a[i] == '\0' && b[i] == '\0'){
            printf("%s" , a);
            break;
        }
    }
 }
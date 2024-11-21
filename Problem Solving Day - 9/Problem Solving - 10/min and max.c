#include<stdio.h>
  int main(){
    long long x , y , z;

    scanf("%lld %lld %lld", &x ,&y ,&z);


    if(x <= y && x <= z){
        if(y <= z){
            printf("%lld %lld" , x , z);
        }else{
            printf("%lld %lld", x , y);
        }
    }

    else if(y <= x && y <= z){
        if(x <= z){
            printf("%lld %lld", y , z);
        }else{
            printf("%lld %lld", y , x);
        }
    }

    else{
        if(z <= x && z <= y){
            if(x <= y){
                printf("%lld %lld", z , y);
            }else{
                printf("%lld %lld", z , x);
            }
        }
    }


    return 0;
  }
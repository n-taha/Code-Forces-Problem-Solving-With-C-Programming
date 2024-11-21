    #include<stdio.h>
    int main(){
        long long n;
        scanf("%lld", &n);

        long long sum = 0;

        for(long long i = 1 ; i <= n ; i++){
           sum = sum + i;
            }
        printf("%lld", sum);
    }
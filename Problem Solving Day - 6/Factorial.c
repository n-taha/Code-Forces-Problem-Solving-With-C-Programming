#include<stdio.h>
 int main(){
  long long t;
  scanf("%lld", &t);

  for(long long cs = 0 ; cs < t ; cs++){
     long long  n;
  scanf("%lld", &n);

  long long sum = 1;

  for(long long i = 1 ; i <= n ; i++){
      sum = sum * i;
    }
    printf("%lld\n", sum);
  }
 }
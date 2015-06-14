#include<stdio.h>
#include<math.h>

int trailingZeroes(int n);

int main(){
   printf("%d\n", trailingZeroes(1808548329) );   
   return 0;
}

int trailingZeroes(int n){
  int five=0;
  while(n>=5){
    five+=n/5;
    n/=5;
  }
  return five;
}



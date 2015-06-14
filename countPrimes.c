#include<stdio.h>
#include<stdlib.h>
int countPrimes(int n);

int main(){
  printf("%d\n",countPrimes(10000))  ;
}

int countPrimes(int n) {
  int IsPrime(int k){
       if(k==2) return 1;
       int i;
       for(i=2;i*i<k;i++){
          if (k%i==0)  return 0;
       }
       return 1;
   }

   if(n==0||n==1||n==2) return 0;
   int *valid=(int*)malloc(n*sizeof(int));
   int i,j;
   for(i=0;i<n;i++) valid[i]=1;
   if(n==3) return 1;
   int count=1;
   for(i=3;i<n;i+=2){
     if (!valid[i]) continue;
     if(IsPrime(i))  count++;
     j=i+i;
     while(j<n){
         valid[j]=0;
         j+=i;
     }
   }
   return count;
}

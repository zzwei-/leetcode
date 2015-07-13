#include<stdio.h>
#include<stdlib.h>

int majorityElement(int *nums, int numsSize);
int cmp(const void *a,const void *b){
   return *(int *)a-*(int *)b;
}

int main(){
   int a[4]={3,3};
   printf("%d\n",majorityElement(a,2));
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int i;
    int n=numsSize/2+1;
    int pre=nums[0];
    int j=1;
    if(numsSize==1) return nums[0];
    for(i=1;i<numsSize;i++){
        if(nums[i]==pre) j++;
        else {
            pre=nums[i];
            j=1;
        }
        if(j==n) return pre;
    }
}

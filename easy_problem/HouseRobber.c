int rob(int* nums, int numsSize) {
    
    int max(int a,int b){
        return a>b?a:b;
    }
    
    if (numsSize==0) return 0;
    if (numsSize==1) return nums[0];
    if (numsSize==2) return max(nums[0],nums[1]);
    
    int a[numsSize];
    a[numsSize-1]=nums[numsSize-1];
    a[numsSize-2]=max(nums[numsSize-1],nums[numsSize-2]);
    int i;
    for (i=numsSize-3;i>=0;i--){
        a[i]=max( nums[i]+a[i+2], a[i+1]);
    }
    return a[0];
}
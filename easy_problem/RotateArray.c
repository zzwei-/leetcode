/*
  time: O(n)
  memory: O(k%n)
*/
void rotate(int nums[], int n, int k) {
    
    void reverse(int a[], int left, int right){
        int temp,i;
        for(i=left;i<=(left+right)/2;i++){
            temp=a[i];
            a[i]=a[left+right-i];
            a[left+right-i]=temp;
        }
    } //reverse()
    k%=n;
    reverse(nums,n-k,n-1);  //reverse the last k
    reverse(nums,0,n-k-1);  //reverse the first n-k
    reverse(nums,0,n-1);  //reverse all
}
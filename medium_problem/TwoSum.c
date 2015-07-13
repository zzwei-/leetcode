int *twoSum(int numbers[], int n, int target) {
    int b[n];
    int i;
    for(i=0;i<n;i++) b[i]=numbers[i];
    
    void merge(int a[], int low, int mid, int high){
        int i=low,j=mid+1;
        int length=high-low+1;
        int c[length];
        int k=0;
        while(i<=mid&&j<=high){
            if(a[i]<=a[j]) c[k++]=a[i++];
            else c[k++]=a[j++];
        }
        while (i<=mid) c[k++]=a[i++];
        while (j<=high) c[k++]=a[j++];
        for(k=low;k<=high;k++) a[k]=c[k-low];
    }
    
    void merge_sort(int a[], int low, int high){
        if(low>=high) return;
        int mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    
    merge_sort(b,0,n-1);
    
    int index[2];
    int index1=0,index2=n-1;
    int sum;
    while(index1<index2){
        sum=b[index1]+b[index2];
            if( sum == target )
            {
                int i;
                for(i=0;i<n;i++) if(numbers[i]==b[index1]) {index1=i;break;}
                for(i=0;i<n;i++) if(numbers[i]==b[index2]&&i!=index1) {index2=i;break;}
                int temp;
                if(index1>index2) {temp=index1;index1=index2;index2=temp;}
                index[0]=index1+1;
                index[1]=index2+1;
                return index;
            }
            else if(sum<target) index1++;
                 else index2--;
    }
    return 0;   
}
int removeDuplicates(int A[], int n) {
    int i,last=0;
    if (n==0) return 0;
    for(i=1;i<n;i++)
        if (A[last]!=A[i])
           A[++last]=A[i];
    return (last+1);
}
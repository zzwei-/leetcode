bool isHappy(int n) {
    
    int cal(n){
        int res=0;
        while(n){
            res+=(n%10)*(n%10);
            n/=10;
        }
        return res;
    }
    
    int a[1200];
    int i;
    for(i=0;i<1200;i++) a[i]=0;
    while(n!=1){
        n=cal(n);
        if(a[n]) return 0;
        a[n]=1;
    }
    return 1;
}
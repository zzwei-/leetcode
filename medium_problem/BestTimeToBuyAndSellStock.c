int maxProfit(int prices[], int n){
    int i;
    for(i=n-1;i>0;i--)  prices[i]-=(prices[i-1]);
    prices[0]=0;
    
    int max(int a, int b){
        return a>b? a:b;
    }
    
    int b[n];
    b[0]=prices[0];
    int m=b[0];
    for(i=1;i<n;i++)
    {
        b[i]=max(prices[i],b[i-1]+prices[i]);
        if (m<b[i]) m=b[i];
    }
    
    return m;
    
}
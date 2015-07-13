int canCompleteCircuit(int gas[], int cost[], int n) {
    int i,sum;
    int pos=0;
    int k;
    for(i=0;i<n;){
        k=n;
        sum=0;
        while(k){
            sum+=gas[i%n]-cost[i%n];
            if(sum<0){
                pos=++i;
                sum=0;
                break;
            }
            else i++;
            k--;
        }
        if (k==0) return (pos%n);
    }
    return -1;
}
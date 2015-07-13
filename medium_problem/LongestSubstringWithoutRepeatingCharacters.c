int lengthOfLongestSubstring(char *s) {
    
    int i;
    int a[128];
    
    char *p,*q;
    int length,max=0;
    for(p=s;(*p)!='\0';p++)
    {
        for(i=0;i<128;i++) a[i]=0;
        a[(*p)]=1;
        length=1;
        q=p+1;
        while((*q)!='\0'&&!a[(*q)])
        {
            length++;        
            a[(*q)]=1;
            q++;
        }
        if (length>max) max=length;
    }
    return max;
}
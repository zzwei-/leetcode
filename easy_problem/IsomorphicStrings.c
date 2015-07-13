bool isIsomorphic(char* s, char* t) {
    int a[200];
    int i;
    for(i=0;i<200;i++) a[i]=-1;
    while(*s!='\0'){
        if(a[*s]==-1){  //*s didn't ever appear.
            a[*s]=*t;
        }
        else{
            if(a[*s]!=*t) return 0;  //*s appeared before.
        }
        s++;
        t++;
    }
    int j;
    for(i=0;i<200;i++)
      for(j=i+1;j<200;j++)
        if ( (a[i]!=-1) && (a[i]==a[j]) )
          return 0;
    return 1;
}
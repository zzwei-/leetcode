int hammingWeight(uint32_t n) {
    int num=0;
    while(n)
    {
       num+=(n%2);
       n>>=1;
    }
    return num;
}
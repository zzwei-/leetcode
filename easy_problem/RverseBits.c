uint32_t reverseBits(uint32_t n) {
    uint32_t res=0;
    int i=32;
    while(i){
        i--;
        res+=((n%2)<<i);
        n>>=1;
    }
    return res;
}
int reverse(int x) {
    int a[32];
    int sign=1;
    if (x==0)  return 0;
    if (x<0) {
        sign=-1;
        x=-x;
    }
    int i,j;
    for(i=0;x&&(i<32);i++){
        a[i]=x%10;
        x/=10;
    }
    x=a[0];
    for(j=1;j<i;j++){
        //运算前先判是否溢出
        if (x>INT_MAX/10)  return 0;
        x*=10;
        //运算前先判是否溢出
        if (x>INT_MAX-a[j])  return 0;
        x+=a[j];
    }
    //如果转换后的数是-2147483648(-2^31),会被判断为溢出
    //但此时输入必须为-8463847412,这本身就是一个溢出数，所以不存在这种输入情况
    return sign*x;
}
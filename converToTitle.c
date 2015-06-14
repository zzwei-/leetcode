#include<stdio.h>

char * convertToTitle(int n);

int main(){
    char *p;
    p=convertToTitle(52);
    printf("%s\n",p);
    return 0;
}

char* convertToTitle(int n) {
    char s[1000];
    int i=0;
    int print(int n){
        if (n>26){
            print((n-1)/26);
        }
        s[i++]=(n-1)%26+'A';
    }
    print(n);
    s[i]='\0';
    return s;
}

#include<stdio.h>

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H);

int main(){
   computeArea(-2,-2,2,2,3,3,4,4);
   return 0;
}

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int cover;
    if(A>=G||C<=E) cover= 0;
    if(D<=F||B>=H) cover= 0;
    int X,Y;
    if (B<=F){  //B<=F
        if(D<=H) X=D-F;
        else X=H-F;
    }
    else if(B<=H){  //B>F&&B<=H
        if (D<=H) X=D-B;
        else X=H-B;
    }
    if(A<=E){  //A<=E
         if(C<=G)  Y=C-E;
         else Y=G-E;
    }
    else if(A<=G){ //A>E&&A<=G
         if(C<=G)  Y=C-A;
         else Y=G-A;
    }
     cover=X*Y;
    int s1=(D-B)*(C-A);
    int s2=(H-F)*(G-E);
    printf("%d\n",s1); 
    printf("%d\n",s2);
    printf("%d\n",cover); 
    return s1+s2-cover;
}

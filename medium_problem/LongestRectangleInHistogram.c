int largestRectangleArea(int *height, int heightSize){
    
    int max(int a, int b, int c){
    if (a>b) return a>c?a:c;
    else return b>c?b:c;  
    }  

    int find_min(int *height,int heightSize){
    int i;
    int j=(heightSize-1)/2;
    int min=height[j];
    for (i=0;i<heightSize;i++){
        if (height[i]<min){
            min=height[i];
            j=i;
        }
    }
    return j;
   }
    
    if (heightSize<=1)  return *height;
    int min=find_min(height,heightSize);
    if (min==0) {
        int a=height[min]*heightSize;
        int b=largestRectangleArea(height+1,heightSize-1);
        return a>b?a:b;
    }
    else if (min==(heightSize-1)){
        int a=height[min]*heightSize;
        int b=largestRectangleArea(height,heightSize-1);
        return a>b?a:b;
    }
    else{
        int a=height[min]*heightSize;
        int b=largestRectangleArea(height,min);
        int c=largestRectangleArea(height+min+1,heightSize-1-min);
        return max(a,b,c);
    }   
    
}
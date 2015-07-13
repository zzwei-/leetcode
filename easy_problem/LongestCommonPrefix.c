char *longestCommonPrefix(char** strs, int strsSize){
   if (strs[0]==NULL)  {
       return "";
   }
   int i,j;
   char c;
   for(i=0;strs[0][i]!='\0';i++){
      c=strs[0][i];
      printf("%c\n",c);
      for(j=1;j<strsSize;j++){
        if (strs[j][i] == '\0' || strs[j][i] != c ){
             goto end;
        }
      }
   }
   end:    strs[0][i]='\0';
   return strs[0];
}
int compareVersion(char* version1, char* version2) {
    int v1=0,v2=0;
    int i=0,j=0;
    while(1){

      while(version1[i]!='\0' &&version1[i]!='.') {
          v1=v1*10+version1[i]-'0';
          i++;
      }
      while(version2[j]!='\0' &&version2[j]!='.') {
          v2=v2*10+version2[j]-'0';
          j++;
      }
      if (v1>v2) return 1;
      if(v1<v2) return -1;
        
      if(version1[i]=='.') i++;
      if(version2[j]=='.') j++;
      if(version1[i]=='\0' && version2[j]=='\0') return 0;
      v1=v2=0;
    }
}
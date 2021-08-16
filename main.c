#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int swap(char **str,int i,int j){
   // printf("----%s----%s\n",str[i],str[j]);
    char *temp=str[i];
    str[i]=str[j];
    str[j]=temp;
   // printf("----%s----%s\n",str[i],str[j]);
    return 0;
}
int permute(char **s,int l,int r,int n){
     if (l == r){
         for(int j=0;j<n;j++){
             printf("%s ",s[j]);
         }
         printf("\n");
     }
     else{
        for (int i = l; i <= r; i++)
        { 
          if(i!=l && (strcmp(s[l], s[i]))==0)
          { // printf("--%s---%s\n ",s[l], s[i]);
            continue;
          }
         // printf("Hi----\n");

           swap(s, l,i);
            permute(s, l+1, r,n);
        }
     }
    return 0;
}
int next_permutation(int n, char **s)
{
    permute(s,0,n-1,n);
   return 0;
}
int main(){
  char **arr;
  int n,i;
  scanf("%d",&n);
  arr = calloc(n, sizeof(char*));
  for(i=0;i<n;i++){
    arr[i] = calloc(11, sizeof(char));
    scanf("%s",arr[i]);
  }
  next_permutation(n,arr);
}
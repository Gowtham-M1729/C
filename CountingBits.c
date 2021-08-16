#include<stdio.h>
#include<stdlib.h>
int* countBits(int num, int* returnSize){
    int* output = (int*)calloc(1, (1 + num) * sizeof(int));
    *returnSize = num + 1;
    int lastMax = 1;
    for(int i = 1; i < num + 1; i++){
        if(i == 2*lastMax){
            lastMax = i;
            output[i] = 1;
        }else{
            output[i] = output[i-lastMax] + 1;
        }
    }
    return output;
}
int main(){
  int num,returnSize=0;
  scanf("%d",&num);
  printf("%d\n",num>>1);
  int *arr=countBits(num,&returnSize);
  for(int i=0;i<returnSize;i++){
    printf("%d ",arr[i]);
  }
  while(getchar()!='w'){
    //continue;
  }
}
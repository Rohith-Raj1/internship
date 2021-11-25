#include <stdio.h>

int main(){
  int a[10],size,i,j,k,count = 0;
  printf("Enter the size of the array ");
  scanf("%d",&size);
  printf("Enter the key to be searched ");
  scanf("%d",&k);
  printf("Enter the elements of the array ");
  for (i=0;i<size;i++){
    scanf("%d",&a[i]);
  }
  for (i=0;i<size;i++){
    if (a[i] == k){
    count++;}
  }
  printf("%d",count);
  return 0;
}

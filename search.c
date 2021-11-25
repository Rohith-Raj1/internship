#include <stdio.h>

int main(){
  int a[7] = {5,3,2,4,9,8,1},k=10,i;
  for(i=0;i<7;i++){
    if (a[i] == k){
      printf("%d",i);
      break;
    }
  }

}

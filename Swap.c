#include <stdio.h>

int swap(int *n1,int *n2){
  int temp;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
  printf(n1,n2);
}
int main(){
  int n1=10;
  int n2=20;
  printf("Before swapping: ",n1,n2);
  swap(&n1,&n2);
  printf("After swapping: ",n1,n2);
  return 0;
}

   

  

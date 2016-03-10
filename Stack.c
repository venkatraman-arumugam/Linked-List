#include<stdio.h>
#include<stdio.h>
int t = -1;
int temp[10];
void push(int val){
  if(t>=10){
    printf("Stack out memory");  
  }
  else{
    t++;
    temp[t]=val;
  }
}

int pop(){
  int var;
  if(t==-1){
    printf("Not elements to Pop");
  }
  else{
    var = temp[t];
    t--;
  }
  return var;
}

int main(){
  push(1);
  printf("%d\n",pop() );
  push(2);
  push(3);
  push(4);
  printf("%d\n",pop() );
  printf("%d\n",pop() );
  printf("%d\n",pop() );
  printf("%d\n",pop() );
}

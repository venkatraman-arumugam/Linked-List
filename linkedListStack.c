#include<stdio.h>
#include<stdlib.h>
struct node{
  int value;
  struct node *next;
}*head=NULL;

void push(int val){
  struct node *p;
  struct node *temp = head;
  p = (struct node *)malloc(sizeof(struct node));
  p->value = val;
  p->next = NULL;
  if(head==NULL){
    head=p;

  }
  else{
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next = p;
  }
}

void pop(){
  struct node *temp = head;
  while(temp->next->next!=NULL){
    temp = temp->next;
  }
  printf("Pop : %d\n",temp->next->value );
  temp->next=NULL;
}

void display(){
  struct node *temp = head;
  while(temp!=NULL){
    printf("%d\n",temp->value );
    temp=temp->next;
  }
}

int main(){
  push(1);
  push(2);
  push(3);
  push(4);
  display();
  pop();
  display();
  pop();
  display();

}

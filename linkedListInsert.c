#include<stdio.h>
#include<stdlib.h>
struct node {
  int value;
  struct node *next;
}*head=NULL;

void insert(int val){
  struct node *temp = head;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->value = val;
  temp->next = NULL;
  if(head==NULL){
    head = temp;
  }
  else{
    struct node *p = head;
    while(p->next!=NULL){
      p=p->next;
    }
    p->next=temp;
  }
}
void display(){
  struct node *temp = head;
  while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
  }
}
int main(){
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  display();
}

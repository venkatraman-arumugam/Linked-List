#include<stdio.h>
#include<stdlib.h>
struct node{
  int value;
  struct node *next;
}*head=NULL;

void insertAtTheBegining(int val){
  struct node *temp;
  struct node *p;
  p=(struct node *)malloc(sizeof(struct node));
  temp=(struct node *)malloc(sizeof(struct node));
  p->value=val;
  p->next=NULL;
  //printf("Hi");
  //temp = head;
  if(head==NULL){
    temp->next=p;
    head = temp;
    printf("Hi");
  }
  else{
    temp = head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp=p;
    head = temp;
    printf("Hii");
  }
  printf("%d\n",head->next->value);
}

void display(){
  //struct node *p = head;
  //p=(struct node *)malloc(sizeof(struct node));
  while(head->next!=NULL){

    printf("%d\n",head->next->value );
    printf("2");
    head=head->next;

  }
}

int main(){
  insertAtTheBegining(1);
  insertAtTheBegining(2);
  insertAtTheBegining(3);
  insertAtTheBegining(4);
  display();
}

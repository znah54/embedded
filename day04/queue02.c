#include<stdio.h>
#include<stdlib.h>
#define QSIZE 10

typedef struct{
   int front;
   int rear;
   char queue[QSIZE];
 }queue;

queue* create();
void enqueue();
char dequeue();
int isFull();
int isEmpty();
void main(){
  queue* q = create();
  enqueue(q,'A');
 }
 queue* create()
 {
   queue *nqueue = (queue*)malloc(sizeof(queue));
   if(nqueue == NULL) exit(1);
     nqueue->front = -1;
     nqueue->rear = -1;
     return nqueue;
   //동적할당
 }
 void printQueue(queue* pq)
{
   for(int i = pq-> front+1; i<=pq->rear;i++){
     printf("%c\n",pq->queue[i]);
     }
   printf("\n");
 }

 int  isEmpty(queue qa){
   if(qa->rear == pa -> front){
     printf("Empty\n");
     return 1;
     }
   else return 0;
 }
 int  isFull(queue qa){
   if(qa->rear == QSIZE-1){
     printf("FULL\n");
     return 1;
   }
   else return 0;
 }
 void enqueue(queue* qa, char q)
 {
   if(isFull()){
     qa->queue[++qa->rear]=q;
     return;
   }
 }
 char dequeue(queue* qa)
 {
   if(isEmpty()) return;
   return qa->queue[++qa->front];
 }


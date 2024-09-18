#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size, f, r, *arr;
};

int isFull(struct Queue *q){
    return q->size-1 == q->r;
}
int isEmpty(struct Queue *q){
    return q->f == q->r;
}
void enque(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r ++;//increse rare
        q->arr[q->r] = val;//put val in array 
    }
}
int dequeue(struct Queue *q){
    int a=-1;
    if (q->f=q->r)
    {
        printf("No element to deq\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

void display (struct Queue *q){
    int i = 0;
    // int a= q->f;
    while (i<=q->r)
    {
        printf("%d\n", q->arr[i]);
        i++;
    }
}


int main(){
    struct Queue q;
    q.size = 100;
    q.f = q.r=-1;
    q.arr = (int *)malloc (sizeof(int )*q.size);
    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    enque(&q,12);
    display(&q);


    return 0;
} 

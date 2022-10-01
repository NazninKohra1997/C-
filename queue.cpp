#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q){
    cout<<"Enter size:"<<"\n";
    cin>>q->size;
    q->front=-1;
    q->rear=-1;
    q->Q=new int[q->size];
}

void inqueue(struct Queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"Queue overflow"<<"\n";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct Queue *q){
    int x=-1;
    if(q->front==q->rear){
        cout<<"Queue underflow"<<"\n";
    }
    else{
        q->front++;
        x=q->Q[q->front];

    }
     return x;

}

void display(struct Queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<"\n";
    }
}
int main(){
    struct Queue q;

    create(&q);

    inqueue(&q,10);
    inqueue(&q,20);
    inqueue(&q,30);
    inqueue(&q,40);

    dequeue(&q);
   dequeue(&q);
    //dequeue(&q);

    display(q);

    return 0;

}

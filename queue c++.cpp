#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue(){
        int size;
        int front;
        int rear;
        Q=new int[size];
    }

    Queue(int sz){
        sz=size;
        int front;
        int rear;
        Q=new int[size];
    }

    ~Queue(){
        delete []Q;
    }

    void create();
    void inqueue(int x);
    int dequeue();
    void display();
};

void Queue::create(){
    cout<<"Enter size"<<"\n";
    cin>>size;
    front=-1;
    rear=-1;
    Q=new int[size];
}

void Queue::inqueue(int x){
   if(rear==size-1){
    cout<<"queue overflow"<<"\n";
   }
   else{
    rear++;
    Q[rear]=x;
   }
}

int Queue::dequeue(){
    int x=-1;
    if(front==rear){
        cout<<"queue underflow"<<"\n";
    }
    else{
        front++;
        Q[front]=x;
        }
        return x;
}

void Queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<"\n";
    }
}

int main(){
    Queue q;
    q.create();

    q.inqueue(4);
    q.inqueue(5);
    q.inqueue(6);

    q.dequeue();
    //q.dequeue();

    q.display();

    return 0;
}

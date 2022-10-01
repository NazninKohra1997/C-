#include<bits/stdc++.h>
using namespace std;

class circular{
private:
    int size;
    int rear;
    int front;
    int *Q;
public:
    circular(){
        int size;
        int rear;
        int front;
        Q=new int[size];
    }

    circular(int sz){
        sz=size;
        int rear;
        int front;
        Q=new int[size];
    }

    ~circular(){
        delete []Q;
    }

    void create();
    void inqueue(int x);
    int dequeue();
    void display();
};

void circular::create(){
    size=7;
    front=0;
    rear=0;
    Q=new int[size];
}

void circular::inqueue(int x){
    if((rear+1%size)==front){
        cout<<"queue overflow"<<"\n";
    }
    else{
        rear=rear+1%size;
        Q[rear]=x;
    }
}

int circular::dequeue(){
    int x=-1;
    if(front==rear){
        cout<<"queue underflow"<<"\n";
    }
    else{
        front=front+1%size;
        Q[front]=x;
    }
    return x;
}

void circular::display(){
    int i=front+1;
    do{
        cout<<Q[i]<<"\n";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout<<"\n";
}

int main(){
     circular c;
     c.create();

     c.inqueue(5);
     c.inqueue(4);
     c.inqueue(3);
     c.inqueue(30);
 c.inqueue(40);
 c.inqueue(50);
 c.inqueue(60);


     c.dequeue();
     c.display();

     return 0;
}

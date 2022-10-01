#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int *A;
    int size;
    int top;
public:
    Stack(){
        int size;
        int top;
       A=new int[size];
    }

    Stack(int sz){
        sz=size;
        int top;
      A=new int[size];
    }

    ~Stack(){
        delete []A;
    }

    void create();
    void push(int x);
    int pop();
    void display();
};

void Stack::create(){

    cout<<"Enter size:"<<" ";
    cin>>size;
    top=-1;
}

void Stack::push(int x){

    if(top==size-1){
        cout<<"stack overflow"<<"\n";
    }
    else{
        top++;
        A[top]=x;
    }
}

int Stack::pop(){
    int x=-1;
    if(top==-1){
        cout<<"stack underflow"<<"\n";
    }
    else{
        top--;
    }
    return x;
}

void Stack::display(){
    for(int i=top;i>=0;i--){
        cout<<A[i]<<"\n";
    }
}

int main(){
     Stack s;
     s.create();

     s.push(5);
     s.push(4);
     s.push(3);
     s.push(2);

     s.pop();
     s.pop();

     s.display();

     return 0;
}


#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int *A;
    int size;
    int top;
};

void create(struct Stack *s){
     cout<<"Size:"<<"\n";
     cin>>s->size;

     s->top=-1;
     s->A=new int[s->size];
}

int isEmpty(struct Stack s){
    if(s.top==-1){
        cout<<"stack is empty"<<"\n";
    }
    else{
        return 0;
    }
}

int isFull(struct Stack s){
    if(s.top==s.size-1){
        cout<<"stack is full"<<"\n";
    }
    else{
        return 0;
    }
}

void push(struct Stack *s,int x){
    if(s->top==s->size-1){
        cout<<"Stack overflow"<<"\n";
    }
    else{
        s->top++;
        s->A[s->top]=x;
    }
}

int pop(struct Stack *s){
    int x=-1;
    if(s->top==-1){
        cout<<"stack underflow"<<"\n";
    }
    else{
        s->top--;
    }
    return x;
}

void display(struct Stack s){
    for(int i=s.top;i>=0;i--){
        cout<<s.A[i]<<"\n";
    }
}

int main(){
    struct Stack s;
    create(&s);
    push(&s,5);
    push(&s,4);
    push(&s,3);
    push(&s,2);

    pop(&s);
     pop(&s);
      pop(&s);
       pop(&s);

    display(s);

    isEmpty(s);
    isFull(s);

    return 0;
}

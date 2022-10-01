#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int *A;
    int size;
    int top;
};

void create(struct Stack *s){
    cout<<"Enter size:"<<"\n";
    cin>>s->size;

    s->A=new int[s->size];
    s->top=-1;
}

void display(struct Stack s){
    for(int i=s.top;i>=0;i--){
        cout<<s.A[i]<<"\n";
    }
}

void push(struct Stack *s,int x){
    if(s->top==s->size-1){
        cout<<"stack overflow"<<"\n";
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
        x=s->A[s->top];
        return x;
    }

}

int main(){
    struct Stack s;
    create(&s);
    push(&s,3);
    push(&s,4);
    push(&s,5);
    push(&s,6);
    push(&s,7);







    display(s);
}

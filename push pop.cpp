#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int *S;
    int size;
    int top;
};

void create(struct Stack *st){
    cout<<"Enter the size"<<"\n";
    cin>>st->size;
    st->top=-1;
    st->S=new int[st->size];
}

void push(struct Stack *st,int x){
    if(st->top==st->size-1){
        cout<<"stack overflow\n";
    }
    else{
        st->top++;
        st->S[st->top]=x;

    }
}

int pop(struct Stack *st){
     int x=-1;
     if(st->top==-1){
        cout<<"Stack underflow"<<"\n";
     }

     else{
        st->top--;
     }
     return x;
}

void display(struct Stack st){
    for(int i=st.top;i>=0;i--){
        cout<<st.S[i];
        cout<<" ";
    }
}

int main(){
    struct Stack st;
    create(&st);

    push(&st,3);
    push(&st,4);
    push(&st,5);
    push(&st,6);

    pop(&st);
    pop(&st);



    display(st);

    return 0;
}

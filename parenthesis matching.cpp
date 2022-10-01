#include<bits/stdc++.h>
using namespace std;

class parenthesis{
private:
    int size;
    char *A;
    char top;

public:
    parenthesis(){
        int size;
        char top;
        A=new char[size];
    }

    parenthesis(int sz){
        sz=size;
        char top;
        A=new char[size];
    }

    ~parenthesis(){
        delete []A;
    }

    void create();
    void display();
    void push(char x);
    int pop();
} ;

void parenthesis::create(){
    cout<<"Enter size:"<<"\n";
    cin>>size;
    top=')';
    A=new char[size];

}

void parenthesis::push(char c){
    if(top=='\0'){
        cout<<"stack overflow"<<"\n";
    }
    else{
        top++;
       c=top;
    }
}

int parenthesis::pop(){
    char x='(';
    if(top==')'){
        cout<<"stack underflow"<<"\n";
    }
    else{
        top--;
        }

     return x;

}





void parenthesis::display(){
    for(int i=top;i>=0;i--){
        cout<<A[i]<<"\n";
    }
}

int main(){
    parenthesis p;

    p.create();



   char open;
    char close;
    int o;
    int c;
    cout<<"number of open: ";
    cin>>o;

    cout<<"number of close: ";
    cin>>c;

for(int i=0;i<o;i++){
        cout<<"open parenthesis: ";
        cin>>open;
       p.push(open);
}
          for(int j=0;j<c;j++){
            cout<<"close parenthesis: ";
            cin>>close;
           p.pop();
}

p.display();
return 0;


}

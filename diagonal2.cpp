#include<bits/stdc++.h>
using namespace std;

class dia{
    private:
        int n;
        int *A;

    public:
        dia(){
           n=5;
            A=new int[5];
        }
        ~dia(){
            delete []A;
        }

        void Set(int i,int j,int x);
        int Get(int i,int j);
        void display();
};

void dia::Set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}

int dia::Get(int i,int j){
    if(i==j){
        return A[i-1];
    }
    else return 0;
}

void dia::display(){
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        if(i==j)  cout<<A[i-1]<<" ";
            else  cout<<0<<" ";


       }
        cout<<"\n";
    }
}

int main(){
    dia d;


    d.Set(1,1,3);
    d.Set(2,2,7);
    d.Set(3,3,4);
    d.Set(4,4,9);
    d.Set(5,5,25);

    d.display();

    return 0;
}

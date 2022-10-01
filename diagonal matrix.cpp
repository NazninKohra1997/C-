#include<bits/stdc++.h>
using namespace std;

struct diagonal{
    int A[5];
    int n; //size
};

void Set(struct diagonal *dia,int i,int j,int x){
    if(i==j){
        dia->A[i-1]=x;
    }
}

int Get(struct diagonal dia,int i,int j){
    if(i==j){
        return dia.A[i-1];
    }
    else return 0;
}

void display(struct diagonal dia){

    for(int i=1;i<=dia.n;i++){
        for(int j=1;j<=dia.n;j++){
            if(i==j) cout<<dia.A[i-1]<<" ";
            else cout<<0<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    struct diagonal dia;
    dia.n=5;
    Set(&dia,1,1,3);
    Set(&dia,2,2,7);
    Set(&dia,3,3,4);
    Set(&dia,4,4,9);
    Set(&dia,5,5,25);
    display(dia);

    return 0;
}

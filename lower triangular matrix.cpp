#include<bits/stdc++.h>
using namespace std;


struct matrix{
    int *A;
    int n;
};

void Set(struct matrix *Ma,int i,int j,int x){
    if(i>=j){
        Ma->A[i*(i-1)/2+j-1]=x;
    }
}

int  Get(struct matrix Ma,int i,int j){
    if(i>=j){
        return Ma.A[i*(i-1)/2+j-1];
    }
    else {
        return 0;
    }
}


void display(struct matrix Ma){
    for(int i=1;i<=Ma.n;i++){
        for(int j=1;j<=Ma.n;j++){
            if(i>=j){
                cout<<Ma.A[i*(i-1)/2+j-1]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }

}
int main(){
    struct matrix Ma;
    int x,i,j;
    cin>>Ma.n;
    Ma.A=new int[Ma.n*(Ma.n+1)/2];
    for( i=1;i<=Ma.n;i++){
        for(j=1;j<=Ma.n;j++){
            cin>>x;
            Set(&Ma,i,j,x);
        }
    }

    cout<<"\n"<<"\n";
    display(Ma);

    return 0;
}

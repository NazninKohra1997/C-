#include<bits/stdc++.h>
using namespace std;

struct matrix{
     int *A;
     int n;
};

void Set(struct matrix *M,int i,int j,int x){
    if(j>=i){
        M->A[j*(j-1)/2+(i-1)]=x;
    }
}

int Get(struct matrix M,int i,int j){
    if(j>=i){
        return M.A[j*(j-1)/2+(i-1)];
    }

    else {
        return 0;
    }
}

void display(struct matrix M){
    int i,j;
    for(i=1;i<=M.n;i++){
        for(j=1;j<=M.n;j++){
            if(j>=i){
                cout<<M.A[j*(j-1)/2+(i-1)]<<" ";
           }
            else{
                cout<<0<<" ";
            }
        }

        cout<<"\n";
    }
}

int main(){
    struct matrix M;
    M.A=new int[M.n*(M.n+1)/2];
    cin>>M.n;
    int i,j,x;

    for(i=1;i<=M.n;i++){
        for(j=1;j<=M.n;j++){
            cin>>x;
            Set(&M,i,j,x);
        }
    }


cout<<"\n";

display(M);

return 0;
}

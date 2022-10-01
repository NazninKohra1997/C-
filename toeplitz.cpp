#include<bits/stdc++.h>
using namespace std;

struct matrix{
    int *A;
    int n;
};

void Set(struct matrix *M,int i,int j,int x){
     if(i<=j){
        M->A[j-i]=x;
     }
     else if(i>j){
        M->A[M->n+(i-j-1)]=x;
     }
}

int Get(struct matrix M,int i,int j){
    if(i<=j){
        return j-i;
    }
    else if(i>j){
        return M.n+(i-j-1);
    }
}

void display(struct matrix M){
    for(int i=1;i<=M.n;i++){
        for(int j=1;j<=M.n;j++){
            if(i<=j){
                cout<<j-i<<" ";
            }
            else if(i>j){
                cout<<M.n+(i-j-1)<<" ";
            }
        }

        cout<<"\n";
    }
}

int main(){
    struct matrix M;
    M.A=new int[2*M.n-1];
    cin>>M.n;
    int i,j,x;

    for(i=1;i<=M.n;i++){
        for(j=1;j<=M.n;j++){
            cin>>x;
            Set(&M,i,j,x);
        }
    }

    display(M);
    return 0;
}

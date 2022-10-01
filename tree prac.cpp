#include<bits/stdc++.h>
using namespace std;

char tree[7];

int root(char key){
    if(tree[0]!='\0'){
        cout<<"It has another root"<<"\n";
    }
    else{
        tree[0]=key;
    }
    return 0;
}

int Lchild(char key,int parent){
     if(tree[parent]=='\0'){
        cout<<"Left child has no parent"<<"\n";
     }
     else{
        tree[(parent*2)+1]=key;
     }
     return 0;
}

int Rchild(char key,int parent){
     if(tree[parent]=='\0'){
        cout<<"Right child has no parent"<<"\n";
     }
     else{
        tree[parent*2+2]=key;
     }
     return 0;
}

int display(){
    int i;
    for(i=0;i<7;i++){
        if(tree[i]!='\0'){
            cout<<tree[i]<<"\n";
        }
        else{
            cout<<"-"<<"\n";
        }
    }
    return 0;
}

int main(){
    root('A');
    Lchild('B',0);
    Rchild('C',0);
    Lchild('D',1);
    Rchild('E',1);
    Lchild('F',2);
    Rchild('G',2);
    display();
}

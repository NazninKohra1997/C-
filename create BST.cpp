#include<bits/stdc++.h>
using namespace std;

int tree[7];

int root(int key){
    if(tree[0]!='\0'){
        cout<<"Already has a root"<<"\n";
    }
    else{
        tree[0]=key;
    }
    return 0;
}

int Lchild(int parent,int key){
    if(tree[parent]==0){
        cout<<"Can't insert Left child"<<"\n";
    }
    else{
        tree[parent*2+1]=key;
    }
    return 0;
}

int Rchild(int parent,int key){
    if(tree[parent]==0){
        cout<<"Can not insert Right child"<<"\n";
    }
    else{
        tree[parent*2+2]=key;
    }
    return 0;
}

int create(){
    int i;
    for(i=0;i<7;i++){
        if(tree[i]!='\0'){
            cout<<tree[i]<<" ";
        }
        else{
            cout<<"_ ";
        }

    }
    return 0;
}


int main(){
    root(30);
    Lchild(0,15);
    Rchild(0,50);
    Lchild(1,10);
    Rchild(1,20);
    Lchild(2,40);
    Rchild(2,60);

    create();
    return 0;
}

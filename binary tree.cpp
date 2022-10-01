#include<bits/stdc++.h>
using namespace std;

char tree[10];

int root(char key){
    if(tree[0]!='\0'){
        cout<<"Already has a root"<<"\n";
    }
    else{
        tree[0]=key;

    }
    return 0;
}

int left_child(char key,int parent){
    if(tree[parent]=='\0'){
        cout<<"can't set left child at "<<(parent*2)+1<<"\n";
    }
    else{
        tree[(parent*2)+1]=key;

    }
    return 0;
}

int right_child(char key,int parent){
    if(tree[parent]=='\0'){
        cout<<"can't set right child at "<<(parent*2)+2<<"\n";
    }
    else{
       tree[(parent*2)+2]=key;

    }
    return 0;
}

int print(){
    int i;
    for(i=0;i<10;i++){
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
    right_child('C', 0);
    left_child('D', 1);
    right_child('E', 1);
    right_child('F', 2);

    print();

    return 0;

}

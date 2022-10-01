#include<bits/stdc++.h>
using namespace std;

char tree[7];

int root(){
    char key;
    cout<<"Enter key for root: ";
    cin>>key;
     if(tree[0]!='\0'){
        cout<<"Already has a root";
     }
     else{
        tree[0]=key;
     }
     return 0;
}

int Lchild(){
    int parent;
    char key;
    cout<<"Enter parent for Left child: ";
    cin>>parent;

    cout<<"Enter key for Left child: ";
    cin>>key;


    if(tree[parent]=='\0'){
        cout<<"no parent found"<<"\n";
    }
    else{
        tree[parent*2+1]=key;
    }
    return 0;

}

int Rchild(){
    int parent;
    char key;
    cout<<"Enter parent for Right child: ";
    cin>>parent;

    cout<<"Enter key for Right child: ";
    cin>>key;


    if(tree[parent]=='\0'){
        cout<<"no parent found"<<"\n";
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
            cout<<"_"<<" ";
        }

    }
    return 0;
}



int main(){
     int i;
     root();
     for(i=0;i<2;i++){
      Lchild();
      Rchild();
     }
     create();


     return 0;
}

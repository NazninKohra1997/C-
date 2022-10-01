#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *Lchild;
    Node *Rchild;
     Node(int data){
        this->data=data;
        Lchild=Rchild=0;
    }
};

int Bsearch(struct Node *node,int key){
    if(key==0){
        return 0;
    }
    if(key>node->data){

        return Bsearch(node->Rchild,key);
    }
    else if(key<node->data){

        return Bsearch(node->Lchild,key);
    }
    else{
        cout<<"Key not found";
    }

}

int main(){
     struct Node *node=new Node(30);
     node->Lchild=new Node(15);
     node->Lchild->Rchild=new Node(10);
     node->Lchild->Rchild=new Node(20);

     node->Rchild=new Node(50);
     node->Rchild->Lchild=new Node(40);
     node->Rchild->Rchild=new Node(60);

     Bsearch(node,22);

     return 0;
}


#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
     Node *left;
     Node *right;
     Node(char data){
         this->data=data;
         left=right=0;
     }
};

int level(struct Node *node){
    if(node==NULL){
        return 0;
    }
    else{
        cout<<node->data<<"\n";
        level(node->left);
        level(node->right);
    }
}

int main(){
     struct Node *node=new Node('A');
     node->left=new Node('B');
     node->left->left=new Node('C');
     node->left->right=new Node('D');
     node->right=new Node('E');
     node->right->left=new Node('F');
     node->right->right=new Node('G');

     cout<<"Level order is: "<<"\n";
     level(node);

     return 0;
}

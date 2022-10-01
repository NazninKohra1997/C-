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

int preOrder(struct Node *node){
     if(node==NULL){
        return 0;
     }
     else{
        cout<<node->data<<"\n";
        preOrder(node->left);
        preOrder(node->right);
     }
}

int main(){
    struct Node *node=new Node('A');
    node->left=new Node('B');
    node->right=new Node('C');
    node->left->left=new Node('D');
    node->left->right=new Node('E');
    node->right->left=new Node('F');
    node->right->right=new Node('G');

    cout<<"preorder is: "<<"\n";
    preOrder(node);

    return 0;

}

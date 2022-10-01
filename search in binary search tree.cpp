#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int data){
        this->data=data;
        left=right=0;
    }
};

int Search(struct node *root,int key){
    if(key==root->data){
        return key;
     }

     if(key>root->data){
        return Search(root->right,key);
     }
     else if(key<root->data){
        return Search(root->left,key);
     }

}

int main(){
   struct node *root=new node(20);
   root->left=new node(30);
   root->left->left=new node(40);
   root->left->right=new node(50);

   root->right=new node(60);

   cout<<Search(root,30);
   return 0;
}

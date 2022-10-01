#include<bits/stdc++.h>
using namespace std;

struct Node{
     char data;
     Node *Lchild;
     Node *Rchild;

     Node(char data){
         this->data=data;
         Lchild=Rchild=0;
     }
};

int root(struct Node *node){
     if(node==NULL){
        return 0;
     }
     else{
        return root(node->Lchild)+root(node->Rchild)+1;
     }
}

int height(struct Node *node){
     int x=0;
     int y=0;
     if(node==NULL){
        return 0;
     }

        x=height(node->Lchild);
        y=height(node->Rchild);
        if(x>y){
            return x+1;
        }
        else{
            return y+1;
        }


}


int main(){
     struct Node *node=new Node('A');
     node->Lchild=new Node('B');
     node->Lchild->Lchild=new Node('C');
     node->Lchild->Rchild=new Node('D');
     node->Lchild->Lchild->Lchild=new Node('F');
     node->Rchild=new Node('E');


     cout<<root(node)<<"\n";
     cout<<height(node);
     return 0;
}

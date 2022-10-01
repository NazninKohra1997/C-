#include<bits/stdc++.h>
using namespace std;

int func(int start,int End){
    int counts=0;
    int root;

    for(int i=start;i<=End;i++){
            root=sqrt(i);

           if((root*root)==i){
                counts+=1;
    }
    }
    return counts;
}

int main(){
    int n;
    cin>>n;
    int start;
    int End;

for(int i=0;i<n;i++){
    cin>>start>>End;
    cout<<func(start,End)<<"\n";
}

   return 0;

}

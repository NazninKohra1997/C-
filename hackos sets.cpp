#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;

    int Q,y,x;
    cin>>Q;

    //set<int>::iterator itr;

    for(int i=0;i<Q;i++){
        cin>>y;
        cin>>x;

        if(y==1){
           s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else if(y==3){
               set<int>::iterator itr=s.find(x);

              if(itr==s.end())
              {
                cout<<"No"<<"\n";
               }
               else{
                 cout<<"Yes"<<"\n";
               }
         }
     }

       return 0;
    }


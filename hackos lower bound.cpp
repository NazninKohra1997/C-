#include<bits/stdc++.h>
using namespace std;

int main(){

    int N,input,Q,Y;
    cin>>N;
     vector<int>v;

    int i,j,k;
    for(i=0;i<N;i++){
        cin>>input;
        v.push_back(input);
    }

     cin>>Q;

         for(j=0;j<Q;j++){
            cin>>Y;

            vector<int>::iterator low;
            low=lower_bound(v.begin(),v.end(),Y);


         if(v[low-v.begin()]==Y){
                cout<<"Yes"<<" ";
               cout<<(low-v.begin()+1)<<"\n";
                       }
           else{
               cout<<"No"<<" ";
                cout<<(low-v.begin()+1)<<"\n";
                }

    }

        return 0;

    }



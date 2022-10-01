#include<bits/stdc++.h>
using namespace std;

int main(){


    int N,input;
    int x,a,b;
    cin>>N;

    vector<int>v;

    for(int i=0;i<N;i++){
        cin>>input;
        v.push_back(input);
    }

        cin>>x;
        v.erase(v.begin()+(x-1));

        cin>>a>>b;
        v.erase(v.begin()+(a-1),v.begin()+(b-1));

        int size=v.size();
        cout<<size<<"\n";

        for(int j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }

    return 0;
}

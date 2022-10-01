#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    int N,input;

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>input;
        v.push_back(input);
    }
     sort(v.begin(),v.end());


for(int j=0;j<v.size();j++){
    cout<<v[j]<<" ";
}

return 0;
}


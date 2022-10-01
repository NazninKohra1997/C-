#include<bits/stdc++.h>
using namespace std;

    vector<int>v;


    void out(){
        int i;
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }

    int main(){
        int j;
        int input;
        for(j=0;j<4;j++){
            cin>>input;
            v.push_back(input);
        }

        out();

        return 0;
    }

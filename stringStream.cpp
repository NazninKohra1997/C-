#include<bits/stdc++.h>
using namespace std;

int n;
 vector<int> v(n);

void Input(int input){
    int i,j;
    for(i=0;i<n;i++){
          cin>>input;
           v.push_back(input);
           /*for(j=0;j<n-1;j++){
            cin>>str;
            v.push_back(str);
           }*/
    }
}

int main(){
    cin>>n;
    int input;
    char str;

    Input(input);


    for(int j=0;j<v.size();j++){
          cout<<v[j]<<"\n";
    }

    return 0;
}

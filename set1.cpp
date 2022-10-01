#include<bits/stdc++.h>
using namespace std;

int main(){
     set<int>s;
     set<int>::iterator it;
     int input;

     for(int i=0;i<3;i++){
            cin>>input;
        s.insert(input);
     }

     for(it=s.begin();it!=s.end();it++){
        cout<<*it<<"\n";
     }

     return 0;
}

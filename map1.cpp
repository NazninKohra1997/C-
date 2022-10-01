#include<bits/stdc++.h>
using namespace std;

int main(){
    int Q;
    cin>>Q;

    map<string,int>m;
    string str;
    int input,Y;

    for(int i=0;i<Q;i++){
            cin>>Y;

            if(Y==1){
                cin>>str;
                cin>>input;
                m[str]+=input;
                m.insert(make_pair(str,input));
            }

            else if(Y==2){
                cin>>str;
                m.erase(str);
            }
            else if(Y==3){
                cin>>str;
                    map<string,int>::iterator itr=m.find(str);
                if(itr==m.end()){
                    cout<<0<<"\n";
                }
                else{
                    cout<<itr->second<<"\n";
                }
            }
    }

    return 0;
}

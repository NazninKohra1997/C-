#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;

    int a[n];

    vector<int> vec;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i==a[j]){
                        //cout<<j<<" ";
                    vec.push_back(j);
                }

        }
    }


    for(int i=0;i<vec.size();i++){
       // cout<<vec[i]<<" ";
         for(int j=1;j<=n;j++){
            if(vec[i]==a[j]){
                cout<<j<<"\n";
            }
         }
    }




    return 0;
}

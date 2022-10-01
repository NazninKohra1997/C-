#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;

    cin>>n>>q;

    vector<int> a;


    int i,k,j;

    for(i=0;i<n;i++){
        //for(k=0;k<n;k++){
            cin>>k;

            for(j=0;j<a.size();j++){
                cin>>a[i][j];
                //cout<<a[i][j]<<"\n";
           // }
        }

}

for(int r=0;r<q;r++){
        cin>>i>>j;
         cout<<a[i][j]<<"\n";
    }

return 0;
}

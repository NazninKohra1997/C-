#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    vector <int> vec1;

    //for(int i=0;i<n;i++){
        //cin>>a[i];
   // }

   int l=0;

    for(int i=0;i<=60;i++){
        if(i%2==0){
            l=l+1;
            vec1.push_back(l);

        }


    else if(i%2!=0){
            l=l*2;
            vec1.push_back(l);

                   }
    }

    int k;
    for(int i=0;i<n;i++){
            k=a[i];
        cin>>k;
        cout<<vec1[k]<<"\n";
    }



return 0;
}

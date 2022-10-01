#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int like;
    int t;
    int share;
    int total=0;

    vector <int> vec;

    vec.push_back(5);
    like=(5/2)*3;
    vec.push_back(like);
    //cout<<like<<"\n";

    for(int i=2;i<n;i++){

        t=(like/2)*3;
        vec.push_back(t);
        //cout<<t<<"\n";
        like=t;
    }

    for(int i=0;i<vec.size();i++){
        //cout<<vec[i]<<"\n";
        share=vec[i]/2;
        //cout<<share<<"\n";
        total+=share;

    }
    cout<<total;

    return 0;
}

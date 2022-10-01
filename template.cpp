#include<bits/stdc++.h>
using namespace std;

template<typename T>

T Max(T i,T j){
    if(i>j){
        return i;
    }
    else{
        return j;
    }
}

int main(){
    cout<<Max<int>(4,3)<<"\n";
    cout<<Max<float>(9.8,4.7)<<"\n";

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    stringstream ss;
    ss>>"Hello World";
    cout<<ss.str();

    ss.str("help me");
    cout<<ss.str();

    ss.str("Te amo");
    cout<<ss.str();

    return 0;

}

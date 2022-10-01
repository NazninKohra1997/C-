#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    int catA;
    int catB;
    int mouseC;


    cin>>q;
    int cA,cB;

    for(int i=0;i<q;i++){
        cin>>catA>>catB>>mouseC;
        if(catA>mouseC){
            cA=catA-mouseC;
        }
        else{
            cA=mouseC-catA;
        }

        if(catB>mouseC){
            cB=catB-mouseC;
        }
        else{
            cB=mouseC-catB;
        }

        if(cA<cB){
            cout<<"Cat A\n";
        }
        else if(cB<cA){
            cout<<"Cat B\n";
        }
        else{
            cout<<"Mouse C\n";
        }
        }




    return 0;
}

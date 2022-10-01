#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;

    vector<string> vec;
    int i,j,k,l;

    string tag,attribute_name,attribute,closingtag;
    char opening,Equal,tild,dot,closing;
    for(i=0;i<N/2;i++){
        cin>>tag>>attribute_name>>Equal>>attribute;

        vec.push_back(tag);
         vec.push_back(attribute_name);
        vec.push_back(attribute);
    }
   /* for(j=0;j<N/2;j++){
        cin>>closingtag;
        cout<<closingtag<<"\n";
    }

    for(k=0;k<Q;k++){
        cin>>attribute_name>>tild>>attribute;
    }*/

    for(int l=0;l<vec.size();l++){
        cout<<vec[l]<<"\n";
    }

}

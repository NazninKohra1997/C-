#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]==a[j]){
                for(int k=j;k<m;k++){
                    a[k]=a[k+1];
                }
                m--;
                j--;
            }
        }
    }



    for(int i=0;i<m;i++){
       for(int j=i;j<m;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
       }
    }



    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
            if(b[i]<b[j]){
                swap(b[i],b[j]);
            }
       }
    }

    //for(int i=0;i<m;i++){
        //cout<<a[i]<<"\n";
   // }
  // for(int i=0;i<n;i++){
        //cout<<b[i]<<"\n";
    //}

    int Min=a[m-1];
    //int Max=a[0];

    vector <int>v;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(b[i]>a[j] || b[i]==a[j]){
           // cout<<j+1<<"\n";
            v.push_back(j+1);
            break;
           }

           else if((b[i]-a[j]>=1 && b[i]-a[j]<=9) && (b[i]-a[j+1]>=-1 && b[i]-a[j+1]<=-9)){
            //cout<<j+1<<"\n";
             v.push_back(j+1);
             break;
           }



            else if(b[i]<Min){
                //cout<<m+1<<"\n";
                v.push_back(m+1);
                break;
           }

        }
    }
    //cout<<"\n";


    for(int i=0;i<v.size();i++){
             for(int j=i;j<v.size();j++){
                 if(v[i]<v[j]){
                    swap(v[i],v[j]);
                 }

    }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}

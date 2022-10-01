#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
            if((a[i]<40)&&(40-a[i])<3) cout<<40<<"\n";
        else if((a[i]<45)&&(45-a[i])<3) cout<<45<<"\n";

        else if((a[i]<50)&&(50-a[i])<3) cout<<50<<"\n";
        else if((a[i]<55)&&(55-a[i])<3) cout<<55<<"\n";

        else if((a[i]<60)&&(60-a[i])<3) cout<<60<<"\n";
        else if((a[i]<65)&&(65-a[i])<3) cout<<65<<"\n";

        else if((a[i]<70)&&(70-a[i])<3) cout<<70<<"\n";
        else if((a[i]<75)&&(75-a[i])<3) cout<<75<<"\n";

        else if((a[i]<80)&&(80-a[i])<3) cout<<80<<"\n";
        else if((a[i]<85)&&(85-a[i])<3) cout<<85<<"\n";

        else if((a[i]<90)&&(90-a[i])<3) cout<<90<<"\n";
        else if((a[i]<95)&&(95-a[i])<3) cout<<95<<"\n";

        else if((a[i]<100)&&(100-a[i])<3) cout<<100<<"\n";

        else cout<<a[i]<<"\n";

    }

    return 0;
}

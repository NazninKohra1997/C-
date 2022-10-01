#include<bits/stdc++.h>
using namespace std;

struct info{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main(){
    struct info student;
    cin>>student.age;
    cin>>student.first_name;
    cin>>student.last_name;
    cin>>student.standard;

    cout<<student.age<<" ";
    cout<<student.first_name<<" ";
    cout<<student.last_name<<" ";
    cout<<student.standard<<" ";

    return 0;
}

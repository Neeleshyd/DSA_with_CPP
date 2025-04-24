#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=98;
    if(i<n){
        
        cout<<"to far";
    }
    else if(i>n){
        cout<<"to far";
    }
    else if(i=n){
        cout<<"number found successful";
    }
    else{
        cout<<"wrong number";
    }
    return 0;
}
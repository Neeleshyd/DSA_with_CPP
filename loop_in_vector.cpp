#include<iostream>
#include<vector>
using namespace std;

int main(){

    
    int element;

    vector<int> v;
    int n=v.size();
    for(int i=0; i<5; i++){
        cin>>element;
        v.push_back(element);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
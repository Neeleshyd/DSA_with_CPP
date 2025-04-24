//print the sum of n natural number,wher n is input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the interger"<<endl;
    cin>>n;

    int sum=0;

    for(int i=1; i<=n;i++){
        sum+=i;

    }
    cout<<"sum of interger:"<<endl<<sum;
    return 0;

}
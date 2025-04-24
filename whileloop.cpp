//print the sum of n natural number,wher n is input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the natural number"<<endl;
    cin>>n;


    int sum=0;

    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;

    return 0;
}
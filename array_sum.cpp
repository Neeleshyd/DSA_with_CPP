#include<iostream>
using namespace std;

int main(){

    int array[]={1,4,5,6,8};
    
    int size=sizeof(array)/sizeof(array[0]) ;

    int sum=0;

    for(int i=0;i<size; i++){
        sum=sum+array[i];
    }

    cout<<sum;

    return 0;

}
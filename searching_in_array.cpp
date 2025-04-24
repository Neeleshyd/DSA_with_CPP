#include<iostream>
using namespace std;

int main(){
    
    int array[]={5,8,9,10,14};
    
    int key=5;

    int ans=-1;

    for(int i=0; i<5; i++){
        if(array[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans;
    
    return true;
}
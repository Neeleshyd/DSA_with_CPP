#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>33){
        if(marks>80){
            cout<<"gracefully";
        }
        else{
            cout<<"pass";
        
        }
    }
    else{
        cout<<"fail";
    }
    return 0;
}
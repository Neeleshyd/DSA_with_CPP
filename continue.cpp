//print al value bw 1to 50 except for the multiple of 3
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<50;i++){
        if(i%2==0){
            continue;
        }
    cout<<i<<endl;
    }
    return 0;
}
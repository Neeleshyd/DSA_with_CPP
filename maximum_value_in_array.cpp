//find maximum value out of all element in array
#include<iostream>
using namespace std;

int main(){
    
        int arr[] = {3, 7, 2, 48, 5};
        int size = sizeof(arr) / sizeof(arr[0]);
        
        int maxValue = arr[0]; // Assume first element is max
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        
        cout  << maxValue <<endl;
        return 0;
    
}   


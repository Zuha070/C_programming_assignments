#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,6,8,9,2,8,7};
    int size=7;
    int max=INT_MIN;
    for(int i=0 ; i<size ;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    int smax=INT_MIN;
    for(int i=0 ; i<size ; i++){
        if(arr[i]> smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"Second largest number is "<<smax<<endl;
    return 0; 
} 
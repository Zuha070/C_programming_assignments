#include <iostream>
#include <climits>
using namespace std;
void swapmaxmin(int arr[],int size){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0 ; i<size ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0 ; i<size ; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    swap(min,max);
    cout<<"minimum"<<min<<endl;
    cout<<"maximum"<<max<<endl;

}
int main(){
    int arr[]={2,6,8,9,7};
    int size=5;
    swapmaxmin(arr,size);
    return 0; 
} 
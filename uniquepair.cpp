#include<iostream>
using namespace std;
void count(int arr[],int size,int target){
    int i=0 ;
    int j=size-1;
    int count=0;
    while(i<j){
        if(arr[i]+arr[j]==target){
         count+=1;
         i++;
         j--;
        }
    else if(arr[i]+arr[j]>target){
        j--;

    }
    else{
        i++;
    }
    }
    cout<<"count is  "<< count;
}
int main(){
int n;
cout<<"enter n";
cin>>n;
int arr[n];
for(int i=0 ; i<n; i++){
    cin>>arr[i];
}
count(arr,n,5);
return 0;
}

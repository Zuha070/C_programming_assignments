#include<iostream>
using namespace std;
void counttrip(int arr[],int size,int target){
    int i=0 ;
    int j=size-1;
    int k=1;
    int count=0;
    while(i<j){
        if(i != j && j!=k && i!=k && arr[i]+arr[j]+arr[k]==target){
         count+=1;
         i++;
         j--;
         k++;
        }
    else if(arr[i]+arr[j]+arr[k]>target){
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
counttrip(arr,n,7);
return 0;
}

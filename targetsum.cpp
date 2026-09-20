#include<iostream>
using namespace std;
void search_sum(int arr[],int size,int target){
    int i=0 ;
    int j=size-1;
    bool flag=false;
    while(i<j){
        if(arr[i]+arr[j]==target){
            flag=true;
            break;
        }
    else if(arr[i]+arr[j]>target){
        j--;
    }
    else{
        i++;
    }
    }
    if(flag==true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
int main(){
int n;
cout<<"enter n";
cin>>n;
int arr[n];
for(int i=0 ; i<n; i++){
    cin>>arr[i];
}
search_sum(arr,n,4);
return 0;
}

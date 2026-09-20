#include<iostream>
using namespace std; //{1,2,3,4,5} //target 4
void search_diff(int arr[],int size,int target){
    int j=0 ;
    int i=size-1;
    bool flag=false;
    while(j<i){
        if(arr[i]-arr[j]==target){
            flag=true;
            break;
        }
    else if(arr[i]-arr[j]>target){
        i--;
    }
    else{
        j++;
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
search_diff(arr,n,4);
return 0;
}

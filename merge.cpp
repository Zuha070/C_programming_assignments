#include<iostream>
using namespace std;
void merge(int arr1[],int m ,int arr2[],int n)
{
    int result[m+n];
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j])
        {
            result[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m)
    {
        result[k]=arr1[i];
        k++;
        i++;
    }
        while(j<n)
    {
        result[k]=arr2[j];
        k++;
        j++;
    }
for(int k=0 ; k<m+n; k++)
{
cout<< result[k]<<" ";
}
}
int main(){
int m;
cout<<"enter m";
cin>>m;
int n;
cout<<"enter n";
cin>>n;
int arr1[m];
int arr2[n];
for(int i=0 ; i<m ; i++){
    cin>>arr1[i];
}
for(int j=0 ; j<n ; j++){
    cin>>arr2[j];
}
merge(arr1,m,arr2,n);
return 0;
}

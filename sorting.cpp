#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0 ; i<v.size() ;i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0 ; i<v.size() ;i++){
        if(v[i]==0){
            count++;
        }
    }
    for(int i=0 ; i<v.size() ;i++){
        if(i<count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
        cout<<"sorted array is "<<v[i];
    }
    cout<<endl;
    
    return 0; 
} 
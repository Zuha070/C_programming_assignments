#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0 ; i<v.size() ;i++){
        cin>>v[i];
    }
    int target=7;
    int pairs = 0;
    for(int i=0 ; i<v.size() ; i++){
        for(int j=i+1 ; j<v.size() ; j++){
            if(v[i]+v[j]==target){
                pairs++;
            }
        }
    }
    cout<<"the number of pairs are"<<pairs<<endl;
    return 0; 
} 
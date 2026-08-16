#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0 ; i<v.size() ;i++){
        cin>>v[i];
    }
    cout<<"enter x :";
    int x;
    cin>>x;
    int position = -1;
    for(int i=v.size()-1 ; i>=0 ;i--){
        if(v[i]==x){
            position=i;
             break;
        }
       
    }
    cout<<"found at "<<position<<endl;
    return 0; 
} 
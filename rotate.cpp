#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void rotate(vector<vector<int>> &v){
    //transpose
    int m=v.size();
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<i ; j++){
            swap(v[i][j],v[j][i]);
        }
    }
    //reverse
    for(int i=0; i<m ;i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>vec(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0 ; j<n ; j++){
            cin>>vec[i][j];
        }
    }
    rotate(vec);
    for(int i=0;i<n;i++){
        for(int j=0 ; j<n ; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
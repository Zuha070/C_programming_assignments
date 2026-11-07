#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxones(vector<vector<int>>&v){
    int maxone=INT_MIN;
    int maxonerow=-1;
    int columns = v[0].size();
    for(int i=0 ; i<v.size() ;i++){
        for(int j=0 ; j<v[i].size();j++){
            if(v[i][j]==1){
                int numones=columns-j;
                if(numones>maxone){
                    maxone=numones;
                    maxonerow=i;
                }
                break;
            }
        
        }

    }
    return maxonerow;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ;j++){
            cin>>vec[i][j];
        }
    }
    int result=maxones(vec);
    cout<<result<<endl;
    return 0;
}

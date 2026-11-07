#include<iostream>
#include<vector>
using namespace std;
void spiral(vector<vector<int>> &v){
    int m=v[0].size();
    int n=v.size();
    int left = 0;
    int right=m-1;
    int top=0;
    int bottom=n-1;
    int direction=0;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int j=left ; j<= right ; j++){
                cout<<v[top][j]<<" ";
            }
            top++;
        }
            else if(direction==1){
                for(int i=top ; i<=bottom ; i++){
                    cout<<v[i][right]<<" ";
                }
                right--;
            }
            else if (direction==2){
            for(int j=right ; j>=left ; j--){
                cout<<v[bottom][j]<<" ";
            }
            bottom--;
        }
            else if(direction==3){
                for(int i=bottom ; i>= top ; i--){
                    cout<<v[i][left];
                }
                left++;
            }
            direction=(direction+1)%4;
        }
    }
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>matrix[i][j];
        }
    }
    spiral(matrix);
    return 0;


}
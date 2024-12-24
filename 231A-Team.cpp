#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    
    int problems = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<3; j++){
            count+=(arr[i][j]==1);
            if(count==2){
                problems++;
                break;
            }
        }
    }
    
    cout<<problems;
    
    return 0;
}
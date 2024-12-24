#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int level[n];
    for(int i=0; i<n; i++){
        cin>>level[i];
    }
    
    bool easy = true;
    for(int i=0; i<n; i++){
        if(level[i]==1){
            easy = false;
            break;
        }
    }
    
    cout<<((easy==true)?"EASY":"HARD");

    return 0;
}
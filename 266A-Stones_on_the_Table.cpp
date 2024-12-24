#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    string stones;
    cin>>stones;
    
    int count = 0;
    int i = 0;
    int j = 1;
    while(j<n){
        if(stones[i]==stones[j])
            count++, j++;
        else
            i = j++;
    }
    cout<<count;

    return 0;
}
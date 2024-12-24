#include <iostream>
using namespace std;

int main() {
    
    int n, t;
    cin>>n>>t;
    string q;
    cin>>q;
    while(t--){
        int i = 0;
        while(i<n-1){
            if(q[i]=='B' && q[i+1]=='G'){
                swap(q[i], q[i+1]);
                i+=2;
            }
            else{
                i++;
            }
        }
    }
    
    cout<<q;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int k, n, w;
    cin>>k>>n>>w;
    int dollars = k*(w*(w+1)/2);
    int need = dollars-n;
    if(need>0){
        cout<<need;
    }
    else{
        cout<<0;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int steps = 0;
    while(n>=5){
        steps++;
        n-=5;
    }
    if(n!=0)
        steps++;
    cout<<steps;

    return 0;
}
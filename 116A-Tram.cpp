#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int capacity = 0;
    int passenger = 0;
    while(n--){
        int exits, enter;
        cin>>exits>>enter;
        passenger += enter-exits;
        capacity = max(capacity, passenger);
    }
    cout<<capacity;

    return 0;
}
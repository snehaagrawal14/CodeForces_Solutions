#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int sign = 1;
    if(n%2==0)
        sign = 1;
    else
        sign = -1;
    long long sum= sign*(n+1)/2;
    cout<<sum;

    return 0;
}
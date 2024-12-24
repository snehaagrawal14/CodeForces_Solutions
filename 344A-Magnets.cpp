#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int groups = 0;
    int prev=-1;
    while(n--) {
        int magnet;
        cin >> magnet;
        if(prev==-1 || prev!=magnet%10)
            groups++;
        prev = magnet%10;
    }
    cout << groups << endl;

    return 0;
}
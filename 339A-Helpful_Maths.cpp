#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string sum;
    cin>>sum;
    sort(sum.begin(), sum.end(), greater<char>());
    int i = 1;
    string ans;
    ans.push_back(sum[0]);
    while(ans.size()<sum.size()){
        ans.push_back('+');
        ans.push_back(sum[i++]);
    }
    reverse(ans.begin(), ans.end());
    
    cout<<ans;

    return 0;
}
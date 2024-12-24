#include <iostream>
using namespace std;

bool isCorrect(string ori, string rev){
    int n = ori.size();
    int m = rev.size();
    if(n!=m)
        return false;
    int i = 0;
    int j = n-1;
    while(i<n && j>=0){
        if(ori[i]!=rev[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    
    string ori;
    string rev;
    cin>>ori;
    cin>>rev;
    cout<<((isCorrect(ori, rev)==true)?"YES":"NO");
    
    return 0;
}
#include <iostream>
using namespace std;

int isEqual(string a, string b){
    int n = a.size();
    int m = b.size();
    if(n<m)
        return -1;
    if(m<n)
        return 1;
    for(int i=0; i<n; i++){
        if(tolower(a[i])<tolower(b[i]))
            return -1;
        if(tolower(a[i])>tolower(b[i]))
            return 1;
    }
    return 0;
}

int main() {

    string a, b;
    cin>>a>>b;
    cout<<isEqual(a, b)<<endl;

    return 0;
}
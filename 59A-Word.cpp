#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int lowercase = 0;
    int n = s.size();
    for(auto i: s){
        if(i>='a' && i<='z')
            lowercase++;
    }
    
    for(int i=0; i<n; i++){
        if(lowercase < n-lowercase){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
    
    cout<<s;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    string won;
    cin>>won;
    int anton = 0;
    for(auto i: won){
        if(i=='A')
            anton++;
        else
            anton--;
    }
    
    if(anton>0)
        cout<<"Anton";
    else if(anton<0)
        cout<<"Danik";
    else
        cout<<"Friendship";
    
    return 0;
}
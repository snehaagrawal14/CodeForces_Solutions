#include <iostream>
#include <unordered_set>
using namespace std;

bool isGirl(string username){
    unordered_set<char> distinctChars;
    for(auto i: username)
        distinctChars.insert(i);
    if(distinctChars.size()%2==0)
        return true;
    return false;
}

int main() {

    string username;
    cin>>username;
    if(isGirl(username))
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
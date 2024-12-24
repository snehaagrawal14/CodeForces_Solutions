#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string word;
    cin>>word;
    char ch = toupper(word[0]);
    word.erase(word.begin());
    word.insert(word.begin(), ch);
    cout<<word;

    return 0;
}
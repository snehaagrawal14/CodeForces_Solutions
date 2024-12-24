#include <iostream>
using namespace std;

bool distinctDigits(int year){
    int freq[10] = {0};
    while(year){
        freq[year%10]++;
        if(freq[year%10]==2)
            return false;
        year/=10;
    }
    return true;
}

int main() {
    
    int year;
    cin>>year;
    while(true){
        year++;
        if(distinctDigits(year))
            break;
    }
    cout<<year;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    
    int moves = 0;
    int posi = -1;
    int posj = -1;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==1){
                posi = i, posj = j;
                break;
            }
        }
    }
    
    moves += abs(2-posi);
    moves += abs(2-posj);
    cout<<moves;

    return 0;
}
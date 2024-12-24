#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

	vector<int> result(n);
	for(int i=0; i<n; i++)
		result[arr[i]-1] = i+1;

	for(auto i: result)
		cout<<i<<" ";

    return 0;
}
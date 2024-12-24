#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n;
	cin>>n;
	vector<int> pi(n);
	for(int i=0; i<n; i++)
		cin>>pi[i];

	float sum = 0;
	for(auto i: pi)
		sum += i;
	
	cout<<sum/n;

	return 0;
}
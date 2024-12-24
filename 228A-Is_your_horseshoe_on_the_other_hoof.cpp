#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	int colors[4];
	for(int i=0; i<4; i++)
		cin>>colors[i];

	unordered_map<int, int> freq;
	for(auto i: colors)
		freq[i]++;
	
	cout<<(4-freq.size());

	return 0;
}
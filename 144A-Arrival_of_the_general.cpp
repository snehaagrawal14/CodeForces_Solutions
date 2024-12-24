#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

	int n;
	cin>>n;
	vector<int> height(n);
	for(int i=0; i<n; i++)
		cin>>height[i];
	
	int min_pos = -1;
	int max_pos = -1;
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for(int i=0; i<n; i++){
		if(mini>=height[i]){
			min_pos = i;
			mini = height[i];
		}
		if(maxi<height[i]){
			max_pos = i;
			maxi = height[i];
		}
	}

	int op = max_pos + n - min_pos - 1;
	if(min_pos<max_pos)
		op--;
	cout<<op;

	return 0;
}
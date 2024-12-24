#include<iostream>
#include<unordered_set>
using namespace std;

bool can_pass(unordered_set<int> x, unordered_set<int> y, int n){
	for(int i=1; i<=n; i++){
		if(x.find(i)==x.end() && y.find(i)==y.end())
			return false;
	}
	return true;
}

int main(){
	
	int n;
	cin>>n;
	int p;
	cin>>p;
	unordered_set<int> x_levels;
	for(int i=0; i<p; i++){
		int lvl;
		cin>>lvl;
		x_levels.insert(lvl);
	}
	int q;
	cin>>q;
	unordered_set<int> y_levels;
	for(int i=0; i<q; i++){
		int lvl;
		cin>>lvl;
		y_levels.insert(lvl);
	}
	
	if(can_pass(x_levels, y_levels, n))
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";

	return 0;
}
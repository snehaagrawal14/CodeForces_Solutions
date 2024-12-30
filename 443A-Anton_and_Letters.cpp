#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	string letters;
	getline(cin, letters);
	unordered_set<char> distinct;
	for(auto i: letters){
		if(i>='a' && i<='z')
			distinct.insert(i);
	}

	cout<<distinct.size()<<endl;
	
	return 0;
}
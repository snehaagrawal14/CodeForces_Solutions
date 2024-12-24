#include<iostream>
#include<unordered_map>
using namespace std;

bool isPangram(string word){
	if(word.size()<26)
		return false;
	unordered_map<int, int> freq;
	for(auto i: word)
		freq[tolower(i)]++;
	return freq.size()==26;
}

int main(){

	int n;
	cin>>n;
	string word;
	cin>>word;
	if(isPangram(word))
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
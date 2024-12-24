#include<iostream>
using namespace std;

int main(){

	string a, b;
	cin>>a>>b;
	string ans;
	for(int i=0; i<a.size(); i++){
		ans.push_back((a[i]-'0')^(b[i]-'0')+'0');
	}

	cout<<ans;

	return 0;
}
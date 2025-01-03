#include<iostream>
using namespace std;

int main(){

	string position;
	cin>>position;
	int count = 0;
	bool team = position[0] - '0';
	for(int i=0; i<position.size(); i++){
		if(team == position[i]-'0')
			count++;
		else
			count = 1, team = !team;
		if(count==7)
			break;
	}
	if(count==7)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
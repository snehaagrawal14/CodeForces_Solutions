#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	bool love = false;
	while(--n){
		if(love)
			cout<<"I love that ";
		else
			cout<<"I hate that ";
		love = !love;
	}
	if(love)
		cout<<"I love it";
	else
		cout<<"I hate it";
	return 0;
}
#include<iostream>
using namespace std;

int main(){

	int balance;
	cin>>balance;
	int no_of_bills = 0;
	if(balance>=100){
		no_of_bills += (balance/100);
		balance %= 100;
	}
	if(balance>=20){
		no_of_bills += (balance/20);
		balance %= 20;
	}
	if(balance>=10){
		no_of_bills += (balance/10);
		balance %= 10;
	}
	if(balance>=5){
		no_of_bills += (balance/5);
		balance %= 5;
	}
	if(balance>=1){
		no_of_bills += balance;
	}

	cout<<no_of_bills<<endl;

	return 0;
}
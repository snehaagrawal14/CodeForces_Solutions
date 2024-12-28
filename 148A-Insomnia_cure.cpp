#include<iostream>
using namespace std;

int damagedDragons(int k, int l, int m, int n, int d){
	if(k==1 || l==1 || m==1 || n==1)
		return d;
	int count = 0;
	for(int i=1; i<=d; i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
			count++;
	}
	return count;
}

int main(){

	int k, l, m, n, d;
	cin>>k>>l>>m>>n>>d;
	
	cout<<damagedDragons(k, l, m, n, d)<<endl;
	
	return 0;
}
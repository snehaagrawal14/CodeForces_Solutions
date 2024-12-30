#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	int n;
	cin>>n;
	int total_faces = 0;
	unordered_map<string, int> faces{
		{"Tetrahedron", 4},
		{"Cube", 6},
		{"Octahedron", 8},
		{"Dodecahedron", 12},
		{"Icosahedron", 20}
	};
	while(n--){
		string polygon;
		cin>>polygon;
		total_faces += faces[polygon];
	}

	cout<<total_faces<<endl;

	return 0;
}
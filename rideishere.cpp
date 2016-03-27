/*
ID: nanagad1
PROG: ride
LANG: C++11               
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int final(string str){
	long long int product = 1;

	for(int i = 0; i <= str.length()-1; i++){
		int w = 0;   
		char ch = str[i];
		w = ch - 'A' + 1;
		product *= w;
	}
	return product % 47;
}

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
	fin >> a >> b;
	if(final(a) == final(b)){
		fout << "GO\n";
	}
	else{
		fout << "STAY\n";
	}
}

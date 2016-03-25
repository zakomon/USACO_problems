#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("paint.in");  
ofstream fout("paint.out");

int main(){
	int a,b,c,d;
	fin >> a >> b >> c >> d;

	if(a > d || c > b){
		int r = (d - c) + (b - a);
		fout << r << endl;
	}

	else{
		int maximum = max(b,d);
		int minimum = min(a,c);
		fout << maximum - minimum << endl;
	}
}
// a...b...c...d
// c...d...a...b
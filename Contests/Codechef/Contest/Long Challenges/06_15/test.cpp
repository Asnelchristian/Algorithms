#include <bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
#define ui unsigned int
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
     
using namespace std;

int main(){

	string line;
	int n=2;
	while(n){
	getline(cin,line);

		istringstream iss(line);
		int id;
		while(iss>>id){
			cout<<id<<endl;
	}
		n-=1;
	}



	return 0;
}

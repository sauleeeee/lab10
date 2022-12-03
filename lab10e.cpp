#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m;
	map <string,double> mp;
	
	int a=0;
	string s;
	int x;
	for(int i=0;i<n;i++){
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>s>>x;
			mp[s]+=x;
			a+=x;
		}
	}	
	map <string,double> :: iterator it=mp.begin();
	for(;it!=mp.end();it++){
		it->second=it->second/a *100;
		cout<<it->first<< " "<<it->second<<endl;
	}
}

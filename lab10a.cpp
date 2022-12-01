#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector <string> vt1;
	vector <int> vt2;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int k;
		cin>>k;
		vt1.push_back(s);
		vt2.push_back(k);
	}
	sort(vt1.begin(),vt1.end());
	sort(vt2.begin(),vt2.end());
	for(int i=0;i<vt1.size();i++){
		cout<<vt1[i]<<" "<<vt2[i]<<endl;
	}
	
}

#include <iostream>
#include <algorithm>
#include <vector>

long long counter;
	
long long power(){
	long long r = 1;
	for(long long  i=0;i<counter;i++){
		r*=counter;
	}
	if(counter == 0){
		++counter;
		return 1;
	}
	counter++;
	
	return r;
}
using namespace std;
int main (){
int n;
cin>>n;
	vector <long long > vt;
	for(int i=0; i<=n; i++)
		vt.push_back(i);
	
	generate(vt.begin(),vt.end(),power);
	for(int i=0;i<vt.size();i++){
		cout<<vt[i]<<" ";
	}
}

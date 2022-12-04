
#include <iostream>
#include <map>

using namespace std;

int main(){
    map<pair < pair <string , int >, pair <string , int > > , int> mp;
    int n;
    cin >>n;
    for(int i = 0; i < n;i++){
        pair < pair <string , int > , pair <string , int > > pr;
        cin >> pr.first.first >> pr.first.second >> pr.second.first >> pr.second.second;
        mp[pr] =pr.first.second +  pr.second.second;
    }
    map<pair < pair <string , int >, pair <string , int > > , int> :: iterator it = mp.begin();
    for(it ; it != mp.end();it++){
        cout << it->first.first.first << " and " << it->first.second.first << " "<< it->second<<endl; 
    }


    return 0;
}

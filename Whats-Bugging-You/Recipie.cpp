// Link: https://www.codechef.com/WBY2016/problems/WBUP102

	#include <iostream>
	#include <map>
	#include <vector> 
	using namespace std;
 
 
	int main() 
	{
	int n,q,l;
	string s;
	long long v;
	map<long long,string> m;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>s;
	cin>>v;
	m[v]=s;
	}
	map<long long,string>::reverse_iterator rit;
	cin>>q;
	for(int i=0;i<q;i++){
	    cin>>s;
	    l=s.length();
	    for(rit=m.rbegin();rit!=m.rend();rit++)
	    {
	        if(rit->second.substr(0,l) == s){
	        cout<<rit->second<<endl;
	        break;
	        }
	    }
	if(rit==m.rend())
	cout<<"NO"<<endl;
	}
	return 0;
	}

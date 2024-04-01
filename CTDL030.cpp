#include<bits/stdc++.h>
using namespace std;

void solution()
{
	int n;
	int k;
	string s;
	cin >> k >> s;
	if(k>=s.size())
	{
		n = s.size();
	}else
	{
		n=k;
	}
	vector<int> v;
	for(int i=0;i<s.size();i++) v.push_back(s[i]);
	sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<s.size();j++)
		{
			if(s[j]==v[i]) swap(s[j],s[i]);
		}
	}
	cout << s << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solution();
	}
}

#include<bits/stdc++.h>
using namespace std;
int bfs(int a,int b)
{
	if(a==b)
	return 0;
	set<int> checked;
	checked.insert(a);
	queue<int> q;
	q.push(a);
	int ans=0;
	while(!q.empty())
	{
		int size=q.size();
		ans++;
		while(size--)
		{
			int tmp=q.front(); q.pop();
			int x=tmp*2,y=tmp-1;
			if(x==b)
			return ans;
			else
			{
				if(checked.find(x)==checked.end() && tmp<b)
				{
					checked.insert(x);
					q.push(x);
				}
			}
			if(y==b)
			return ans;
			else 
			{
				if(checked.find(y)==checked.end() )
				{
					checked.insert(y);
					q.push(y);
				}
			}
		}
	}
}
		
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<bfs(a,b)<<endl;
	}
	return 0;
}
		

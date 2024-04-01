#include<bits/stdc++.h>
using namespace std;
int n;
int a[15];
void in()
{
	cout << "[";
	for(int i=0;i<n-1;i++)
	{
		cout << a[i] << " ";
	}
	cout << a[n-1] << "]" << endl;
}
void Try()
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	in();
	n--;
	while(n>0)
	{
		for(int i=0;i<n;i++)
		{
			a[i]=a[i]+a[i+1];
		}
		in();
		n--;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Try();
	}
}

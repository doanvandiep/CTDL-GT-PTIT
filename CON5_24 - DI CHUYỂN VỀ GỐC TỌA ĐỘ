#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll dp[30][30];
void cnt() 
{ 
    for(int i=0; i<=25; i++) 
    dp[i][0]=1; 
    for(int i=0; i<=25; i++) 
    dp[0][i]=1; 
    for(int i=1; i<=25; i++) 
       for(int j=1; j<=25; j++) 
          dp[i][j]=dp[i-1][j]+dp[i][j-1]; 
} 
int main()
{
	int t;
	cin>>t;
	cnt();
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		cout<<dp[n][m]<<endl;
	}
	return 0;
}

#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}

int main()
{    int a[3]={150,200,350};

int dp[10001];

	int n,i,j,s,m,k;
	cin>>n;
	while(n--){
	
		cin>>m;
		for(i=0;i<3;i++)
		{
			for(j=a[i];j<=m;j=j+1)
			{
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);}
		}
		
		cout<<m-dp[m]<<endl;  
	}	
	
}
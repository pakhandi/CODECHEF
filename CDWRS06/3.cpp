//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int arr[100005];
 
int main()
{
	int n, q, qn, m, i;
	char str[10];
	scanf("%d%d", &n, &q);
	while(q--)
	{
		cin>>str>>qn;
		if(str[0]=='U')
		{
			scanf("%d", &m);
			for(i=1; qn*i<=n; i++)
			{
				arr[qn*i]+=m;
			}
		}
	
		else
		{
			printf("%d\n", arr[qn]);
		}
	}
	return 0;
}  

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
 
int main()
{
	int n, cases;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		if(n%2!=0)
		{
			n--;
		}
		n/=2;
		if(n%2!=0)
		{
			printf("%d\n", (n/2)*((n/2)+1));
			continue;
		}
		printf("%d\n",(n*n)/4 );
	}
	return 0;
}  
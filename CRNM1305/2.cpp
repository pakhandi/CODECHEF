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
	long long int cases, n, x, y, x1, y1, sum;
	scanf("%lld",&cases);
	wl(cases--)
	{
		scanf("%lld%lld%lld", &n, &x, &y);
		sum=0;
		wl(n--)
		{
			scanf("%lld%lld", &x1, &y1);
			sum+=(abs(x-x1)+abs(y-y1));
		}
		printf("%lld\n", 2*sum);
	}
	return 0;
} 
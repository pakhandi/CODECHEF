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
	int cases, n;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		printf("%d\n", (10*n*n*n)-(6*n*n));
	}
	return 0;
}
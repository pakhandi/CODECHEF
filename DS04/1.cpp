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
	int n, sum=0, i;
	scanf("%d", &n);
	fl(i,0,n+1)
		sum+=i;
	printf("%d\n", sum);
	return 0;
} 
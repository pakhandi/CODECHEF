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
	long long int n, sum=0;
	scanf("%lld", &n);
	printf("%d\n",(n/5));
	n=n%5;
	printf("%d\n",(n/3));
	n%=3;
	printf("%d\n",(n/2));
	n%=2;
	printf("%d\n",(n));
	return 0;
}
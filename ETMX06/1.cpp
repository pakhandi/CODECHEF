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
	int n1, n2, n3, n4, a, b;
	scanf("%d%d", &a, &b);
	n1=a%10;
	a/=10;
	n2=a%10;
	n3=b%10;
	b/=10;
	n4=b%10;
	if(n1==n3 || n1==n4 || n2==n3 || n2==n4)
		printf("TRUE");
	else
		printf("FALSE");
	return 0;
}
 
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
	int cases;
	char str[25];
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%s", str);
		printf("%d\n", strlen(str));
	}
	return 0;
}
 
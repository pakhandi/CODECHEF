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
	int cases, arr[10001], n, i;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		fl(i,0,n)
			scanf("%d", &arr[i]);
		sort(arr, arr+n);
		fl(i,0,n)
			printf("%d ", arr[i]);
		printf("\n");
	}
	return 0;
}
 
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
	int cases, temp, flag, sum, i, n;
	scanf("%d", &cases);
	wl(cases--)
	{
		scanf("%d", &n);
		flag=0;
		fl(i,0,n)
		{
			sum=i;
			temp=i;
			while(temp)
			{
				sum=sum+(temp%10);
				temp/=10;
			}
			if(sum==n)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			printf("NONE\n");
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
 
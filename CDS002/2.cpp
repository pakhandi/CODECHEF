//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
 
#define wl(n) while(n--)
#define scan(n) scanf("%d", &n)
#define nline printf("\n")
 
int fexp(int n, int p)
{
	int temp;
	if(p==1)
		return n;
	else if(p==0)
		return 1;
	if(n==0)
		return 0;
		
	if(p%2==0)
	{
		temp=(fexp(n,p/2));
		return temp*temp;
	}
	
	else if(p%2!=0)
	{
		temp=fexp(n,p/2);
		return temp*temp*n;
	}
}
 
int main()
{
	int cases;
	int n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		if(n==2)
			printf("15\n");
		else
		{
			cout<<(fexp(n,n+1)-(n-1));
			nline;
		}
	}
	return 0;
} 
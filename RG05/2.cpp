//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define nline printf("\n")
#define MOD 1000000007
#define ll long long int
 
int main()
{
	int i, j, cases, temp1, temp2, temp3, rev;
	int n;
	int a, b, c;
  while(1)
  {	
	scan(n);
	if(n==0)
		break;
	a=n%10;
	n/=10;
	b=n%10;
	n/=10;
	c=n%10;
	temp1=c*b;
	if(temp1>9)
		printf("%d", temp1);
	else
	{
		printf("0");
		printf("%d", temp1);
	}
	temp2=a*b;
	if(temp2>9)
		printf("%d", temp2);
	else
	{
		printf("0");
		printf("%d", temp2);
	}
	temp3=temp1+temp2;
	if(temp3>10)
	{
		while(temp3)
		{
			printf("%d", temp3%10);
			temp3/=10;
		}
	}
	else
		printf("%d0", temp3);
	nline;
  }
	return 0;
} 
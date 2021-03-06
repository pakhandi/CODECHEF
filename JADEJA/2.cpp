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
#define MOD 1000000007
#define ll long long int
 
int fgcd(int a, int b)		//a>b
{
	if(a%b==0)
	{
		return b;
	}
	return fgcd(b,a%b);
}
 
int main()
{
	int i, j, cases, x1, y1, x2, y2, ans, a, b;
	scan(cases);
	wl(cases)
	{
		scan(x1);
		scan(y1);
		scan(x2);
		scan(y2);
		a=abs(x2-x1);
		b=abs(y2-y1);
		if(a==0)
		{
			ans=b-1;
			//continue;
		}
		else if(b==0)
		{
			ans=a-1;
			//continue;
		}
		else
			ans=fgcd(a,b)-1;
		if(ans>=0)
			print(ans);
		else
			printf("0\n");
	}
	return 0;
} 
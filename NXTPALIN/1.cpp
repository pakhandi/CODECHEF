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
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
bool ispalin(int a)
{
	int temp, rev=0;
	temp=a;
	while(temp)
	{
		rev=(rev*10)+(temp%10);
		temp/=10;
	}
	if(rev==a)
		return true;
	else
		return false;
}
 
int main()
{
	int i, j, cases, n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		while(ispalin(n)!=true)
		{
			n++;
		}
		print(n);
	}
	return 0;
}
 
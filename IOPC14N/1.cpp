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
 
char str1[1000005];
int arr[1000005];
 
int main()
{
	int i, j, cases, len1, m, ans;
	scan(cases);
	wl(cases)
	{
		scans(str1);
		len1=strlen(str1);
		scan(m);
		if(str1[0]=='A')
			arr[0]=1;
		else
			arr[0]=0;
		fl(i,1,len1)
		{
			arr[i]=arr[i-1];
			if(str1[i]=='A')
				arr[i]++;
		}
		ans=arr[m-1];
		fl(i,1,len1-m+1)
		{
			if(ans<(arr[i+m-1]-arr[i-1]))
				ans=(arr[i+m-1]-arr[i-1]);
		}
		print(m-ans);
	}
	return 0;
}
 

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
#define print(n) printf("%d\n", n)
#define scan(n) scanf("%d", &n)
#define MOD 1000000007
#define ll long long int
 
char str1[505], operations[505];
 
int main()
{
	int i, j, cases;
	int a, b, len1, count;
	long long int ans;
	while(1)
	{
		scanf("%s", str1);
		if(str1[0]=='0' && str1[1]=='\0')
			break;
		len1=strlen(str1);
		count=0;
		fl(i,0,len1)
		{
			if(str1[i]=='+' || str1[i]=='-' || str1[i]=='*' || str1[i]=='/')
			{
				operations[count++]=str1[i];
			}
		}
		//count++;
		scanf("%lld", &ans);
		ans=ans*1LL;
		fl(i,0,count)
		{
			scan(a);
			if(operations[i]=='+')
				ans=(ans+a)*1LL;
			else if(operations[i]=='-')
				ans=(ans-a)*1LL;
			else if(operations[i]=='*')
				ans=(ans*a)*1LL;
			else
				ans=(ans/a)*1LL;
			
			ans=(ans%MOD)*1LL;
		}
		print(ans);
	}
	return 0;
}
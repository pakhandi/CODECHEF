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
 
int arr[1000005], n, LIS[1000005], index1;
 
void doit()
{
    int i, index2;
    fl(i,0,n)
	{
        if(arr[i]<=0)
			continue;
        if(index1==0 || LIS[index1-1]<=arr[i])
            LIS[index1++] = arr[i];
        else if (LIS[0]>arr[i])
            LIS[0] = arr[i];
        else
		{
            index2=lower_bound(LIS,LIS+index1,arr[i])-LIS;
            LIS[index2] = arr[i];
        }
    }
    print(n-index1);
}
 
int main()
{
    scan(n);
    int i;
    fl(i,0,n)
    {
    	scan(arr[i]);
    	arr[i]-=i;
    }
    doit();
    return 0;
} 
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
	int cases, sum, i;
	char str[11];
	scanf("%d",&cases);
	while(cases--)
	{
		scanf("%s", str);
		sum=0;
		fl(i,0,11)
		{
			switch(str[i])	
			{
				case '0':printf("-----");sum+=0;break;
				case '1':printf(".----");sum+=1;break;
				case '2':printf("..---");sum+=2;break;
				case '3':printf("...--");sum+=3;break;
				case '4':printf("....-");sum+=4;break;
				case '5':printf(".....");sum+=5;break;
				case '6':printf("-....");sum+=4;break;
				case '7':printf("--...");sum+=3;break;
				case '8':printf("---..");sum+=2;break;
				case '9':printf("----.");sum+=1;break;
			}
		}
		printf("\n%d\n", sum);
	}
	return 0;
} 
using namespace std;
 
#include<iostream>
#include<cstring>
 
int main()
{
    int occ[123], i;
    char str[1005];
    
    for(i=0; i<123; i++)
        occ[i]=0;
    
    scanf("%s",str);
    
    for(i=0; i<(strlen(str)); i++)
        occ[str[i]]++;
    
    scanf("%s",str);
    
    for(i=0; i<(strlen(str)); i++)
        occ[str[i]]-=1000;
        
    for(i=0; i<123; i++)
    {
        if(occ[i]>0)
        {
            cout<<char(i)<<occ[i];
        }
    }
    //system("PAUSE");
    return 0;
} 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%i",&t);
    while(t--)
        {
        char a[100001],b[100001];
        scanf("%s",a);
        scanf("%s",b);
        int i=0,c[26]={0},f=0;
        for(i=0;a[i]!='\0';i++)
            c[a[i]-'a']=1;
        for(i=0;b[i]!='\0';i++)
            if(c[b[i]-'a'])
            {
                f=1;
                break;
            }
        puts(f?"YES":"NO");
        
    }
    return 0;
}
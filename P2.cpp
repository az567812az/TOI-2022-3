#include <stdio.h>
int prefix[6];
int main()
{
	prefix[0] = 0,prefix[1] = 185, prefix[2] = 380, prefix[3] = 585, prefix[4] = 800, prefix[5] = 1025; 
	int k,w,s,e,ans; scanf("%d%d%d%d",&k,&w,&s,&e);
    if(k<=2) ans = w/2*5 + 20; else ans = w/2*5 + 20 + (k-2)*5;
    if(s>=18 && e<=23) ans += prefix[e-18]-prefix[s-18];
    else if(e>=18) ans += prefix[e-18];
    printf("%d",ans);
	return 0;
}

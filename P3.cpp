#include <stdio.h>
int main()
{
	int x,r,v,t,pos,nv; scanf("%d%d%d%d",&x,&r,&v,&t);
	while(t--)
	{
		scanf("%d%d",&pos,&nv);
		if(pos<x-r || pos>x+r) continue;
		if(nv<=v) x = pos;
		else
		{
			if(pos>=x) x-=15;
			else x+=15;
		}
	}
	printf("%d",x);
	return 0;
}

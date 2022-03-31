#include <stdio.h>
int main()
{
	int x,y,t,a,b,ansx,ansy,tmp,dis = 0x3f3f3f3f; scanf("%d%d%d",&x,&y,&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		tmp = (a-x)*(a-x) + (b-y)*(b-y);
		if(tmp<dis) dis = tmp,ansx = a,ansy = b;
	}	
	printf("%d %d",ansx,ansy);
	return 0;
}

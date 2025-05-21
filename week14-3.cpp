///week14-3.cpp
#include <stdio.h>
int main()
{
	int now,ans=0;
	while(scanf("%d",&now)==1){
		if(now==0) break;
		if(now>0) ans=ans+now;
	}
	printf("%d",ans);
}

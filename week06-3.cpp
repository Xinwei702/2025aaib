///week06-3.cpp
#include <stdio.h>
int main()
{
	int n,a,ans=1;
	scanf("%d",&n);
	printf("Enter the number of values to be processed: ");
	for (int i=1;i<=n;i++){
		scanf("%d",&a);
			ans=ans*a;
		printf("Enter a value: ");
	}
	printf("Product of the %d values is %d",n,ans);
}

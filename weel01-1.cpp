#include <stdio.h>
///有stdio的外掛才能用scanf跟printf
int main()
{
	int a,b;
	scanf( "%d" , &a );///掃描讀東西
	scanf( "%d" , &b );///可以用複製的，再改b

	printf("%d", a+b );

}

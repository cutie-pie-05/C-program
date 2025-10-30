#include<stdio.h>
int main()
{
	int x,y,and,or;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	and=x&y;
	printf("Bitwise AND=%d",and);
	or=x||y;
	printf("\n Bitwise OR=%d",or);
	return 0;
}

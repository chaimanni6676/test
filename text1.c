#include<stdio.h>
#include<math.h>
void DoWork(int x,int y, int z)
{
int k=0,j=0;
if ((x>0)&&(z<10))
{	
	k=x*y-1;
	j=sqrt(k);
}
if ((x==4)||(y>5)) 
{
	j=x*y+10;
}
j=j%3;
printf("k=%d,j=%d",k,j);
}

void main()
{
	int x,y,z;
	printf(" ‰»Îx,y,z:");
	scanf("%d,%d,%d",&x,&y,&z);
	DoWork(x, y, z);
}





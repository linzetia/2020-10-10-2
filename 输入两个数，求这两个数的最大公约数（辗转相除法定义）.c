//输入两个数，求这两个数的最大公约数（辗转相除法定义）	

#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	printf("请输入两个数:\n");
	scanf("%d %d",&m,&n);//大的除以小的

	if (m < n)//需要进行数据交换，要大的除以小的
	{	
		int tem = m;
		m = n;
		n = tem;

	}
	while (m % n != 0)
//辗转相除法原理，大数m除以小数n，余数r=0，则n为最大公约数，如何把n赋给m，r赋给n，继续循环
	{
		r = m % n;
		m = n;
		n = r;

	}
	printf("最大公约数：%d\n",n);
	return 0;
}

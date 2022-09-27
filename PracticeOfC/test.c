#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//1.判断大小端
//int i=1; 00000001
//低地址		高地址		
//[][][][][][][][][][]
//0x01000000小端
//0x00000001大端
//int Is_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int Is_sys()
//{
//	union Un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//int main()
//{
//	int ret = Is_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//	
//}
//2.数组的排序
//冒泡排序
//int main()
//{
//	int arr[5] = { 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//	return 0;
//}
//qsort排序法
//int cmp_by_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[5] = { 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_by_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	return 0;
//}
//3.my_Sort函数
//int cmp_by_int(void* e1,void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buff1, char* buff2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = tmp;
//		buff1++;
//		buff2++;
//	}
//}
//void my_qsort(void*base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_by_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//4.判断是否为闰年
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d年不为闰年\n");
//	}
//	return 0;
//}
//5.打印1000-2000年间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//6.打印99乘法口诀表
//int main()
//{
//	for (int i = 1; i<=9;i++)
//	{
//		for (int j = 1; j<=i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//7.有序数组的二分查找
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = 5;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找打%d了，下标为%d\n",k, mid);
//			break;//**
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//8.不使用累计乘法计算2的n次方值
//int main()
//{
//	int n = 0;
//	//多组输入--整形
//	while (scanf("%d", &n) != EOF)
//	{
//		//2的n次方的计算
//		printf("%d\n", 1<< n);
//	}
//	return 0;
//}
//9.找出100-10000中的水仙花数
//655=6*55+65*5
//int main()
//{
//	for (int i = 100; i <= 10000; i++)
//	{
//		int sum = 0;
//		//判断i是否为水仙花数 
//		for (int j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j) * (i%j);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//10.字符串转变为整数
//int fun(char* str)
//{
//	int x = 0;
//	while (*str)
//	{
//		x = *str - '0' + 10 * x;
//		str++;
//	}
//	return x;
//}
//int main()
//{
//	char str[20];
//	gets(str);
//	int x = 0;
//	x=fun(str);
//	printf("%d ", x);
//	return 0;
//}
//11.统计数组中能被x整除的个数，
//并不能被整除的元素之和
//void fun(int *arr, int sz,int x, int* count, int*sum)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % x == 0)
//		{
//			(*count)++;//*
//		}
//		else
//		{
//			*sum += arr[i];
//		}
//	}
//}
//int main()
//{
//	int x = 3;
//	int arr[] = { 1, 7, 8, 6, 10, 15, 11, 13, 29, 31 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = 0; int sum = 0;
//	fun(arr, sz, x, &count, &sum);
//	printf("%d %d \n", count, sum);
//	return 0;
//}
//12.计算整数n因子之和
//void fun(int n, int*sum)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			*sum += i;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	fun(n, &sum);
//	printf("%d ", sum);
//}
//13.结构体中学生信息按高到低排
//typedef struct 
//{
//	int num;
//	int score;
//}S;
//void fun(S *s)
//{
//	for (int i = 0; i < 3 - 1; i++)
//	{
//
//	}
//}
//int main()
//{
//	S s[3] = { { 1, 20 }, { 2, 30 }, { 3, 100 } };
//	fun(&s);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d%d", s[i].num, s[i].score);
//	}
//	return 0;
//}
//2002.9.20
//14.计算包括n以内能被5或者9整除的所有自然数的倒数之和
//double fun(int n)
//{
//	double s = 0;
//	for (int i = 1; i <= n; i++)//i从1开始
//	{
//		if (i % 5 == 0 || i % 9 == 0)
//		{
//			s += 1.0/i;
//		}
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lf\n", fun(n));
//}
//15.计算并输出包括3到包括n之间所有素数的平方根之和（n>2,n<=100）
//double fun(int n)
//{
//	double s = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			s += sqrt(i);
//		}
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lf\n", fun(n));
//}
//16.打印字符串中ASCII值为偶数的字符串
//void fun(char *a, char*t)
//{
//	while (*a)
//	{
//		if (*a % 2 == 0)
//		{
//			*t = *a;
//			t++;
//		}
//		a++;
//	}
//	*t = 0;
//}
//int main()
//{
//	char a[20]; 
//	char t[20];
//	gets(a);
//	fun(a, t);
//	puts(t);
//	return 0;
//}
//17.n个幂数之和
//#define N 5
//struct mpow
//{
//	double a;//底数
//	int t;//指数
//};
//double fun(struct mpow* x, int n)
//{
//	double sum = 0;
//	double t = 1;
//	for (int i = 0; i < n; i++)
//	{
//	//1.	/*for (int j = 1; j <= x[i].t; j++)
//	//	{
//	//		t *= x[i].a;
//	//	}
//	//	sum += t;
//	//	t = 1;
//	/*2.*/	sum += pow(x[i].a, x[i].t);
//	}
//	return sum;
//}
//int main()
//{
//	struct mpow	x[N] = { { 12, 0 }, { 9, 2 }, { 23, 1 }, { 7, 2 } };
//	double sum = fun(x, 4);
//	printf("%lf ", sum);
//}
//18.Sn=1-1/2+1/3+........+1/2n-1 -1/2n;
//double fun(int n)
//{
//	double sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum += 1.0 / i;
//		}
//		else
//			sum += -1*1.0 / i;
//		//sum += (1.0 / (2 * i - 1) - 1.0 / (2 * i));
//
//
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum=fun(n);
//	printf("%lf", sum);
//}
//19.将数组中指定元素删除，再打印之后的数组和个数
//输入 nums=[0,1,2,2,3,0,4,2] val=2;
//输出 5，nums=[0,1,3,0,4]
//int fun1(int nums[], int val, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (nums[i] == val)
//		{
//			for (int j = i+1; j < sz; j++)
//			{
//				nums[j-1] = nums[j];
//			}
//			i--;
//			sz--;
//		}
//	}
//	return sz;
//}
//int fun2(int nums[], int val, int sz)
//{
//	int tmp[10] = { 0 };
//	for (int i = 0; i < sz; i++)
//	{
//		tmp[i] = nums[i];
//		nums[i] = 0;
//	}
//	int j = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (tmp[i] != val)
//		{
//			nums[j] = tmp[i];
//			j++;
//		}
//	}
//	return j;
//}
//fun3(int nums[], int val, int sz)
//{
//	int str1 = 0, str2 = 0;
//	while (str1 < sz)
//	{
//		if (nums[str1] != val)
//		{
//			nums[str2] = nums[str1];
//			str1++; str2++;
//		}
//		else
//			str1++;
//	}
//	return str2;
//}
//int main()
//{
//	int nums[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
//	int val = 2;
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret=fun1(nums, val, sz);
//	//int ret = fun2(nums, val, sz);
//	//int ret = fun3(nums, val, sz);
//	//memcpy(tmp, nums, sizeof(int)* sz);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}
//20.阶乘plus
//typedef struct 
//{
//	int n;
//	int num;
//}N;
//int fun(int n)
//{
//	static N sum = { 0, 1 };
//	if (n == sum.n)
//		return sum.num;
//	else if (n > sum.n)
//	{
//		for (int i = sum.n+1; i <= n; i++)
//		{
//			sum.num *= i;
//		}
//	}
//	else
//	{
//		for (int i = sum.n; i > n; i--)	
//		{
//			sum.num /= i;
//		}
//	}
//	sum.n = n;
//	return sum.num;
//}
//int main()
//{
//	N p;
//	int input = 0;
//	scanf("%d", &input);
//	for (int i = 0; i < input; i++)
//	{
//		p.n = rand() % 7;
//		printf("%d %d ",p.n,fun(p.n));
//		printf("\n");
//	}
//}
//21.保留两位小数并四舍五入
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	printf("%f", (int)(n * 100 + 0.5) / 100.0);
//}
//22.将整数每一位的偶数由低到高输出
//输入 27638496
//输出 64862
//int main()
//{
//	int sum = 0;
//	int n = 27638496;
//	while (n)
//	{
//		
//		if ((n % 10) % 2 == 0)
//		{	sum *= 10;
//			sum += (n % 10);
//		}
//		n /= 10;
//	}
//	printf("%d ", sum);
//}
//23.对字符串由ASCII从高到低排//???
//GABCDeFGH
//eGABCDFGH
//int main()
//{
//	char p[20] = "GABCDeFGH";
//	char* q = p;
//	int len = strlen(p);
//	//printf("%d", len);
//	char max = p[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (p[i] > max)
//		{
//			max = p[i];
//			q = p + i;
//		}
//	}
//	while (q > p)
//	{
//		*q = *(q - 1);
//		q--;
//	}
//	p[0] = max;
//	puts(p);
//}
//24.选择语句猜数字
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 10;
//	printf("%d\n", num);
//	int k = 0;
//	printf("请输入:>");
//	scanf("%d", &k);
//	if (k == num)
//	{
//		printf("第一次就猜对了\n");
//	}
//	else
//	{
//		if (k > num)
//			printf("猜大了\n");
//		else
//			printf("猜小了\n");
//		printf("请输入:>");
//		scanf("%d", &k);
//		if (k == num)
//		{
//			printf("第二次猜对了\n");
//		}
//		else
//		{
//			if (k > num)
//				printf("猜大了\n");
//			else
//				printf("猜小了\n");
//			printf("请输入:>");
//			scanf("%d", &k);
//			if (k == num)
//			{
//				printf("第三次猜对了\n");
//			}
//			else
//			{
//				printf("没机会了\n");
//			}
//		}
//	}
//	return 0;
//}
//25.循环语句猜数字
int main()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 10;
	printf("%d\n", num);
	int k = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("请输入:>");
		scanf("%d", &k);
		if (k == num)
		{
			printf("第%d次猜对了", i+1);
			break;
		}
		else 
		{
			if (i < 2)
			{
				if (k > num)
					printf("猜大了\n");
				else
					printf("猜小了\n");
			}
			else
			{
				printf("没机会了\n");
			}
		}
	}
	return 0;
}

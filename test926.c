#include<stdio.h>
#include<string.h>
int main()
{
	char s[] = "026\bd\\6";
	//printf("%s","\x11");
	printf("%d\n",(int) strlen(s));
	puts(s);
	return 0;
}

#include <cstdio>
int main(void)
{
	char ch;
	while ( ( ch = getchar()) != EOF )
	{
		if ( ch != '\n' )
			printf("\'%c\'\n",ch);
	}
	return 0;
}
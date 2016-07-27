#include <iostream>
#include <cstdio>
#include <stack>
#include <cmath>

using namespace std;

stack < int > container;

int main(void)
{
	int N;
	scanf("%d",&N);

	while ( container.size() < 5 )
	{
		container.push( N%10 );
		N /= 10;
	}

	while ( !container.empty() )
	{
		printf("[%d]\n", container.top()*(int)pow(10,container.size()-1));
		container.pop();
	}
	
	return 0;
}
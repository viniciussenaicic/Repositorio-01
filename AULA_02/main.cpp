#include <stdio.h>

int main(int argc, char** argv) {
	//clrs()
	
	int A = 5;
	int B = 4;
	
	if (A > B)
	{
		printf("A eh maior que B!\n");	
	}
	else
	{
		if (A < B)
		{
			printf("B eh maior que A! \n");
		}
		else 
		{
			printf("B eh igual a A! \n");
		}
	}
	return 0;
}

#include <iostream>



int main(int argc, char** argv) {
	 int A = 0;
	 int B = 0;
	 
	 printf (" Informe um valor A: \n ");
	 
	 scanf ("%i", & A );
	 
	 printf (" Informe um valor B: \n ");
	 
	 scanf ("%i", & B );
	 
	 if (A < B)
	 {
	 	printf ("A eh menor que B");

	 }
	 
	 else
	 {
	 	if (A > B)
			{
			printf ("A eh maiorr que B");
			}
			else
			{
				if (A = B)
				{
					printf ("A eh igual que B");
				}
			}
	 }
	 
	return 0;
}

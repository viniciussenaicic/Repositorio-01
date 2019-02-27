#include <iostream>

int main(int argc, char** argv) {
	 float A = 0;
	 float B = 0;
	 int   C = 0;
	 printf (" Informe um valor A: \n ");
	 
	 scanf ("%f", & A );
	 
	 printf (" Informe um valor B: \n ");
	 
	 scanf ("%f", & B );
	 
	 printf ("Sera efetuado as seguintes opreações \n ");
	 
	 printf ("1 para soma \n 2 para subtracao\n 3 para multiplicacao\n 4 para divisao\n");
	 
	 scanf ("%i", & C );
	 
	 switch (C)
	{
		case 1:
	     printf ("A soma eh %f \n", A+B);
	   break;
	
	    case 2:
	     printf ("A subtracao eh %f\n", A-B);
	   		break;
	
		case 3:
	     printf ("A subtracao eh %f\n", A-B);
	   		break;
	   
		case 4:
	     printf ("A subtracao eh %f\n", A-B);
	   		break;
	   
    
	}
return 0;
}

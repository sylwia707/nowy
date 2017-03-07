#include <iostream>
#include <stdlib.h>
#include "naglowek1.h"
using namespace std;
int main()
{	int a = 2;
	cout <<"Zmiana zmiana.  Hello s!" <<endl;
	dodawanie(a,2);
	mnozenie(2,2);




		char *ptr1;
               char *ptr2;
       
               ptr1 = (char *) malloc(512);
               ptr2 = (char *) malloc(512);
       
              ptr1=ptr2;
       
              free(ptr1);
              free(ptr2);
	return 0;
}

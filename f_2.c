#include <stdio.h>
#define CLS printf("\033c\n")

int main()   {
   int x, y = 1, z;
		
		CLS;
   if ( y != 0 ) x = 5;
   printf ("x = %d\n",x); //5               

   if (y==0) x=3; 
   else x = 5;
   printf ("x = %d\n",x); //5             

   x = 1;
   if (y < 0) {
   	if (y > 0) x=3; 
   		else x = 5; //правило: оператор, следующий за else, относится к ближайшему if
   		}
   printf ("x = %d\n",x); //1               

   if (z = (y < 0) ) x = 3;//z=(1<0); z = ЛОЖЬ; if (ЛОЖЬ) x = 3; Так как условие первого if - ЛОЖЬ, выполняется вторая часть этого оператора
   	else if (y==0) x=5;
   			else x=7;
   printf ("x = %d; z = %d\n",x, z); //x = 7; z = 0             

   if (z = (y==0)) { x=5; }
   x=3;
   printf ("x = %d; z = %d\n",x, z);// x = 3; z = 0

   if (x = (z = y)); { ; } // (x=(z=y)) => (x=(z=1)) => x=1 и z=1 => TRUE; Условие - ИСТИНА, поэтому выполняется первая часть оператора, но поскольку там пустой оператор, то выполняется оператор, следующий за условным.
   x = 3;
   printf ("x = %d\n",x); //3              
}

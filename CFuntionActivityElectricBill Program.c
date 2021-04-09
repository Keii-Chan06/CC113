#include <stdio.h>
#include <string.h>  
void main()
{  
   int considid, cons;
   float chg, surchg=400, gramt, netamt;
   char connm[33];

   printf("Input Customers ID :");
   scanf("%d",&considid);
   printf("Input the unit consumed by the consumer : ");
   scanf("%d",&cons);
   if (cons <199 )
	chg = 1.50;
   else	if (cons>=250 && cons<400)
		chg = 1.60;
	else if (cons>=450 && cons<600)
			chg = 1.85;
		else if (cons>600)
			chg = 2.00;
   gramt = cons*chg;
   if (gramt>400)
	surchg = gramt*40/400.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\n[Electricity Bil]\n");
   printf("Customer ID#                         :%d\n",considid);
   printf("Unit Consumed                        :%d\n",cons);
   printf("Unit charges @P.%2.00000f per unit   :P%8.2f\n",chg,gramt);
   printf("Surchage Amount                      :P%8.2f\n",surchg);
   printf("Total Customer Bill                  :P%8.2f\n",netamt);

}
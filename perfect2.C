

/*	This function determines if a counter value receaved
	from the main program is a perfect number. If it is
        that value will be printed. The function will terminate
        program execution after the fourth perfect number is
        found.
*/

per(x,c)
int *c;
{
	int i,sum=0;
	for(i=1;i<=x;++i)
         {
	  if (x % i == 0)
          sum=sum+i;
         }
	sum=sum-x;
	if(x==sum)
     {
	printf("Perfect Number %d is %4d\n",*c+1,sum);
	++*c;
	if (*c==4)
          {
            printf("------------------------\n");
	    exit(0);
          }
     }
}

#define LYNE "------------------------\n"

main ()
  {
/*	Define Variables	
        k=counter var,a=termination var	*/

 	int k,a=0;
/*	Print Header lines	*/
	printf("     Perfect Numbers\n");
	printf(LYNE);

      {

/*	Generate a counter value that will be transmitted
	along with the termination variable to function "per"
*/

	for(k=1;k<=30000;++k)
	per(k,&a);
      }

   }
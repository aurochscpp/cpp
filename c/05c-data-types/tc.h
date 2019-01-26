
#include <stdio.h>
#include <limits.h>

int main()
{
	/*	
		类型	          存储大小	   值范围
		char	          1 byte	    -128 到 127 或 0 到 255
		unsigned char	  1 byte	    0 到 255
		signed char	      1 byte	    -128 到 127
		int	              2 或 4 bytes	-32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647
		unsigned int	  2 或 4 bytes 	0 到 65,535 或 0 到 4,294,967,295
		short	          2 bytes	    -32,768 到 32,767
		unsigned short	  2 bytes	    0 到 65,535
		long	          4 bytes	    -2,147,483,648 到 2,147,483,647
		unsigned long	  4 bytes	    0 到 4,294,967,295
	*/
	
   printf("Storage size for int : %d \n", sizeof(unsigned long));
   
   return 0;
}


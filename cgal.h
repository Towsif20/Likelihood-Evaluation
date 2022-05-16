#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * toupper(char *contig)
{
	long int i=0;
	char c;
	while (contig[i])
  	{
    		c=contig[i];
    		contig[i]=toupper(c);
    		i++;
  	}
	return contig;
}
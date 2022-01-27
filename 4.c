#include <stdio.h>

void main()
{
	int successful;
	char fname[20];
	printf("Remove a file from the disk :\n");
	printf("Input the name of the file to be deleted : ");
	scanf("%s",fname);
	successful=remove(fname);
	if(successful==0)
	{
		printf(" The file %s is deleted successfully\n\n",fname);
	}
	else
	{
		printf(" Unable to delete file %s\n\n",fname);
	}
}

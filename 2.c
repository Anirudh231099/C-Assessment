#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int linecount, wordcount, charcount;

 // Initialize variables
 linecount = 0;
 wordcount = 0;
 charcount = 0;

  printf("Enter a filename :");//ask user input
  gets(filename);

   fp = fopen(filename,"r");//read mode
   if ( fp )
   {
	//Repeat until End Of File character is reached.
	   while ((ch=getc(fp)) != EOF) {
	   	  // Increment character count if NOT new line or space
		    if (ch != ' ' && ch != '\n') { ++charcount; }

		  // Increment word count if new line or space character
		   if (ch == ' ' || ch == '\n') { ++wordcount; }

		  // Increment line count if new line character
		   if (ch == '\n') { ++linecount; }
		   }

	   if (charcount > 0) {
		++linecount;
		++wordcount;
	   }
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

getchar();
return(0);
}

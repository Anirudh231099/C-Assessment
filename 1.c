#include <stdio.h>
    int main ()
    {
      FILE * fp;
      int i,n;
      char str[20];
      printf("Enter the number of lines to be written: ");//3
      scanf("%d", &n);
      fp = fopen ("abc.txt","w");
      for(i = 0; i < n+1;i++) //(i=0;0<4;i++)
      {
        gets(str);
        fputs(str, fp);
        fputs("\n", fp);
      }

      fclose (fp);
      return 0;
    }

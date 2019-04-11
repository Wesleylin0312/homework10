#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char W[5000];
  while(scanf("%s",W)==1) 
      {
         int a,N=strlen(W);
         for(a=N-1;a>=0;a--)
             if(W[a]>='a')  
               printf("%c",W[a]-'a'+'A'); 
             else 
               printf("%c",W[a]-'A'+'a');
          puts(""); 
      } 
 system ("pause");
 return 0;   
}

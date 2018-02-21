#include <stdio.h>
#include <string.h>
#define BUFFERSIZE 100
int main()
{
   // printf() displays the string inside quotation
   char name[BUFFERSIZE];
//   fgets(name,BUFFERSIZE,stdin);
//   char name;
   scanf("%[^\n]s",name);
   if(name[0] == '\0'){
      printf("Hello, World!\n");
   } else{
   		printf("asdasd\n");
      printf("Hello, %s!\n",name);
   }
   return 0;
}

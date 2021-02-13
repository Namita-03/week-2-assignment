#include <stdio.h>
#include <string.h>
 
int main()
{
char str[100];
int i,word=1;
printf("Enter any String :  ");
gets(str);
for(i = 0; str[i] != '\0'; i++)
{
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
word++;	
} 
}	
printf("\n The Total Number of Words in this String %s=%d",str,word);
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
    int i,m,n,cnt,len;
	char str[500],unq[500]={0};
	printf("Enter String:");
	gets(str);
	len=strlen(str);
	m=0;
    for(i=0;i<len;i++)
    {
    	cnt=0;
    	for(n=0;n<i;n++)
    	{
    	   if(str[i]==unq[n])
    	          {
    		     cnt++;
		  }
	    }
		if(cnt==0)
		   {
			unq[m++]=str[i];
		   }  
	}
	printf("The Unique Characters in String:");
	puts(unq);
	getch();	
}

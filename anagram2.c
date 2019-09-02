#include<string.h>
#include <stdio.h> 
#define N 256 


int stringLwr(char *s1, char *s2)
{
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if((s1[i]>='A' && s1[i]<='Z') && (s2[i]>='A' && s2[i]<='Z'))
	{
            s1[i]=s1[i]+32;
	    s2[i]=s2[i]+32;

	    if(s1[i]==s2[i])
		printf("strings are anagram \n");
	}
        ++i;
    }
   
}
 
int stringUpr(char *s1, char *s2)
{
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if((s1[i]>='a' && s1[i]<='z') && (s2[i]>='a' && s2[i]<='z'))
	{
            s1[i]=s1[i]-32;
	    s2[i]=s2[i]-32;

	    if(s1[i]==s2[i])
		printf("strings are anagrams \n");
        }
        ++i;
    }
  
}

int checking_anagram2(char *str1, char *str2)
{
	int i;
	for(i = 0; i != str1['\0'] && i != str2['\0']; ++i)
	{
	 	if(/*stringLwr(str1,str2)||stringUpr(str1,str2)||*/(str1[i],str2[i]) == '!'||(str1[i],str2[i]) == '@'||(str1[i],str2[i])== '#'||(str1[i],str2[i]) == '$'||(str1[i],str2[i]) == '%'||(str1[i],str2[i]) == '^'||(str1[i],str2[i]) == '&'||(str1[i],str2[i]) == '*'||(str1[i],str2[i]) == '('||(str1[i],str2[i]) == ')'||(str1[i],str2[i]) == '-'||(str1[i],str2[i]) =='_'||(str1[i],str2[i]) == '/'||(str1[i],str2[i]) == '+' || (str1[i],str2[i]) == ' ')
		 return 1;

	}
}
int main() 
{ 
	char str1[N],str2[N];

	printf("Enter first string : \n");
	fgets(str1,256,stdin);
	
	printf("Enter second string : \n");
	fgets(str2,256,stdin);
	
	if ((strlen(str1)==strlen(str2)) && checking_anagram2(str1,str2) && (stringLwr(str1,str2)||stringUpr(str1,str2)))
		 
		printf("The two strings are anagram of each other\n"); 
	else
		printf("The two strings are not anagram of each other\n"); 

	return 0; 
} 

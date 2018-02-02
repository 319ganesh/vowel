#include<stdio.h>

main()
{
char choice;

printf("\n enter the character:");
scanf("%c",&choice);
switch(choice)
{
case 'a':
printf("\n %c is a vowel");
break;
case 'e':
printf("\n %c is a vowel");
break;
case 'i':
printf("\n %c is a vowel");
break;
case 'o':
printf("\n %c is a vowel");
break;
case 'u':
printf("\n %c is a vowel");
break;
default:
printf("\n %c is a constant");
break;
}

return 0;
}

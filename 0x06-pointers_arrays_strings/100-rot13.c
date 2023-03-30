#include "main.h"
/**
 * *rot13 - encoder rod13
 * @s: string
 * Return: *s
 */
char *rot13(char *s)
{
int i;
int j;

char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for  (j = 0; j < 52; j++)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
break;
}
}
}
return (s);
}

#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int i = 0, x = 0, y = 0, z = 0;
while (s1[i] != '\0')
{
i++;
}
while (s2[x] != '\0')
{
x++;
}
s = malloc((i * sizeof(char)) + ((x + 1) * sizeof(char)));
if (s == NULL)
{
return (NULL);
}
while (s1[y] != '\0')
{
s[y] = s1[y];
y++;
}
while (s2[z] != '\0')
{
s[y] = s2[z];
y++;
z++;
}
s[y] = '\0';
return (s);
}

#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to destination
 * @src: copy from string
 * Return: string results
 */
char *_strcpy(char *dest, char *src)	/*line defines fuction of src and dest*/
{
	int l = 0;
	int x = 0;	/*this line describes two integer variables*/

	while (*(src + l) != '\0')
	{
		l++;	/*while loop is used to find source string*/
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';	/*null character is added to terminate program*/
	return (dest);
}

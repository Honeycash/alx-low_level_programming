#include "main.h"
#include <unistd.h>
/**
 * _puchar - writes the character to stdout
 * @c: The character is print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropraitly.
 */
int _puchar(char c)
{
return (write(1, &c, 1));
{

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t[] = "cifs";
if (format[i] == t_arg[j] && c)
				{
									printf(", ");
													break;
																} j++;
		}
		switch (format[i])
			{
						case 'c':
										printf("%c", va_arg(valist, int)), c = 1;
													break;
															case 'i':
																printf("%d", va_arg(valist, int)), c = 1;
																			break;
																					case 'f':
																						printf("%f", va_arg(valist, double)), c = 1;
																									break;
																											case 's':
																												str = va_arg(valist, char *), c = 1;
																															if (!str)
																																			{
																																								printf("(nil)");
																																												break;
																																															}
																																		printf("%s", str);
																																					break;
																																							} i++;
	}
	printf("\n"), va_end(valist);if (format[i] == t_arg[j] && c)
				{
									printf(", ");
													break;
																} j++;
		}
		switch (format[i])
			{
						case 'c':
										printf("%c", va_arg(valist, int)), c = 1;
													break;
															case 'i':
																printf("%d", va_arg(valist, int)), c = 1;
																			break;
																					case 'f':
																						printf("%f", va_arg(valist, double)), c = 1;
																									break;
																											case 's':
																												str = va_arg(valist, char *), c = 1;
																															if (!str)
																																			{
																																								printf("(nil)");
																																												break;
																																															}
																																		printf("%s", str);
																																					break;
																																							} i++;
	}
	printf("\n"), va_end(valist);
}

#include "main.h"

/************************* PRINT CHAR *************************/

/**
 *  * print_char - Prints a char
 *   * @types: List a of arguments
 *    * @buffer: Buffer array to handle print
 *     * @flags:  Calculates active flags
 *      * @width: Width
 *       * @precision: Precision specification
 *        * @size: Size specifier
 *         * Return: Number of chars printed
 *          */
int print_char(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
		char c = va_arg(types, int);

			return (handle_write_char(c, buffer, flags, width, precision, size));
}
/************************* PRINT A STRING *************************/
/**
 *  * print_string - Prints a string
 *   * @types: List a of arguments
 *    * @buffer: Buffer array to handle print
 *     * @flags:  Calculates active flags
 *      * @width: get width.
 *       * @precision: Precision specification
 *        * @size: Size specifier
 *         * Return: Number of chars printed
 *          */
int print_string(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
		int length = 0, 

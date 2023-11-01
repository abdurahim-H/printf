# 🖨️ Printf Project

## 📖 Overview
This project is a recreation of the famous C library function, `printf`. 
The goal is to understand the inner workings of this type of function, and recreate it.

## 🛠 Usage
```c
int ft_printf(const char *format, ...);

* format is a string that contains text to be written to stdout.																																													 It can optionally contain embedded format specifiers that starts with a % character. 																																								These format specifiers get replaced by the values specified 																																														 in subsequent additional arguments and formatted as requested.

* ... represents the variable number of additional arguments.

* The function returns the number of characters printed, or a negative value if an error occurs.

📝 Example

#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    return 0;
}
This example prints "Hello, World!" to the console.

int main() {
	int num = 42;
	int *ptr = &num;
	ft_printf("The address of num is: %p\n", ptr);
	return 0;
}

In this example, ft_printf is called with a format string and a pointer argument. 
The format string contains a format specifier (%p), which corresponds to the pointer argument. 
The ft_printf function prints the string "The address of num is: 0x7fff5fbff710\n" (or similar) 
to the standard output, where "0x7fff5fbff710" is the address of num.

int main() {
	char *str = "Hello, world!";
	ft_printf("This is a string: %s\n", str);
	return 0;
}

In this example, ft_printf is called with a format string and a string argument. 
The format string contains a format specifier (%s), which corresponds to the string argument. 
The ft_printf function prints the string "This is a string: Hello, world!\n" to the standard output.

📚 Supported Format Specifiers
The ft_printf function supports the following format specifiers:

* %d or %i: Print an integer.
* %s: Print a string.
* %c: Print a character.
* %p: Print a pointer.
* %u: Print an unsigned integer.
* %x: Print an unsigned integer in hexadecimal (lowercase).
* %X: Print an unsigned integer in hexadecimal (uppercase).
* %%: Print a percent sign.

# Error Handling

If a function call within custom_printf fails, it returns -1 to indicate an error. 
Otherwise, it returns the total number of characters printed.

```
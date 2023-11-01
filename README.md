# **Custom Printf Function**

This repository contains a custom implementation of the `printf` function in C. 

## **Usage**

Here's an example of how to use the `ft_printf` function:

```c
int main() {
	ft_printf("This is an example: %d + %d = %d\n", 5, 3, 5 + 3);
	return 0;
}

In this example, ft_printf is called with a format string and three integer arguments. 
The format string contains three format specifiers (%d), which correspond to the three integer arguments. 
The ft_printf function prints the string "This is an example: 5 + 3 = 8\n" to the standard output.

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

# Format Specifiers
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
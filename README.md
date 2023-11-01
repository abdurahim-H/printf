# **Custom Printf Function**

This repository contains a custom implementation of the `printf` function in C. 

## **Usage**

Here's an example of how to use the `custom_printf` function:

```c
int main() {
	custom_printf("This is an example: %d + %d = %d\n", 5, 3, 5 + 3);
	return 0;
}

In this example, custom_printf is called with a format string and three integer arguments. The format string contains three format specifiers (%d), which correspond to the three integer arguments. The custom_printf function prints the string "This is an example: 5 + 3 = 8\n" to the standard output.

# Format Specifiers
The custom_printf function supports the following format specifiers:

* %d or %i: Print an integer.
* %s: Print a string.
* %c: Print a character.
* %p: Print a pointer.
* %u: Print an unsigned integer.
* %x: Print an unsigned integer in hexadecimal (lowercase).
* %X: Print an unsigned integer in hexadecimal (uppercase).
* %%: Print a percent sign.

# Error Handling

If a function call within custom_printf fails, it returns -1 to indicate an error. Otherwise, it returns the total number of characters printed.

```
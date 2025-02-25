# 📚 Libft 📚

## 🌟 Overview
Libft is a custom C library implementing many standard library functions from scratch. This project serves as a foundation for C programming at 42 School, providing essential tools that will be used in future projects.

## 🎯 Purpose
The goal of this project is to:
- Understand how standard library functions work behind the scenes 🔍
- Create personal versions of common functions for future use 🛠️
- Practice C programming fundamentals including memory management 💾
- Build a solid foundation for more complex projects 🏗️

## 📋 Function Categories

### 📊 Character Classification
- `ft_isalpha` - Checks if a character is alphabetic
- `ft_isdigit` - Checks if a character is a decimal digit
- `ft_isalnum` - Checks if a character is alphanumeric
- `ft_isascii` - Checks if a character is in the ASCII character set
- `ft_isprint` - Checks if a character is printable

### 🔄 Character Conversion
- `ft_toupper` - Converts a letter to uppercase
- `ft_tolower` - Converts a letter to lowercase

### 📝 String Manipulation
- `ft_strlen` - Calculates the length of a string
- `ft_strlcpy` - Copies a string with size limitation
- `ft_strlcat` - Concatenates strings with size limitation
- `ft_strchr` - Locates first occurrence of a character in string
- `ft_strrchr` - Locates last occurrence of a character in string
- `ft_strncmp` - Compares two strings up to n characters
- `ft_strnstr` - Locates a substring in a string, with limited search
- `ft_strdup` - Creates a duplicate of a string
- `ft_substr` - Extracts a substring from a string
- `ft_strjoin` - Concatenates two strings
- `ft_strtrim` - Trims specified characters from start and end of string
- `ft_split` - Splits string into array of substrings based on delimiter
- `ft_strmapi` - Applies function to each character in string with index
- `ft_striteri` - Applies function to each character in string with index

### 💭 Memory Operations
- `ft_memset` - Fills memory with a constant byte
- `ft_bzero` - Zeros out a byte string
- `ft_memcpy` - Copies memory area
- `ft_memmove` - Copies memory area safely (handles overlap)
- `ft_memchr` - Locates byte in byte string
- `ft_memcmp` - Compares byte string
- `ft_calloc` - Allocates memory and sets it to zero

### 🔢 Number Handling
- `ft_atoi` - Converts a string to an integer
- `ft_itoa` - Converts an integer to a string

### 🖨️ File Descriptor Operations
- `ft_putchar_fd` - Outputs a character to given file descriptor
- `ft_putstr_fd` - Outputs a string to given file descriptor
- `ft_putendl_fd` - Outputs a string with newline to file descriptor
- `ft_putnbr_fd` - Outputs an integer to given file descriptor

## 📦 Requirements
- GCC compiler
- Make build system
- Standard C library

## 🛠️ Compilation
Use the provided Makefile to compile the library:

```bash
make
```

This will create the `libft.a` static library.

To remove the object files:
```bash
make clean
```

To remove both object files and the library:
```bash
make fclean
```

To rebuild the library:
```bash
make re
```

## 📁 Project Structure

### Detailed File Structure 📂
```
libft/
├── Makefile          # Compilation rules
├── libft.h           # Header file with function prototypes
├── ft_isalpha.c      # Character classification functions
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_toupper.c      # Character conversion functions
├── ft_tolower.c
├── ft_strlen.c       # String manipulation functions
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strdup.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_memset.c       # Memory operation functions
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_calloc.c
├── ft_atoi.c         # Number handling functions
├── ft_itoa.c
├── ft_putchar_fd.c   # File descriptor functions
├── ft_putstr_fd.c
├── ft_putendl_fd.c
└── ft_putnbr_fd.c
```

## 💡 Usage
Include the header file in your C programs:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
gcc your_program.c -L. -lft -o your_program
```

## 🧪 Example Code

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";
    
    // Using string functions
    printf("Length: %zu\n", ft_strlen(str));
    
    // Using character functions
    printf("Is 'H' alphabetic? %d\n", ft_isalpha('H'));
    
    // Using memory functions
    char buffer[20];
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    printf("Buffer after memset: %s\n", buffer);
    
    // Using conversion functions
    printf("'a' to uppercase: %c\n", ft_toupper('a'));
    
    return 0;
}
```

## 🎓 Learning Goals

By working on this project, you will gain experience with:

- 📏 Proper memory allocation and management
- 🧩 Creating modular and reusable code
- 🔧 Implementing standard library functions
- 💪 Understanding pointers and arrays in C
- 🔍 Handling edge cases and input validation
- 📝 Writing well-documented code

## 🛡️ Tips for Implementation

- 🚨 Always check for NULL pointers
- 🧪 Test edge cases (empty strings, max/min values)
- 📊 Consider performance implications
- 🧠 Understand each function before implementing it
- 💡 Use simple helper functions when appropriate

## 📜 License
This code is licensed under the MIT license.

## 🔄 Continuous Improvement
This library is meant to be expanded over time with:
- 📈 New utility functions
- ⚡ Performance optimizations 
- 📚 More thorough documentation

Happy coding! 🚀

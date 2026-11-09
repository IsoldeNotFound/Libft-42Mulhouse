*This project has been created as part of the 42 curriculum by clstorre.*

# Libft

## Description

Libft is a reusable C library that recreates selected standard C library
functions with an `ft_` prefix and adds common string, conversion, output, and
linked-list utilities. It is built as the static archive `libft.a` and can be
linked into other C programs.

The library currently provides:

- **Character checks and conversions:** `ft_isalpha`, `ft_isdigit`,
	`ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
- **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
	`ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **String operations:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
	`ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- **Additional string utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`,
	`ft_split`, `ft_strmapi`, `ft_striteri`.
- **Conversions:** `ft_atoi`, `ft_itoa`.
- **File-descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`,
	`ft_putendl_fd`, `ft_putnbr_fd`.
- **Singly linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`,
	`ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
	`ft_lstmap`.

## Instructions

Run `make` from the project directory to compile the source files and create
`libft.a`. The Makefile uses `cc` with `-Wall -Wextra -Werror` by default.

Available targets:

```sh
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Clean and rebuild
```

There is no separate installation step. Include `libft.h` in your program and
link the archive with `-L. -lft`, for example:

```c
#include "libft.h"

int main(void)
{
    return (ft_strlen("Libft") != 5);
}
```

```sh
cc -Wall -Wextra -Werror -I. main.c -L. -lft -o app
```

## Resources

- The relevant C library manual pages, available with commands such as
	`man 3 strlen`, `man 3 memcpy`, and `man 2 write`.
- AI assistance was used to draft and organize this README, check its
	descriptions against the project files, and align its sections with the
	project requirements. It was not used to write or modify the C implementation
	as part of this documentation task.
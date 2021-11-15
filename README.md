# LIBFT
recoding standard libc

The aim of this projects is to reimplement some of the libc functions, and create our onw library "libft".

# Part 1: libc functions

the functions recoded without any exteranl functions:
 - memset
 - bzero
 - memcpy
 - memccpy
 - memmove
 - memchr
 - memcmp
 - strlen
 - strlcpy
 - strlcat
 - strchr
 - strrchr
 - strnstr
 - strncmp
 - atoi
 - isalpha
 - isdigit
 - isalnum
 - isascii
 - isprint
 - toupper
 - tolower
 
 the functions recoded using "malloc"
 - calloc
 - strdup
 
# Part 2: Additional functions
 
 - substr
 - strjoin
 - strtrim
 - split
 - itoa
 - strmapi
 - putchr_fd
 - putstr_fd
 - putendl_fd
 - putnbr_fd

# Bonus Part:

in this part we will be introduced to linked lists.

the following structure will be used the represent each element of the list:

typedef struct  s_list
{
  void          *content;
  struct s_list *next;
}               t_list;

the functions to implement are:
 - ft_lstnew (creates an element with content)
 - ft_lstadd_front (adds a new element to the front of the list)
 - ft_lstsize (returns the size of the list)
 - ft_lstlast (returns the last element)
 - ft_lstadd_back (adds a new element to the back of the list)
 - ft_lstdelone (deletes an elemrnt from the list using the function pased as argument)
 - ft_clear (deletes the given element and his succesors)

# LIBFT

This library contains the following functions:

## memory

 - ft_memset
 - ft_bzero
 - ft_memcpy
 - ft_memccpy
 - ft_memmove
 - ft_memchr
 - ft_memcmp

## string

 - ft_strlen
 - ft_strlcpy
 - ft_strlcat
 - ft_strchr
 - ft_strrchr
 - ft_strnstr
 - ft_strncmp
 
 ## ctype

 - ft_isalpha
 - ft_isdigit
 - ft_isalnum
 - ft_isascii
 - ft_isprint
 - ft_toupper
 - ft_tolower

 ## stdio

 - ft_printf
    
## custom

 - ft_substr
 - ft_strjoin
 - ft_strtrim
 - ft_split
 - ft_atoi
 - ft_itoa
 - ft_strmapi
 - ft_putchr_fd
 - ft_putstr_fd
 - ft_putendl_fd
 - ft_putnbr_fd

## linked list
    
The following structure is used the represent each element of the list:
   
```
typedef struct  s_list
{   
  void          *content;
  struct s_list *next;
}                t_list;
```

 - ft_lstnew (creates an element with content)
 - ft_lstadd_front (adds a new element to the front of the list)
 - ft_lstsize (returns the size of the list)
 - ft_lstlast (returns the last element)
 - ft_lstadd_back (adds a new element to the back of the list)
 - ft_lstdelone (deletes an elemrnt from the list using the function pased as argument)
 - ft_clear (deletes the given element and his succesors)


# 42Porto_libft

Libft. This project is about coding a C library. Libc functions, some additional functions for string manipulation, basics for linked lists.



## Libc functions
Implementation of functions from the libc. Functions with the same prototypes and the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference is the name: functions begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.  
Included functions (no external functions allowed): 
• isalpha
• isdigit
• tolower
• isalnum
• isascii • strchr
• isprint • strrchr
• strlen
• strncmp
• memset
• bzero • memchr
• memcpy • memcmp
• memmove
• strnstr
• strlcpy
• strlcat
• atoi  
Malloc allowed: • calloc
• strdup

## Additional functions
A set of functions that are either not in the libc,
or that are part of it but in a different form.  
For prototypes and description please refer to the subject pdf.  
Included funtions: 
• ft_substr
• ft_strjoin
• ft_strtrim
• ft_split
• ft_itoa
• ft_strmapi
• ft_striteri
• ft_putchar_fd
• ft_putstr_fd
• ft_putendl_fd
• ft_putnbr_fd
## Bonus functions (linked lists)
The following structure is used to represent a node in the list:
```C
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

```
Included funtions:  
• ft_lstnew - Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.  
• ft_lstadd_front - Adds the node ’new’ at the beginning of the list.  
• ft_lstsize - Counts the number of nodes in a list.  
• ft_lstadd_back - Adds the node ’new’ at the end of the list.  
• ft_lstdelone - Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.  
• ft_lstclear - Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.  
• ft_lstiter - Iterates the list ’lst’ and applies the function ’f’ on the content of each node.  
• ft_lstmap - Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
## Resources for linked lists

 - [General overview with pseudo-code from CS50](https://www.youtube.com/watch?v=zQI3FyWm144)
 - [Linked lists for beginners - Code Vault](https://www.youtube.com/watch?v=uBZHMkpsTfg&list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)
 - [Implementing linked lists - Jacob Sorber](https://www.youtube.com/watch?v=VOpjAHCee7c&t=500s)


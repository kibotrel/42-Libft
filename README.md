# Libft
The very first school project at 42. This repository contains everything to validate the project **libft** and all the function that I thought useful at some point in the cursus.

## Mandatory functions :
* **ft_atoi**
* **ft_bzero**
* **ft_isalnum**
* **ft_isalpha**
* **ft_isascii**
* **ft_isdigit**
* **ft_isprint**
* **ft_itoa**
* **ft_lstadd**
* **ft_lstdel**
* **ft_lstdelone**
* **ft_lstiter**
* **ft_lstmap**
* **ft_lstnew**
* **ft_memalloc**
* **ft_memccpy**
* **ft_memchr**
* **ft_memcmp**
* **ft_memcpy**
* **ft_memdel**
* **ft_memmove**
* **ft_memset**
* **ft_putchar**
* **ft_putchar_fd**
* **ft_putendl**
* **ft_putendl_fd**
* **ft_putnbr**
* **ft_putnbr_fd**
* **ft_putstr**
* **ft_putstr_fd**
* **ft_strcat**
* **ft_strchr**
* **ft_strclr**
* **ft_strcmp**
* **ft_strcpy**
* **ft_strdel**
* **ft_strdup**
* **ft_strequ**
* **ft_striter**
* **ft_striteri**
* **ft_strjoin**
* **ft_strlcat**
* **ft_strlen**
* **ft_strmap**
* **ft_strmapi**
* **ft_strncat**
* **ft_strncmp**
* **ft_strncpy**
* **ft_strnequ**
* **ft_strnew**
* **ft_strnstr**
* **ft_strrchr**
* **ft_strsplit**
* **ft_strstr**
* **ft_strsub**
* **ft_strtrim**
* **ft_tolower**
* **ft_toupper**

## Bonus functions :
* **ft_btree_create_node**
	```C
	t_btree	ft_btree_create_node(void *item);
	```
	Create a binary tree node (according to the structure defined in **libft.h**) in which you store ***`item`***.
* **ft_btree_apply_infix**
	```C
	t_btree	ft_apply_infix(t_btree *src, void (applyf)(void *));
	```
	Traverse a binary tree starting from ***`src`*** following the infix method and apply the function ***`applyf`*** on each node.
	(More informations about infix method -> https://en.wikipedia.org/wiki/Binary_expression_tree)
* **ft_btree_apply_prefix**
	```C
	t_btree	ft_apply_prefix(t_btree *src, void (applyf)(void *));
	```
	Traverse a binary tree starting from ***`src`*** following the prefix method and apply the function ***`applyf`*** on each node.
	(More informations about prefix method -> https://en.wikipedia.org/wiki/Binary_expression_tree)
* **ft_btree_apply_suffix**
	```C
	t_btree	ft_apply_suffix(t_btree *src, void (applyf)(void *));
	```
	Traverse a binary tree starting from ***`src`*** following the suffix method and apply the function ***`applyf`*** on each node.
	(More informations about suffix method -> https://en.wikipedia.org/wiki/Binary_expression_tree)


#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

//___________________________________________ PARTIE OBLIGATOIRE ____________________________________________//

//------------------------------------ STR --------------------------------------\\

size_t				ft_strlcat(char *dst, const char *src, size_t size);
//char				*ft_strchr(const char *s, int c);
//char				*ft_strrchr(const char *s, int c);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
//char				*ft_strnstr(const char *str, const char *to_find, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
//char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//char				*ft_strsub(char const *s, unsigned int start, size_t len);                 ft_substr
//char				*ft_strjoin(char const *s1, char const *s2);
//char				*ft_strtrim(char const *s);
char				**ft_split(char const *s, char c);

//------------------------------------ MEM --------------------------------------\\

//void				*ft_memset(void *b, int c, size_t len);
//void				ft_bzero(void *s, size_t n);
//void				*ft_memcpy(void *dst, const void *src, size_t n);
//void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
//void				*ft_memmove(void *dst, const void *src, size_t len);
//void				*ft_memchr(const void *s, int c, size_t n);
//int				ft_memcmp(const void *s1, const void *s2, size_t n);
//void				*ft_calloc(size_t count, size_t size);

//------------------------------------ PUT --------------------------------------\\

void				ft_putchar(char c);
void				ft_putstr(char const *s);
//void				ft_putendl(char const *s);
void				ft_putnbr(int nb);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
//void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int nb, int fd);

//------------------------------------ IS ---------------------------------------\\

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

//---------------------------------- AUTRES -------------------------------------\\

int				ft_atoi(char const *str);
//char				*ft_itoa(int nbr);

//________________________________________________ BONUS ____________________________________________________//

//----------------------------------- LST ----------------------------------------\\

typedef struct				s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

//t_list				*ft_lstnew(void const *content, size_t content_size);
//void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
//void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
//t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
//void				ft_lstadd_front(t_list **alst, t_list *new);
//int				ft_lstsize(t_list *lst);
//t_list			*ft_lstlast(t_list *lst);
//void				ft_lstadd_back(t_lst **alst, t_list *new);
//void				ft_lstclear(t_list **lst, void (*del)(void*));

//____________________________________________ ++ BONUS ++ __________________________________________________//

//------------------------------------ PUT --------------------------------------\\

void				ft_putnbr_base(int nbr, char *base);
void				ft_putnbr_base_fd(int nbr, char *base, int fd);

//------------------------------------ IS ---------------------------------------\\

int				is_charset(char c, char *charset);
int				is_in_tab(int nb, int *tab);

//----------------------------------- BTREE -------------------------------------\\

typedef struct				s_btree
{
	void			*item;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

void				btree_del(t_btree *tree);
t_btree				*btree_create_node(void *item);
int				btree_is_empty(t_btree *tree);
void				btree_insert_data(t_btree **root, void *item, int (*cmp)(void *, void *));
void				*btree_search_item(t_btree *root, void *data_ref, int (*cmp)(void *, void *));

//----------------------------------- LST ----------------------------------------\\

void				ft_sort_lst();
void				ft_lstremove_if();
t_list				*ft_strsplit_lst(char const *s, char c);

//---------------------------------- AUTRES -------------------------------------\\

void				ft_sort_int_tab(int *tab);
void				ft_swap(char *a, char *b);
int				ft_atoi_base(char *str, char *base);
char				*ft_itoa_base(int nbr, int base);
int				get_next_line(const int fd, char **line);
int				ft_printf(const char *format, ...);

#endif

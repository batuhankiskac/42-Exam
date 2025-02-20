typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*current;

	size = 0;
	current = begin_list;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}

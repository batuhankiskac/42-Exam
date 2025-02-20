typedef struct s_point
{
	int x;
	int y;
} t_point;

void fill(char **tab, t_point size, t_point current, char target)
{
	if (current.x < 0 || current.y < 0 || current.x >= size.x || current.y >= size.y)
		return ;
	if (tab[current.y][current.x] != target)
		return ;
	tab[current.y][current.x] = 'F';
	fill(tab, size, (t_point){current.x + 1, current.y}, target);
	fill(tab, size, (t_point){current.x - 1, current.y}, target);
	fill(tab, size, (t_point){current.x, current.y + 1}, target);
	fill(tab, size, (t_point){current.x, current.y - 1}, target);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

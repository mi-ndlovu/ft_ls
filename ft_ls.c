/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 11:51:50 by mndlovu           #+#    #+#             */
/*   Updated: 2017/08/28 16:43:13 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_rev_list(t_dir **head_ref)
{
	t_dir	*prev;
	t_dir	*current;
	t_dir	*next;

	current = *head_ref;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

void	big_r(t_dir *list, t_env *e)
{
	t_dir *temp;

	temp = list;
	while (temp != NULL)
	{
		if (temp->is_dir == 1 && temp->dir[0] != '.')
			do_ls(temp->full_path, e);
		temp = temp->next;
	}
}

void	ft_print_ls(t_dir *list, t_env *e, char *path)
{
	t_dir	*temp;

	if (e->t == 1)
		sort_list(&list, compare_time, 0);		
	if (e->r == 1)
		ft_rev_list(&list);
	if (e->rr == 1)
		ft_putstr(ft_strjoin(path, ":\n"));
	if (e->l == 1)
		print_l(list);
	else
	{
		temp = list;
		while (temp != NULL)
		{
			ft_putstr(temp->dir);
			temp = temp->next;
			if (temp != NULL)
				ft_putchar('\n');
		}
	}
	ft_putchar('\n');
	if (e->rr == 1)
		big_r(list, e);
}

void	do_ls(char *dir, t_env *e)
{
	t_dir			*list;
	t_dir			*temp;

	list = NULL;
	if ((e->dirp = opendir(dir)) != NULL)
	{
		while ((e->dp = readdir(e->dirp)) != NULL)
		{
			if (e->dp->d_name[0] != '.' || e->a == 1)
			{
				temp = (t_dir *)malloc(sizeof(t_dir));
				temp->dir = e->dp->d_name;
				temp->full_path = ft_strjoin(ft_strjoin(dir, "/"),
						e->dp->d_name);
				lstat(temp->full_path, &e->sb);
				temp->time = e->sb.st_mtime;
				if (S_ISDIR(e->sb.st_mode) == 1)
					temp->is_dir = 1;
				temp->next = list;
				list = temp;
			}
		}
		sort_list(&list, compare_strings, 0);
		ft_print_ls(list, e, dir);
	}
}

void	ft_ls(t_env *e)
{
	t_dir	*temp;

	temp = e->list;
	while (temp != NULL)
	{
		do_ls(temp->dir, e);
		temp = temp->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:07:33 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/14 09:07:38 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	while (n != 0)
	{
		*(unsigned char *)s = (unsigned char) c;
		s++;
		n--;
	}
	return s;
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void *p;
	p = malloc (nmemb * size);
	if (p == 0)
		return (0);
	ft_memset (p, '\0', nmemb * size);
	return (p);
}

int main()
{
    int *p, i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    p = (int*)calloc(n, sizeof(int));

    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1); // exit the program
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", p+i);
    }
    printf("\nprinting array of %d integers\n\n", n);

    // calculate sum

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }
    // signal to operating system program ran fine
    return 0;
}

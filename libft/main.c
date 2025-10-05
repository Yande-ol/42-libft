/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-04 02:14:29 by Yande-ol          #+#    #+#             */
/*   Updated: 2025-10-04 02:14:29 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isdigit(int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strdup(const char *s1);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
    char c1 = 'A';
    char c2 = 'z';
    char c3 = '5';
    char c4 = '@';
    char c5 = ' ';
    char c6 = 127;
    char c7 = 31;

    printf("ft_isalpha('%c') = %d\n", c1, ft_isalpha(c1));
    printf("ft_isalpha('%c') = %d\n", c2, ft_isalpha(c2));
    printf("ft_isalnum('%c') = %d\n", c3, ft_isalnum(c3));
    printf("ft_isalnum('%c') = %d\n", c4, ft_isalnum(c4));
    printf("ft_isascii('%c') = %d\n", c4, ft_isascii(c4));
    printf("ft_isascii('%c') = %d\n", c6, ft_isascii(c6));
    printf("ft_isprint('%c') = %d\n", c5, ft_isprint(c5));
    printf("ft_isprint('%c') = %d\n", c7, ft_isprint(c7));
    printf("ft_isdigit('%c') = %d\n", c3, ft_isdigit(c3));
    printf("ft_isdigit('%c') = %d\n", c1, ft_isdigit(c1));
    printf("ft_strlen('Hello, World!') = %zu\n", ft_strlen("Hello, World!"));
    printf("ft_strlcpy test:\n");
    char dest[20];
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Returned length: %zu\n", result);
    printf("ft_strncmp('Hello', 'Hello, World!', 5) = %d\n", ft_strncmp("Hello", "Hello, World!", 5));
    printf("ft_strchr('Hello, 'o') = %s\n", ft_strchr("Hello", 'o'));
    printf("ft_strrchr('Hello, 'l') = %s\n", ft_strrchr("Hello", 'l'));
    printf("ft_strdup('Hello, World!') = %s\n", ft_strdup("Hello, World!"));
    printf("ft_strnstr('Hello, World!', 'World', 13) = %s\n", ft_strnstr("Hello, World!", "World", 13));

    return 0;
}
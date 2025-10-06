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

#include <stdlib.h>
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
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_toupper(int c);
int ft_atoi(const char *str);
int ft_tolower(int c);
void *ft_calloc(size_t count, size_t size);

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
	printf("ft_memset test:\n");
	char buffer[20] = "Hello, World!";
	printf("Before ft_memset: %s\n", buffer);
	ft_memset(buffer + 7, 'X', 5);
	printf("After ft_memset: %s\n", buffer);
	printf("ft_bzero test:\n");
	char buffer2[20] = "Hello, World!";
	printf("Before ft_bzero: %s\n", buffer2);
	ft_bzero(buffer2 + 7, 5);
	printf("After ft_bzero: %s\n", buffer2);
	printf("ft_memcpy test:\n");
	char dest2[20];
	const char *src2 = "Hello, World!";
	printf("Source: %s\n", src2);
	ft_memcpy(dest2, src2, 13);
	dest2[13] = '\0'; 
	printf("Destination after ft_memcpy: %s\n", dest2);
	printf("ft_memmove test:\n");
	char overlap[] = "1234567890";
	printf("Before ft_memmove: %s\n", overlap);
	ft_memmove(overlap + 4, overlap, 6);
	printf("After ft_memmove: %s\n", overlap);
	printf("ft_memcmp test:\n");
	const char *buf1 = "Hello, World!";
	const char *buf2 = "Hello, World?";
	int cmp_result = ft_memcmp(buf1, buf2, 13);
	printf("ft_memcmp result: %d\n", cmp_result);
	printf("ft_memchr test:\n");
	const char *buf3 = "Hello, World!";
	char ch = 'W';
	char *memchr_result = ft_memchr(buf3, ch, 13);
	if (memchr_result)
		printf("ft_memchr found '%c' at position: %ld\n", ch, memchr_result - buf3);
	else
		printf("ft_memchr did not find '%c'\n", ch);
	printf("ft_toupper('%c') = '%c'\n", 'a', ft_toupper('a'));
	printf("ft_toupper('%c') = '%c'\n", 'Z', ft_toupper('Z'));
	printf("tolower('%c') = '%c'\n", 'A', ft_tolower('A'));
	printf("tolower('%c') = '%c'\n", 'z', ft_tolower('z'));
	printf("ft_atoi('   -12345abc') = %d\n", ft_atoi("   -12345abc"));
	printf("ft_calloc(5, sizeof(int)) test:\n");
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if (arr)
	{
		for (int i = 0; i < 5; i++)
			printf("arr[%d] = %d\n", i, arr[i]);
		free(arr);
	}

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <<Yande-ol@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:26:03 by Yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 09:26:37 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_upcase_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

char	meu_rev(unsigned int i, char c)
{
	(void)i;
	return c + 32;
}
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
int ft_toupper(int c);
int ft_atoi(const char *str);
int ft_tolower(int c);
void *ft_calloc(size_t count, size_t size);
char *ft_substr(char const *s, unsigned int star, size_t n);
char *ft_strjoin(const char *s1, const char *s2);
char *ft_strtrim(char const *s1, const char *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void *ft_memchr(const void *s, int c, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

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
	printf("FT_MEMSET TESTE:\n");
	char buffer[20] = "Hello, World!";
	printf("Before ft_memset: %s\n", buffer);
	ft_memset(buffer + 7, 'X', 5);
	printf("After ft_memset: %s\n", buffer);
	printf("FT_BZERO TESTE:\n");
	char buffer2[20] = "Hello, World!";
	printf("Before ft_bzero: %s\n", buffer2);
	ft_bzero(buffer2 + 8, 8);
	printf("After ft_bzero: %s\n", buffer2);
	printf("FT_MEMCPY TESTE:\n");
	char dest2[20];
	const char *src2 = "Hello, World!";
	printf("Source: %s\n", src2);
	ft_memcpy(dest2, src2, 13);
	dest2[13] = '\0'; 
	printf("Destination after ft_memcpy: %s\n", dest2);
	printf("FT_MEMMOVE TESTE:\n");
	char overlap[] = "1234567890";
	printf("Before ft_memmove: %s\n", overlap);
	ft_memmove(overlap + 4, overlap, 6);
	printf("After ft_memmove: %s\n", overlap);
	printf("FT_MEMCMP TESTE:\n");
	const char *buf1 = "Hello, World!";
	const char *buf2 = "Hello, World?";
	int cmp_result = ft_memcmp(buf1, buf2, 13);
	printf("ft_memcmp result: %d\n", cmp_result);
	printf("FT_TOUPPER('%c') = '%c'\n", 'a', ft_toupper('a'));
	printf("FT_TOUPPER('%c') = '%c'\n", 'Z', ft_toupper('Z'));
	printf("FT_TOLOWER('%c') = '%c'\n", 'A', ft_tolower('A'));
	printf("FT_TOLOWER('%c') = '%c'\n", 'z', ft_tolower('z'));
	printf("FT_ATOI('	-12345abc') = %d\n", ft_atoi("	-12345abc"));
	printf("FT_CALLOC(5, sizeof(int)) test:\n");
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if (arr)
	{
		for (int i = 0; i < 5; i++)
			printf("arr[%d] = %d\n", i, arr[i]);
		free(arr);
	}
	printf("FT_SUBSTR TESTE\n");
	char s[] = "MATHEUS";
	char *nov;

	printf("string origin: %s\n", s);

	nov = ft_substr(s, 6, 3);

	printf("string dest: %s\n", nov);

	free(nov);
	printf("FT_STRJOIN TESTE:\n");
	char s1[] = "Yan";
	char s2[] = "Matos";
	char *nova = ft_strjoin(s1, s2);


	printf("depois da juncao: %s\n", nova);

	free(nova);
	printf("FT_STRTRIM TESTE: \n");
	char test[] = "---yanmatos+++";
	char *recb;

	recb = ft_strtrim(test, "-+");
	printf("Somente os caracteres que queremos: %s\n", recb);

	free(recb);
	printf("FT_SPLIT TESTE:\n");
	char str[] = "Vamos--com--essa--merda";
		char **sdl;
		size_t i;

		printf("String orin sem separação: %s\n", str);

		sdl = ft_split(str,  '-');

		printf("Strig separada em palavras:\n");

		i = 0;
		while (sdl[i])
		{
				printf("%s\n", sdl[i]);
		i++;
		}
	printf("FT_ITOA TESTE:\n");
	int n = -120;
	char *ptr;

	printf("Mostrando o int escolhido: %d\n", n);

	ptr = ft_itoa(n);

	printf("Mostrando o int mudado para char(string): %s\n", ptr);
	printf("FT_STRMAPI TESTE:\n");
	char str22[] = "ABC";
	char *su;

	printf("String orig antes de passar a funcao: %s\n", str22);

	su = ft_strmapi(str22, meu_rev);

	printf("String depois que foi passada a funcao: %s\n", su);
	printf("FT_STRITERI TESTE: \n");
	char str23[] = "yanmatos";
	printf("String antes da funcao passar: %s\n", str23);
	
	ft_striteri(str23, ft_upcase_even);

	printf("String depois da funcao passar:  %s\n", str23);
	printf("FT_MEMCHR TESTE:\n");
	char data[] = "Yan Matos";
	char *resul;
	
	printf("String passada: %s\n", data);
	resul = ft_memchr(data, 'M', 9);

	if (resul != NULL)
		printf("Encontrado: %s\n", resul);
	else
		printf("Caracter não encontrado!\n");

	printf("FT_PUTCHAR_FD TESTE: \n");
	ft_putchar_fd ('y', 1);
	ft_putchar_fd ('a', 1);
	ft_putchar_fd ('n', 1);
	ft_putchar_fd ('\n', 1);
	printf("FT_PUTSTR_FD TESTE:\n");
	ft_putstr_fd ("eu sou o yan", 1);
	ft_putchar_fd ('\n', 1);
	ft_putstr_fd ("estou na 42", 1);
	ft_putchar_fd ('\n', 1);
	printf("FT_PUTENDL_FD TESTE:\n");
	ft_putendl_fd("yan", 1);
	ft_putendl_fd("matos", 1);
	ft_putendl_fd("carlos", 1);
	ft_putendl_fd("oi", 1);
	printf("FT_PUTNBR_FD TESTE: \n");
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);


		return 0;
}

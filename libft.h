/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 18:07:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/11/29 15:14:07 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "get_next_line.h"

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				ft_atoi(const char *str);
/* Transpune un sir intr-un numar */
/* Returneaza: numarul */
/*             0 in caz ca rezultatul e mai mic ca INT_MIN (caz deosebit) */
/*             -1 in caz de eroare sau daca numarul depaseste INT_MAX */

void			ft_bzero(void *s, size_t n);
/* Umple zona de memorie s cu 0 */

int				ft_isalnum(int c);
/* Verifica daca caracterul c este caracter alfanumeric */
/* Returneaza: 1 daca e */
/*             0 daca nu e */

int				ft_isalpha(int c);
/* Verifica daca caracterul c este litera */
/* Returneaza: 1 daca e litera */
/*             0 daca nu e litera */

int				ft_isascii(int c);
/* Verifica daca caracterul c e cuprins in codul ASCII */
/* Returneaza: 1 daca e inclus in ASCII */
/*             0 daca nu e inclus in ASCII */

int				ft_isblank(int c);
/* Verifica daca caracterul c este caracter alb */
/* Returneaza: 1 daca e caracter alb */
/*             0 daca nu e caracter alb */

int				ft_isdigit(int c);
/* Verifica daca caracterul c este cifra */
/* Returneaza: 1 daca e cifra */
/*             0 daca nu e cifra */

int				ft_isprint(int c);
/* Verifica daca caracterul c este printabil */
/* Returneaza: 1 daca e printabil */
/*             0 daca nu e printabil */

char			*ft_itoa(int n);
/* Transpune un numar intr-un sir de caractere */
/* Returneaza: sirul */
/*             NULL in caz de eroare */

void			ft_lstadd(t_list **alst, t_list *new);
/* Adauga un element (in stiva) */

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
/* Sterge toate elementele dintr-o lista */

void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
/* Sterge un element din lista, eliberandu-i continutul si memoria */

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
/* Aplica functia transmisa pe fiecare element din lista */

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/* Aplica functia transmisa pe fiecare element al listei */
/* Returneaza: lista cu elemente modificate */
/*             NULL in caz de eroare */

t_list			*ft_lstnew(void const *content, size_t content_size);
/* Creeaza un element nou de tip t_list cu continutul specificat */
/* Returneaza: noul element (pointer) */

void			*ft_memalloc(size_t size);
/* Creeaza o zona de memorie de dimensiune size */
/* Returneaza: un pointer spre noua zona de memorie alocata */

void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
/* Copiaza elemente din src in dest pana intalneste valoarea c in n byti */
/* Returneaza: pointer daca a gasit acea valoare in cei n byti */
/*             NULL daca nu a gasit in n byti valoarea */

void			*ft_memchr(const void *s, int c, size_t n);
/* Cauta in primii n byti ai zonei de memorie s o vaoare */
/* Returneaza: pointer-ul de la prima aparitie */
/*             NULL daca nu gaseste in primii n byti */

int				ft_memcmp(const char *s1, const char *s2, size_t n);
/* Compara 2 zone de memorie, element cu element si returneaza diferenta */
/* Returneaza: < 0 daca valorile din prima zona de memorie sunt mai mici */
/*             0 daca sunt egale cele 2 zone de memorie */
/*             > 0 daca valorile din prima zona de memorie sunt mai mmari */

void			*ft_memcpy(void *dest, const void *src, size_t n);
/* Copiaza n byti din src in dest */
/* Returneaza: pointer spre zona de memorie schimbata */

void			ft_memdel(void **ap);
/* Elibereaza zona de memorie transmisa */

void			*ft_memmove(void *dest, const void *src, size_t n);
/* Muta n byti din src in dest prin folosirea unui pointer intermediar */
/* Returneaza: pointer-ul spre zona modificata */

void			*ft_memset(void *s, int c, size_t n);
/* Pune pe n byti ai zonei de memorie reprezentate de s o valoare */
/* Returneaza: pointer-ul spre zona de memorie modificata */

void			ft_putchar(char c);
/* Scrie un caracter la iesirea standard */

void			ft_putchar_fd(char c, int fd);
/* Scrie un caracter intr-un fisier descris de fd */

void			ft_putendl(char const *s);
/* Scrie un sir s la iesirea standard si pune un retur de linie*/

void			ft_putendl_fd(char const *s, int fd);
/* Scrie un sir s intr-un fisier fd si pune un retur de linie*/

void			ft_putnbr(int n);
/* Scrie un numar n la iesirea standard */

void			ft_putnbr_fd(int n, int fd);
/* Scrie un numar n intr-un fisier cu file descriptor fd */

void			ft_putstr(char const *s);
/* Scrie un sir s la iesirea standard */

void			ft_putstr_fd(char const *s, int fd);
/* Scrie un sir s intr-un fisier cu file descriptor specificat */

char			*ft_strcat(char *dest, const char *src);
/* Concateneaza sirul src la sirul dest */
/* Returneaza: sirul concatenat dest */

char			*ft_strchr(const char *s, int c);
/* Cauta un caracter in sirul s */
/* Returneaza: un pointer de la prima aparitia a caracterului */
/*             NULL in caz ca nu gaseste sau de eroare */

void			ft_strclr(char *s);
/* Pune pe fiecare pozitie a sirului '\0' */

int				ft_strcmp(const char *s1, const char *s2);
/* Compara 2 siruri lexicografic */
/* Returneaza: < 0 daca primul sir este mai mic lexicografic */
/*             0 daca sunt egale */
/*             > 0 daca al 2-lea sir este mai mare lexicografic */

char			*ft_strcpy(char *dest, const char *src);
/* Copiaza sirul src in sirul dest */
/* Returneaza: sirul copiat */

void			ft_strdel(char **as);
/* Elibereaza memoria siruri si pune pointer-ul pe NULL */

char			*ft_strdup(const char *s);
/* Creaza o dublura a sirului transmis */
/* Returneaza: dublura */
/*             NULL in caz de eroare */

int				ft_strequ(char const *s1, char const *s2);
/* Verifica daca sirurile s1 si s2 sunt la fel (element cu element) */
/* Returneaza: 1 daca sunt egale elementele */
/*             0 daca nu sunt egale */
/*             -1 in caz de eroare */

void			ft_striter(char *s, void (*f)(char *));
/* Creaza un nou sir din sirul s la care s-a aplicat functia transmisa (*f) */
/* Functia se aplica pe fiecare element al sirului */

void			ft_striteri(char *s, void (*f)(unsigned int, char *));
/* Creaza un nou sir din sirul s la care s-a aplicat functia transmisa (*f) */
/* Functia se aplica pe fiecare indice al sirului */

char			*ft_strjoin(char const *s1, char const *s2);
/* Creaza un nou sir format din s1 + s2 inlantuite (concatenate) */
/* Returneaza: noul sir */
/*             NULL in caz de eroare */

int				ft_strjump(char *str, char c);
/* Sare peste caracterele egale cu c */
/* Returneaza cat a sarit */

size_t			ft_strlcat(char *dst, const char *src, size_t size);
/* Concateneaza dst si src cat timp ii permite o lungime size */
/* Returneaza: lungimea sirului pe care a reusit sa-l concateneze */

size_t			ft_strlen(const char *s);
/* Calculeaza lungimea sirului */
/* Returneaza: lungimea sirului */

char			*ft_strmap(char const *s, char (*f)(char));
/* Creaza un nou sir din sirul s care primeste rezultatul functiei transmise */
/* Rezultatul functiei este primit de fiecare element */
/* Returneaza: noul sir la care a fost aplicata functia pe fiecare caracter */
/*             NULL in caz de eroare */

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* Creaza un nou sir din sirul s care primeste rezultatul functiei transmise */
/* Functia se aplica pe fiecare indice al sirului */
/* Returneaza: noul sir la care a fost aplicata functia */
/*             NULL in caz de eroare */

char			*ft_strncat(char *dest, const char *src, size_t n);
/* Concateneaza n caracteredin src la dest */
/* Returneaza: sirul concatenat */

int				ft_strncmp(const char *s1, const char *s2, size_t n);
/* Compara primele n caractere ale 2 siruri */
/* Returneaza: < 0 daca primul sir este mai mic lexicografic */
/*             0 daca sunt egale */
/*             > 0 daca al 2-lea sir este mai mare lexicografic */

char			*ft_strncpy(char *dest, const char *src, size_t n);
/* Copiaza n caractere din src in dest */
/* Returneaza: sirul copiat */

int				ft_strnequ(char const *s1, char const *s2, size_t n);
/* Verifica daca primele n caractere din s1 si s2 sunt la fel */
/* Returneaza: 1 daca sunt egale primele n caractere */
/*             0 daca nu sunt egale */
/*             -1 in caz de eroare */

char			*ft_strnew(size_t size);
/* Creaza un nou sir de caractere de lungime size plin cu '\0' */
/* Returneaza: noul sir */
/*             NULL in caz de eroare */

char			*ft_strnstr(const char *big, const char *little, size_t len);
/* Cauta in primiele n caractere ale unui sir un subsir */
/* Returneaza: un pointer de la prima aparitie a subsirului */
/*             NULL in caz ca nu gaseste sau de eroare */

char			*ft_strrchr(const char *s, int c);
/* Cauta existenta unui caracter intr-un sir */
/* Returneaza: un pointer de la ultima aparitie a caracterului */
/*             NULL in caz ca nu gaseste sau de eroare */

char			**ft_strsplit(char const *s, char c);
/* decupeaza sirul dupa un anumit caracter */
/* returneaza: un pointer dublu (matrice) */
/*             NULL in caz de eroare */

char			*ft_strstr(const char *haystack, const char *needle);
/* cauta un sub sir in interiorul unui alt sir */
/* returneaza: adresa primei intalniri */
/*             NULL in cazul in care nu gaseste */

char			*ft_strrstr(const char *big, const char *little);
/* cauta un sub sir in interiorul unui alt sir */
/* returneaza: adresa ultimei intalniri */
/*             NULL in cazul in care nu gaseste */

char			*ft_strsub(char const *s, unsigned int start, size_t len);
/* decupeaza dintr-un sir de la pozitia start len caractere */
/* returneaza: sirul decupat (un nou sir) */
/*             NULL in caz de eroare */

char			*ft_strtrim(char const *s);
/* extrage din sir un subsir fara spatii la inceput si la final */
/* returneaza: noul sir */
/*             NULL in caz de eroare */

int				ft_tolower(int c);
/* transforma un caracter in minuscula */
/* returneaza caracterul */

int				ft_toupper(int c);
/* transforma un caracter in majuscula */
/* returneaza caracterul */

char			*ft_strupcase(char *str);
/* face majuscule toate caracterele minuscule */
/* returneaza: sirul fara minuscule */
/*             NULL in caz de eroare */

char			*ft_strlowcase(char *str);
/* face minuscule toate caracterele majuscule din sir */
/* returneaza: sirul fara majuscule */
/*             NULL in caz de eroare */

char			*ft_strleft(char *str, int n);
/* decupeaza n caractere de la inceputul sirului */
/* returneaza: rezultatul (un nou sir)*/
/*             NULL in caz de eroare */

char			*ft_strrigth(char *str, int n);
/* decupeaza n caractere de la sfarsitul sirului */
/* returneaza: rezultatul (un nou sir) */
/*             NULL in caz de eroare */

char			*ft_strrev(char *str);
/* inverseaza un sir */
/* returneaza: sirul inversat */
/*             NULL in caz de eroare */

char			*ft_strcharcpy(char *dst, char *src, char c);
/* copiaza in dst din src pana cand intalneste caracterul mentionat sau '\0' */
/* returneaza: sirul copiat */
/*             NULL in caz de eroare */

void			ft_swap(int *a, int *b);
/* schimba 2 numere intre ele */

void			ft_strswap(char **s1, char **s2);
/* schimba 2 siruri intre ele */

void			ft_lstpush_back(t_list **begin, const void *data, size_t size);
/* adauga un nou element la finalul listei */

void			ft_lstpush_front(t_list **begin, const void *data, size_t size);
/* adauga un element in capul listei */

char			*ft_strjoinch(char const *s, char c);
/* creaza un nou (alocare memorie) sir adaugand la final caracterul mentionat */
/* returneaza: noul sir */
/*             NULL in caz de eroare */

int				ft_atoi_base(char *str, int base);
/* transforma un sir care contine un numar, in baza mentionata */
/* returneaza: un numar in baza 10 */
/*             -1 in caz de eroare */

int				ft_strjump_blank(char *str);
/* sare peste toate spatiile albe dintr-un sir cat timp ele exista */
/* returneaza cat o sarit */

int				ft_strjump_alpha(char *s, char caz);
/* parcurge sirul pana la un caracter care nu e litera sau nu respecta cazul*/
/* cand cazul e 'a', parcurge cat timp sunt litere*/
/* cand cazul e 'l', parcurge cat timp sunt litere minuscule (l -> lower)*/
/* cand cazul e 'u', parcurge cat timp sunt litere majuscule (u -> upper)*/
/* returneaza cat o sarit */

int				ft_strjump_digit(char *str);
/* sare pana cand intalneste ceva ce nu e cifra */
/* returneaza cat o sarit */

size_t			ft_strlen_untilch(char *s, char c);
/* calculeaza lungimea unui sir pana la un anumit caracter */
/* returneaza lungimea pana la acel caracter */

#endif

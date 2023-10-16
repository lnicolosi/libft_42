/*  31  →   ft_strlen 
 *  42  →   ft_strcpy
 *  51  →   ft_strncpy
 *  60  →   ft_memset
 *  73  →   ft_bzero
 *  92  →   ft_memcpy
 *  125 →   ft_isalpha
 *  134 →   ft_isdigit
 *  143 →   ft_isprint
 *  152 →   ft_isalnum
 *  161 →   ft_isascii
 *  170 →   ft_tolower
 *  181 →   ft_toupper
 *  191 →   ft_strchr  
 *  200 →   ft_strdup
 *  219 →   ft_calloc
 *  246 →   ft_memcmp
 *  266 →   ft_atoi
 *  278 →   ft_strncmp
 *
 *
 *
 *
 *
 */
#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	/* TEST FT_STRLEN */

	char	*s;
	s = "Hello";
	printf("String a compter : %s\n", s);
	int	i;
	i = ft_strlen(s);
	printf("FT_STRLEN : %d\n", i);
	i = strlen(s);
	printf("STRLEN : %d\n\n", i);

	/* TEST FT_STRCPY */

	char	src1[] = "salut";
	char	dest1[] = "bonjour";
	printf("copie de : %s\n", src1);
	printf("dans cette destination : %s\n", dest1);
	ft_strcpy(dest1, src1);
	printf("FT_STRCPY : la destination devient : %s\n\n", dest1);
	
	/* TEST FT_STRNCPY */

	char	src2[] = "Luca";
	char	dest2[] = "Nicolosi";
	printf("copie de : %s\n", src2);
	printf("dans cette destination destination : %s\n", dest2);
	ft_strncpy(dest2, src2, 3);
	printf("FT_STRNCPY : la destination devient : %s\n\n", dest2);

	/* TEST FT_MEMSET */

	int	s1[8];
	ft_memset(s1, 1, sizeof(s1));
	printf("FT_MEMSET valeur a appliquer : -%d-\n", *s1);
	size_t i1 = 0;
	while (i1 < 8) 
	{
        printf("buffer[%zu] = %d\n", i1, s1[i1]);
		i1++;
	}
    printf("\n");
	
	/* TEST FT_BZERO */

	int	s2[8];
	int j2 = 0;
	while(j2 < 8)
	{
		s2[j2] = j2;
		j2++;
	}
	ft_bzero(s2, sizeof(s2));
	printf("FT_BZERO test : -%d-\n", *s2);
	size_t i2 = 0;
	while (i2 < 8) 
	{
        printf("buffer[%zu] = %d\n", i2, s2[i2]);
		i2++;
	}
    printf("\n");

	/* TEST FT_MEMCPY */

	int source[5];
	int destination[5];
	int i3 = 0;
    printf("FT_MEMCPY test :\n");
	while(i3 < 5)
	{
		source[i3] = i3;
		destination[i3] = 8;
		i3++;
	}
	i3 = 0;
	while(i3 < 5)
	{
		printf("source[%d] = %d\n", i3, source[i3]);
		i3++;
	}
	i3 = 0;
	while(i3 < 5)
	{
		printf("destination[%d] = %d\n", i3, destination[i3]);
		i3++;
	}	
	ft_memcpy(destination, source, sizeof(source));
	i3 = 0;
	while(i3 < 5)
	{
		printf("destination apres copie[%d] = %d\n", i3, destination[i3]);
		i3++;
	}
    printf("\n");

	/* TEST FT_ISALPHA */

    int a = 101;
    int b = ft_isalpha(a);
    printf("ISALPHA: the ascii value is : %d\n", a);
    printf("the return value with ft_isalpha is : %d\n", b);
    int d = isalpha(a);
    printf("the return value with isalpha is : %d\n\n", d);

    /* TEST FT_ISDIGIT */
    
    char a1 = '8';
    int b1 = ft_isdigit(a1);
    printf("ISDIGIT: the ascii value is : %d\n", a1);
    printf("the return value with ft_isdigit is : %d\n", b1);
    b1 = isdigit(a1);
    printf("the return value with isdigit is : %d\n\n", b1);

    /* TEST FT_ISPRINT */

    int a2 = 58;
    int b2 = ft_isprint(a2);
    printf("ISPRINT: the ascii value is : %d\n", a2);
    printf("the return value with ft_isprint is : %d\n", b2);
    b2 = isprint(a2);
    printf("the return value with isprint is : %d\n\n", b2);

    /* TEST FT_ISALNUM */

    int a3 = 50;
    int b3 = ft_isalnum(a3);
    printf("ISALNUM: the ascii value is : %d\n", a3);
    printf("the return value with ft_isalnum is : %d\n", b3);
    b3 = isalnum(a3);
    printf("the return value with isalnum is : %d\n\n", b3);

    /* TEST FT_ISASCII */

    int a4 = 58;
    int b4 = ft_isascii(a4);
    printf("ISASCII: the ascii value is : %d\n", a4);
    printf("the return value with ft_isascii is : %d\n", b4);
    b4 = isascii(a4);
    printf("the return value with isascii is: %d\n\n", b4);

    /* TEST FT_TOLOWER */

    char c = 'P';
    printf("Character avant : %c\n", c);
    c = tolower(c);
    printf("Character apres avec tolower : %c\n", c);
    c = 'P';
    c = ft_tolower(c);
    printf("Character apres avec ft_tolower : %c\n\n", c);


    /* TEST FT_TOUPPER */

    char c1 = 'k';
    printf("Character avant : %c\n", c1);
    c1 = toupper(c1);
    printf("Character apres avec toupper : %c\n", c1);
    c1 = 'k';
    c1 = ft_toupper(c1);
    printf("Character apres avec ft_toupper : %c\n\n", c1);

    /* TEST FT_STRCHR */

    char tweet[] = "Je te mention ici @thomas";
    char *mention = strchr(tweet, 'x');
    printf("strchr : la mention est : %s\n", mention);

    char *mention2 = ft_strchr(tweet,/Applications/Discord.app  'x');
    printf("ft_strchr : la mention est : %s\n\n", mention2);

    /* TEST FT_STRDUP */

    char mot[] = "Bienvenue dans mon monde";
    printf("Le mot a copier est : %s\n", mot);
    char *copie;
    copie = strdup(mot);
    if(copie != 0)
    {
        printf("strdup      : la copie est : %s\n", copie);
        free(copie);
    }
    char *copie2;
    copie2 = ft_strdup(mot);
    if(copie2 != 0)
    {
        printf("ft_strdup   : la copie est : %s\n\n", copie2);
        free(copie2);
    }

    /* TEST FT_CALLOC */

    int tailleTableau = 5;
    int *tableau;
    
    //printf("choisis la taille du tableau");
    //scanf("%d", &tailleTableau);
    printf("FT_CALLOC : \n");
    tableau = (int *)ft_calloc(tailleTableau, sizeof(int));
    //tableau = (int *)calloc(tailleTableau, sizeof(int));
    //tableau = (int *)malloc(sizeof(int)*tailleTableau);

    if(tableau == NULL)
    {
        printf("Erreur calloc");
        return 1;
    }

    int compteur = 1;
    while(compteur <= tailleTableau)
    {
        printf("[%d] [%d] [%p]\n", compteur, tableau[compteur], &tableau);
        compteur++;
    }
        printf("\n");
    free(tableau);
    
    /* TEST FT_MEMCMP */

    int array1[5] = {6, 7, 8, 9, 5};
    int array2[5] = {6, 7, 8, 9, 10};

    int comparaisonarray = memcmp(array1, array2, sizeof(array1));
    int comparaisonarray1 = ft_memcmp(array1, array2, sizeof(array1));

    printf("memcmp array : return value : %d\n", comparaisonarray);
    printf("ft_memcmp array : return value : %d\n\n", comparaisonarray1);
    
    char* word1 = "Salut";
    char* word2 = "Sbkut";

    int comparaisonword = memcmp(word1, word2, ft_strlen(word1));
    int comparaisonword1 = ft_memcmp(word1, word2, ft_strlen(word1));

    printf("memcmp string : return value : %d\n", comparaisonword);
    printf("ft_memcmp string : return value : %d\n\n", comparaisonword1);

    /* TEST FT_ATOI */

    char *num1 = "-24";
    char *num2 = "-5";

    int somme = atoi(num1) - atoi(num2);

    printf("atoi : %s - %s = %d\n",num1, num2, somme);

    int somme2 = ft_atoi(num1) - ft_atoi(num2);
    printf("ft_atoi : %s - %s = %d\n\n", num1, num2, somme2);

    /* TEST FT_STRNCMP */

    char *mot1 = "automatisation";
    char *mot2 = "automatiser";
    
    int difference1 = strncmp(mot1, mot2, 9);
    int difference2 = strncmp(mot1, mot2, 16);

    printf("strncmp : 9 lettres : [%d] / 10 lettres : [%d]\n", difference1, difference2);
    
    difference1 = ft_strncmp(mot1, mot2, 9);
    difference2 = ft_strncmp(mot1, mot2, 16);

    printf("ft_strncmp : 9 lettres : [%d] / 10 lettres : [%d]\n\n", difference1, difference2);
    
    /* TEST FT_STRRCHR */

    char suite[] = "salut,je,suis,luca!";
    char occurance = 't';
    char *resultat = ft_strrchr(suite, occurance);
    printf("%s\n", suite);
    printf("afficher a partir de la derniere occurance de : '%c'\n", occurance);
    if(resultat == NULL)
        printf("!!Pas d'occurance trouvée!!\n");
    else
    {
        printf("ft_strrchr = %s\n\n", resultat);
    }

	/* TEST FT_SUBSTR */

	char *chaine4 = "Je recherche un mot dans cette phrase";
	int start = 3;
	size_t taille2 = 20;
	printf("ft_substr : '%s'\n", chaine4);
	printf("a partir de '%c' et jusqu'a '%c'\n", chaine4[start], chaine4[start + taille2 - 1]);
	char *recherche2 = ft_substr(chaine4, start, taille2);

	printf("%s\n\n", recherche2);

	/* TEST FT_STRJOIN */

	char *chaine5 = "Je suis";
	char *chaine6 = " le fils de ma mère";
	char *chaine7 = ft_strjoin(chaine5, chaine6);

	printf("la somme des deux chaine : %s\n", chaine7);
	printf("main longueur chaine : %zu\n", ft_strlen(chaine7));




	return(0);
}

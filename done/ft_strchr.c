char    *ft_strchr(const char *s, int c)
{
    char *s1 =(char *) s;
    while(*s1 != c)
    {
        s1++;
        if(*s1 == '\0')
            return 0;
    }
    
    return s1 ;
}

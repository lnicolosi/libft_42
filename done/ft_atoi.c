int ft_atoi(const char *nptr)
{
    int i;
    int signe;
    int resultat;

    resultat = 0;
    signe = 1;
    i = 0;
    
    while(nptr[i] == ' ')
        i++;
    while(nptr[i])
    {
        if(nptr[i] < 48 || nptr[i] > 57)
            return (resultat*signe);
        resultat = resultat * 10 + nptr[i] - 48;
        i++;
    }
    
    return (resultat*signe);
}

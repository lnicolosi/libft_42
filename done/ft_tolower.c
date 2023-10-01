int ft_tolower(int c)
{
    if(c > 64 && c < 90)
    {
        c = c + 32;
    }

    return c;
}

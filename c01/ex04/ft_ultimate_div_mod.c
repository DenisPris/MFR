void ft_div_mod(int a, int b, int *div, int *mod)

{
    int swap;
    
    swap = *a / *b;
    *a = swap;
    *b = *a % *b; 
}
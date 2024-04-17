int print_char(char);

int my_get_char_repeat(char to_find, const char *to_search)
{
    int a = 0;
    int res;
    for (res = 0; to_search[res]; res++);
    for(int i = res; i > -1; i--)
    {
        if (to_search[i]  == to_find)
        {
            a += 1;
        }
    }
    return a;
}
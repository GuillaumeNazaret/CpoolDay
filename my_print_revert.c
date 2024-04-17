int print_char(char);

void my_print_revert(char *toRevert)
{
    int res;
    for (res = 0; toRevert[res]; res++);
    for(int i = res; i > -1; i--)
    {
        print_char(toRevert[i]);
    }
}
int print_char(char);

char *my_char_replace(char *origin, char toFind, char toReplace)
{
    int res;
    for (res = 0; origin[res]; res++);
    for(int i = 0; i < res; i++)
    {
        if (origin[i] == toFind)
        {
            origin[i] = toReplace;
        }
    }
    return origin;
}
int print_char(char);

void my_print_n_ascii(int howMany)
{
    int offset = 32;
    for(int i = offset; i <= offset + howMany - 1; i++)
    {
        print_char(i);
    }
}

int main(void)
{
    my_print_n_ascii(10);
}
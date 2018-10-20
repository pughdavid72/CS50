#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int y = get_int("Key:"); //how far along should letters move in ASCII format//
    string s = get_string("before: ");
    printf("after: ");
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'z')
        {
            printf("%c", s[i] + (y));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

}

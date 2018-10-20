#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char initials [4];
    string s = get_string("Full Name: ");
    int counter = 0;
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if (isupper(s[i]))
        {
            initials[counter] = s[i];
            counter++;
        }
    }
    initials[counter] ='\0';
    printf("%s \n", initials);
}

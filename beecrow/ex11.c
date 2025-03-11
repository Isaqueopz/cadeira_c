#include <stdio.h>
#include <string.h>
int main()
{
    char v[14];
    scanf("%s", v);
    if (v[0] == 'v')
    {
        scanf("%s", v);
        if (v[0] == 'a')
        {
            scanf("%s", v);
            if (v[0] == 'c')
            {
                printf("aguia\n");
            }
            else if (v[0] == 'o')
            {
                printf("pomba\n");
            }
        }
        if (v[0] == 'm')
        {
            scanf("%s", v);
            if (v[0] == 'o')
            {
                printf("homem\n");
            }
            else if (v[0] == 'h')
            {
                printf("vaca\n");
            }
        }
    }
    if (v[0] == 'i')
    {
        scanf("%s", v);
        if (v[0] == 'i')
        { // inseto
            scanf("%s", v);
            if (v[2] == 'm')
            {
                printf("pulga\n");
            }
            else if (v[2] == 'r')
            {
                printf("lagarta\n");
            }
        }
        if (v[0] == 'a')
        {
            scanf("%s", v);
            if (v[0] == 'h')
            {
                printf("sanguessuga\n");
            }
            if (v[0] == 'o')
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
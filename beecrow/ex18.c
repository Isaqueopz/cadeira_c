#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    getchar(); 

    char v[n][1001];

 
    for (i = 0; i < n; i++)
    {
        fgets(v[i], 1001, stdin);
        v[i][strcspn(v[i], "\n")] = '\0'; 
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; v[i][j] != '\0'; j++)
        {
            if (isalpha(v[i][j])) 
            {
                v[i][j] += 3;
            }
        }
    }


    for (i = 0; i < n; i++)
    {
        int t = strlen(v[i]);
        for (int a = 0, j = t - 1; a < j; a++, j--)
        {
            char temp = v[i][a];
            v[i][a] = v[i][j];
            v[i][j] = temp;
        }
    }


    for (i = 0; i < n; i++)
    {
        int t = strlen(v[i]);
        int tmd = t / 2; 

        for (j = tmd; j < t; j++) 
        {
            v[i][j] -= 1; 
        }
    }

   
    for (i = 0; i < n; i++)
    {
        printf("%s\n", v[i]);
    }

    return 0;
}

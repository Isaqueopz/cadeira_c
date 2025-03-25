#include <stdio.h>
#include <string.h>
int main()
{   
    int i,j;
    int count;
    int onecount;
    int result = 0;
    scanf("%d",&count);
    int v[count][3];
    for (i = 0; i < count; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&v[i][j]);
        }
        
    }

    for (i = 0; i < count; i++)
    {
        onecount = 0;
        for ( j = 0; j < 3; j++)
        {
           if (v[i][j] == 1)
           {
            onecount++;
            }
        }
        if (onecount >= 2)
        {
            result++;
        }
    }
    
    printf("%d\n",result);
}

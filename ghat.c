#include <stdio.h>

int main()
{
    float x[4];
    float y[4];
    float m[4];
    for (int i = 0; i < 4; i++)
    {
        printf("enter x of your point:");
        scanf("%f", &x[i]);
        printf("enter y of your point:");
        scanf("%f", &y[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        m[i] = (y[0] - y[i]) / (x[0] - x[i]);
    }
    for (int i = 2; i < 4; i++)
    {
        if (m[1] == m[i])
        {
            printf("they are on the on line");
        }
        else
        {
            printf("they are not on the onr line");
        }
    }

    return 0;
}
// by: Kian Majlessi - FP-991-Dr.Mahvash - Class Code

#include <stdio.h>
unsigned short int res(unsigned short int k);

int main()
{
    unsigned short int k;
    scanf("%hu", &k);
    printf("%hu", res(k));
    return 0;
}

unsigned short int res(unsigned short int k)
{
    unsigned short int n = 1, temp2, c, z = 0; // z,c for fill the array
    unsigned short int num[4003] = {}, temp[4];

    for (int i = 0; i <= k; i++)
    {
        temp2 = n;
        c = 0;
        while (temp2 != 0)
        {
            temp[c] = temp2 % 10;
            c++;
            temp2 /= 10;
        }

        for (int j = c - 1; j > -1; j--)
        {
            num[z] = temp[j];
            z++;
            if (z >= k)
                break;
        }
        
        if (z >= k)
            break;
            
        n++;
    }

    return num[k - 1];
}
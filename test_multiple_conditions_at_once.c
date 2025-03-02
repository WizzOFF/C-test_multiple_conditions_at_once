#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
    if (age > 18 && age < 25)
    */


    // Modify with an "OR" constraint with ||

    if (age > 30 || argent > 100000)
    {
        printf("Bienvenue chez PicsouBanque !");
    }
    else
    {
        printf("Hors de ma vue, miserable !");
    }
     
    return 0;
}
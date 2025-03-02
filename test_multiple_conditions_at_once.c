#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
    if (age > 18 && age < 25)
    */


    // Modify with an "OR" constraint with ||
    /*
    if (age > 30 || argent > 100000)
    {
        printf("Bienvenue chez PicsouBanque !");
    }
    else
    {
        printf("Hors de ma vue, miserable !");
    }
    */


    // Test the opposite of a condition with !
    /*
    if (!(age < 18))
    {
        printf("Bienvenue chez PicsouBanque !");
    }
    else
    {
        printf("Hors de ma vue, miserable gone !");
    }
    */


    // Make true/false conditions with booleans
    /*
    if (0)
    {
        printf("C'est vrai");
    }
    else
    {
        printf("C'est faux");
    }
    */


    // Make true/false conditions with booleans
    /*
    if (1)
    {
        printf("C'est vrai");
    }
    else
    {
        printf("C'est faux");
    }
    */


    // Optimize the code with the switch condition

    switch (age)
    {
    case 2:
        printf("Salut bebe !");
        break;
    case 6:
        printf("Salut gamin !");
        break;
    case 12:
        printf("Salut jeune !");
        break;
    case 16:
        printf("Salut ado !");
        break;
    case 18:
        printf("Salut adulte !");
        break;
    case 68:
        printf("Salut papy !");
        break;
    default:
        printf("Je n'ai aucune reponse pour ton age");
        break;
    }
    
    return 0;
}
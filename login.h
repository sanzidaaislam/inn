#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

void login()
{
    int a = 0, i = 0;
    char uname[10], c = ' ';
    char pword[10], code[10];
    char user[10] = "a";
    char pass[10] = "b";
    do
    {
        system("cls");

        printf("\n  **************************  LOGIN FORM  **************************  ");
        printf(" \n                       ENTER USERNAME:-");
        scanf("%s", &uname);
        printf(" \n                       ENTER PASSWORD:-");
        while (i < 10)
        {
            pword[i] = getch();
            c = pword[i];
            if (c == 13)
                break;
            else
                printf("*");
            i++;
        }
        pword[i] = '\0';

        i = 0;

        if (strcmp(uname, user) == 0 && strcmp(pword, pass) == 0)
        {
            printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

            break;
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
            a++;

            getch();
        }
    } while (a <= 2);
    if (a > 2)
    {
        printf("\nSorry you have entered the wrong username and password for four times!!!");

        getch();
    }
    system("cls");
}

#endif // LOGIN_H_INCLUDED

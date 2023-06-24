#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

void list()
{
    FILE *f;
    int i;
    if ((f = fopen("add.txt", "rb")) == NULL)
        exit(0);
    system("cls");
    printf("ROOM\t");
    printf("NAME\t ");
    printf("ADDRESS\t ");
    printf("PHONENUMBER\t ");
    printf("NATIONALITY\t ");
    printf("EMAIL\t\t");
    printf("PERIOD\t");
    printf("ARRIVALDATE\t");
    printf("DEPARTUREDATE\t\n");

    for (i = 0; i < 120; i++)
        printf("-");

    while (fread(&s, sizeof(s), 1, f) == 1)
    {
        printf("\n%s", s.roomnumber);
        printf("\t");
        printf("%s", s.name);
        printf("\t ");
        printf("%s", s.address);
        printf("\t\t");
        printf("%s", s.phonenumber);
        printf("\t ");
        printf("%s", s.nationality);
        printf("\t ");
        printf("%s", s.email);
        printf("\t  ");
        printf("%s", s.period);
        printf("\t");
        printf("%s", s.arrivaldate);
        printf("\t");
        printf("%s", s.departuredate);
    }
    fclose(f);
    getch();
}

#endif // LIST_H_INCLUDED

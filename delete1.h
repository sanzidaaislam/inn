#ifndef DELETE1_H_INCLUDED
#define DELETE1_H_INCLUDED

void delete1()
{
    FILE *f, *t;
    int i = 1;
    char roomnumber[20];
    if ((t = fopen("temp.txt", "w+")) == NULL)
        exit(0);
    if ((f = fopen("add.txt", "r")) == NULL)
        exit(0);
    system("cls");
    printf("Enter the Room Number of the hotel to be deleted from the database: \n");
    fflush(stdin);
    scanf("%s", roomnumber);
    while (fread(&s, sizeof(s), 1, f) == 1)
    {
        if (strcmp(s.roomnumber, roomnumber) == 0)
        {
            i = 0;
            continue;
        }
        else
            fwrite(&s, sizeof(s), 1, t);
    }
    if (i == 1)
    {
        printf("\n\n Records of Customer in this  Room number is not found!!!");
        getch();
        fclose(f);
        fclose(t);
        main();
    }
    fclose(f);
    fclose(t);
    remove("add.txt");
    rename("temp.txt", "add.txt");
    printf("\n\nThe Customer is successfully removed....");
    fclose(f);
    fclose(t);
    getch();
}

#endif // DELETE1_H_INCLUDED

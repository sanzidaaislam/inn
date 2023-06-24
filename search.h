#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED


void search()
{
    system("cls");
    FILE *f;
    char searchString[20];
    int flag = 1;
    f = fopen("add.txt", "r+");
    if (f == NULL)
        exit(0);
    fflush(stdin);
    printf("Enter the name or room number of the customer to search: ");
    scanf("%s", searchString);
    while (fread(&s, sizeof(s), 1, f) == 1)
    {
        if (strcmp(s.name, searchString) == 0 || strcmp(s.roomnumber, searchString) == 0)
        {
            flag = 0;
            printf("\n\tRecord Found\n");
            printf("Room Number: %s\n", s.roomnumber);
            printf("Name: %s\n", s.name);
            printf("Address: %s\n", s.address);
            printf("Phone number: %s\n", s.phonenumber);
            printf("Nationality: %s\n", s.nationality);
            printf("Email: %s\n", s.email);
            printf("Period: %s\n", s.period);
            printf("Arrival date: %s\n", s.arrivaldate);
            printf("Departure date: %s\n", s.departuredate);
            printf("----------------------\n");
        }
    }
    if (flag == 1)
    {
        printf("\n\tRequested Customer could not be found!\n");
    }
    getch();
    fclose(f);
}
#endif // SEARCH_H_INCLUDED

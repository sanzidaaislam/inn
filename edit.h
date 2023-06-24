#ifndef EDIT_H_INCLUDED
#define EDIT_H_INCLUDED


void edit()
{
    FILE *f;
    int k = 1;
    char roomnumber[20];
    long int size = sizeof(s);
    if ((f = fopen("add.txt", "rb+")) == NULL)
        exit(0);
    system("cls");
    printf("Enter Room number of the customer to edit:\n");
    scanf("%s", roomnumber);
    fflush(stdin);
    while (fread(&s, sizeof(s), 1, f) == 1)
    {
        if (strcmp(s.roomnumber, roomnumber) == 0)
        {
            printf("\nEnter Room number:");
            scanf("%s", &s.roomnumber);
            fflush(stdin);
            printf("Enter Name:");
            scanf("%s", &s.name);
            printf("Enter Address:");
            scanf("%s", &s.address);
            printf("Enter Phone number:");
            scanf("%s", &s.phonenumber);
            fflush(stdin);
            printf("Enter Nationality:");
            scanf("%s", &s.nationality);
            printf("Enter Email:");
            scanf("%s", &s.email);
            printf("Enter Period:");
            scanf("%s", &s.period);
            printf("Enter Arrival date (dd\\mm\\yyyy):");
            scanf("%s", &s.arrivaldate);
            printf("Enter Departure date (dd\\mm\\yyyy):");
            scanf("%s", &s.departuredate);
            fseek(f, -size, SEEK_CUR);
            fwrite(&s, sizeof(s), 1, f);
            fflush(stdin);
            k = 0;
            break;
        }
        fflush(stdin);
    }
    if (k == 1)
    {
        printf("\n\nTHE RECORD DOES NOT EXIST!!!!");
        fclose(f);
        getch();
        main();
    }
    fclose(f);
    fclose(f);
    getch();
}
#endif // EDIT_H_INCLUDED

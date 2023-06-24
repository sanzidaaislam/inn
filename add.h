#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED
struct CustomerDetails //STRUCTURE DECLARATION
{
    char roomnumber[10];
    char name[20];
    char address[25];
    char phonenumber[15];
    char nationality[15];
    char email[20];
    char period[10];
    char arrivaldate[10];
    char departuredate[10]; // New field for departure date
} s;
void add()
{
    FILE *f;
    char test;
    f = fopen("add.txt", "ab+");
    if (f == 0)
    {
        f = fopen("add.txt", "wb+");
        system("cls");
        printf("Please hold on while we configure your computer");
        printf("/npress any key to continue");
        getch();
    }
    while (1)
    {
        system("cls");
        printf("\n Enter Customer Details:");
        printf("\n**************************");
        printf("\n Enter Room number:\n");
        scanf("%s", s.roomnumber);
        fflush(stdin);
        printf("Enter Name:\n");
        scanf("%s", s.name);
        printf("Enter Address:\n");
        scanf("%s", s.address);
        printf("Enter Phone Number:\n");
        scanf("%s", s.phonenumber);
        fflush(stdin);
        printf("Enter Nationality:\n");
        scanf("%s", s.nationality);
        printf("Enter Email:\n");
        scanf("%s", s.email);
        printf("Enter Period(days):\n");
        scanf("%s", s.period);
        printf("Enter Arrival date (dd\\mm\\yyyy):\n");
        scanf("%s", s.arrivaldate);
        printf("Enter Departure date (dd\\mm\\yyyy):\n");
        scanf("%s", s.departuredate);
        fwrite(&s, sizeof(s), 1, f);
        fflush(stdin);
        printf("\n\n1 Room is successfully booked!");
        printf("\n Press esc key to exit,  any other key to add another customer detail:");

        test = getch();
        if (test == 27)
            break;
    }
    fclose(f);
}

#endif // ADD_H_INCLUDED

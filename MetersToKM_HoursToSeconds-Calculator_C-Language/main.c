#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define KEY " Please Choose:"

void intro();
void intro2();
void MetersToKilometers();
void MetersToKilometersMENU();
void HoursToSeconds();
void HoursToSecondsMENU();
void askToRepeat();

int main()
{

    int X=1;
    char options;

    // Function call
    intro();

    while(X)
    {
        printf("\n");
        printf(" %s ", KEY);

        options=getche();


        switch(options)
        {

        case 'A':
        case 'a':
            HoursToSeconds();
            break;

        case 'B':
        case 'b':
            MetersToKilometers();
            break;

        case 'Q':
        case 'q':
            printf("\n\n  Bye...\n\n");
            exit(0);
            break;

        case 'c':
        case 'C':
            printf("\n\n  Cleaning...\n");
            sleep(1);
            system("cls");
            intro2();
            break;

        default :
            system("cls");
            printf("\n\t    **********You have entered unavailable option***********");
            printf("\n\t     ****Please Enter any one of below available options****");
            intro2();

        }
    }
}

void intro()
{
    int width = 80;
    char str[] = "WELCOME TO";
    int length = sizeof(str) - 1;  // Discount the terminal '\0'
    int pad = (length >= width) ? 0 : (width - length) / 2;

    printf("\n%*.*s%s\n", pad, pad, " ", str);

    printf("\t\t  \xB2\xB2\xB2\xB2\ METERS TO KM & HOURS TO SECS. CALC \xB2\xB2\xB2\xB2");
    printf("\t\t\t\t\t       Created by Barrameda, Emmanuel P.\n\n");

    printf("\n  *Meters to Kilometers Formula: Divide the length value by 1000");
    printf("\n  *Hours to Seconds Formula: Multiply the time value by 3600");

    printf("\n\n\n  Press 'A' or 'a' to start computing HOURS to SECONDS\n");
    printf("  Press 'B' or 'b' to start computing METERS to KILOMETERS\n");
    printf("  Press 'C' or 'c' to clear the screen and display the available option.\n");
    printf("  Press 'Q' or 'Q' to quit.\n");
}

void intro2()
{
    printf("\n\n");
    printf("\t\t  \xB2\xB2\xB2\xB2\ METERS TO KM & HOURS TO SECS. CALC \xB2\xB2\xB2\xB2");

    printf("\n\n\n  Press 'A' or 'a' to start computing HOURS to SECONDS\n");
    printf("  Press 'B' or 'b' to start computing METERS to KILOMETERS\n");
    printf("  Press 'C' or 'c' to clear the screen and display the available option.\n");
    printf("  Press 'Q' or 'Q' to quit.\n");
}

void HoursToSeconds()
{
    double seconds;
    int hour;

    printf("\n\n--------------------------------------------------");
    printf("\n  CONVERT HOURS TO SECONDS");
    printf("\n\n  FORMULA: Seconds = (hours x 3,600) = ANS");
    printf("\n  E.G: 5 hr = (5 x 3,600) = 18,000 secs.");
    printf("\n");
    printf("\n  Enter Hours: ");
    scanf(" %lf", &seconds);

    hour = seconds*3600;
    printf("  Hours: %.2d seconds.", hour);

    printf("\n--------------------------------------------------");

    HoursToSecondsMENU();
}

void HoursToSecondsMENU()
{
    int yn;
    sleep(1);
    printf("\n\n  Would you like to Convert HOURS to SECONDS Again?");
    printf("\n  Please Enter:");
    printf("\n  1 = YES, Convert Again");
    printf("\n  2 = BACK TO MAIN MENU");
    printf("\n  3 = CLEAR THE SCREEN");
    printf("\n  4 = QUIT");
    printf("\n\n  CHOOSE: ");
    scanf(" %d", &yn);
    getchar();

    if(yn == 1)
    {
        printf("\n  Repeating the Hours to Seconds Program...");
        sleep(1);
        HoursToSeconds();

    }
    else if(yn == 2)
    {
        printf("\n  Going back to main menu...");
        sleep(1);
        intro2();

    }
    else if(yn == 3)
    {
        printf("\n  Cleaning...");
        sleep(1);
        system("cls");
        HoursToSecondsMENU();

    }
    else if(yn == 4)
    {
        printf("\n  Bye...\n\n");
        exit(0);

    }
    else
    {
        printf("\n  Invalid Input, Please try again!\n\n");
        HoursToSecondsMENU();
    }

}

void MetersToKilometers()
{
    unsigned int m;
    float km;

    printf("\n\n--------------------------------------------------");
    printf("\n  METERS TO KILOMETERS");
    printf("\n\n  FORMULA: Kilometers = (meters / 1,000) = ANS");
    printf("\n  E.G: 5,000 m = (5,000 / 1,000) = 5 km.");
    printf("\n");
    printf("\n  Enter the Meter Value: ");
    scanf(" %d", &m);

    km=m/1000.00;

    if (m % 1000 == 0)
    {
        printf("  Kilometers: %.0f km",km);

    }
    else if (m % 100 == 0)
    {
        printf("  Kilometers: %.1f km",km);

    }
    else if (m % 50 == 0)
    {
        printf("  Kilometers: %.2f km",km);

    }
    else
    {
        printf("  Kilometers: %.3f km",km);
    }

    printf("\n--------------------------------------------------");
    MetersToKilometersMENU();
}

void MetersToKilometersMENU()
{
    int yn;
    sleep(1);
    printf("\n\n  Would you like to Convert METERS to KILOMETERS Again?");
    printf("\n  Please Enter:");
    printf("\n  1 = YES, Convert Again");
    printf("\n  2 = BACK TO MAIN MENU");
    printf("\n  3 = CLEAR THE SCREEN");
    printf("\n  4 = QUIT");
    printf("\n\n  CHOOSE: ");
    scanf(" %d", &yn);
    getchar();

    if(yn == 1)
    {
        printf("\n  Repeating the Meters to Kilometers Program...");
        sleep(1);
        MetersToKilometers();

    }
    else if(yn == 2)
    {
        printf("\n  Going back to main menu...");
        sleep(1);
        intro2();

    }
    else if(yn == 3)
    {
        printf("\n  Cleaning...");
        sleep(1);
        system("cls");
        MetersToKilometersMENU();

    }
    else if(yn == 4)
    {
        printf("\n  Bye...\n\n");
        exit(0);

    }
    else
    {
        printf("\n  Invalid Input, Please try again!\n\n");
        MetersToKilometersMENU();
    }
}

void askToRepeat()
{
    int yn;
    sleep(1);
    printf("\n  Would you like to continue?");
    printf("\n  Please Enter, YES = 1 or NO = 2: ");
    scanf(" %d", &yn);
    getchar();

    if(yn == 1)
    {
        printf("\n  Repeating the program...");
        sleep(1);
        intro2(); //re-run the program to ask

    }
    else if(yn == 2)
    {
        printf("\n  Bye...\n\n");
        exit(0);

    }
    else
    {
        printf("\n  Invalid Input, Please try again!\n\n");
        askToRepeat();
    }
}


//THIS CONSOLE PROGRAM IS TESTED ON CODEBLOCKS IDE
//Copyright 2021 emmanpbarrameda

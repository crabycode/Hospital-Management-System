#include <stdio.h>
#include <stdlib.h>
typedef struct Patient
{
    char name[51];
    char diagnoze[61];
    char gender[8];
    char date[11];

}Patient;
typedef struct Hospital
{
    char name[31];
    char address[101];
    Patient patients[51];
    float bedPrice;
    float availableBeds;
    int rating;
    char city;
}Hospital;
void addPatients()
{

}
void addHospital()
{

}
void hospitalData(char *hospitalName)
{

}
void patientsData(char *patient)
{

}
void sortByPrice(float price)
{

}
void sortByAvailableBeds()
{

}
void sortByName()
{

}
void sortByRating(int rating)
{

}
void printHospitalByCity(char *city)
{

}
int main()
{
    printf("Welcome to our hospital management system!\n");
    printf("1)Add Patients    2)Add Hospital\n3)Hospital data   4)Patients data\n5)Sort by price   6)Sort by available beds\n");
    printf("7)Sort by name    8)Sort by rating\n9)Print hospital in a certain city\n");
    int choice;
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            addPatients();
            break;
        case 2:
            addHospital();
            break;
        case 3:
            printf("Please enter hospital name: ");
            char hospitalName[31];
            scanf("%s", hospitalName);
            hospitalData(hospitalName);
            break;
        case 4:
            printf("Please enter patient name: ");
            char patientName[51];
            scanf("%s", patientName);
            patientsData(patientName);
            break;
        case 5:
            printf("Please enter price: ");
            float price;
            scanf("%f", &price);
            sortByPrice(price);
            break;
        case 6:
            sortByAvailableBeds();
            break;
        case 7:
            sortByName();
            break;
        case 8:
            printf("Please enter rating: ");
            int rating;
            scanf("%d", &rating);
            sortByRating(rating);
            break;
        case 9:
            printf("Please enter city: ");
            char city[31];
            scanf("%s", city);
            printHospitalByCity(city);
            break;
        default:
            printf("Invalid choice;");
    }
    return 0;
}

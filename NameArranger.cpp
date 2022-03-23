#include <iostream>
#include <string>

using namespace std;
int main()
{
    char FirstArray[100] = {'\0'}, MiddleArray[100] = {'\0'}, LastArray[100] = {'\0'}, SetArray[100] = {'\0'};

    printf("Enter your first name:");
    scanf("%100s", FirstArray);
    printf("Enter your middle name:");
    scanf("%100s", MiddleArray);
    printf("Enter your last name:");
    scanf("%100s", LastArray);

    int index = 0;
    for (int i = 0; LastArray[i] != '\0'; i++) // For Loop to fill the final name array with chars of the last name
    {
        SetArray[index++] = LastArray[i];
    }

    SetArray[index++] = ',';
    SetArray[index++] = ' ';

    for (int i = 0; FirstArray[i] != '\0'; i++)// For Loop to fill the final name array with chars from the first name
    {
        SetArray[index++] = FirstArray[i];
    }

    SetArray[index++] = ' ';
    SetArray[index++] = MiddleArray[0]; // Only need first char of middle name
    SetArray[index++] = ' .';
    SetArray[index++] = '\0'; // stopping array 


    size_t n = sizeof(SetArray); // creating n to hold size of final name array 
    for (int i = 0; i < n; i++)
    {
          printf("%c", SetArray[i]);
    }
    
    
}

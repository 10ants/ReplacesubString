#include <iostream>
#pragma warning(disable: 4996)
using namespace std;
int main()
{
    const int SIZE = 30;
    const int RESULT_SIZE = 100;
    char first[SIZE], middle[SIZE], last[SIZE], result[RESULT_SIZE];
    cout << "Enter your first, middle & last name separated by spaces: "
        << endl;
    scanf("%30s %30s %30s", first, middle, last);
    strncpy(result, last, 30);
    strcat(result, ", ");
    strncat(result, first, 30);
    strcat(result, " ");
    strncat(result, middle, 1);
    strcat(result, ".");
    printf("%s\n", result);
    return 0;
}

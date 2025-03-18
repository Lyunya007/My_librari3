#include <time.h>
#include "my_function.h"

// Function to calculate age based on birth date
int calculateAge(int birthYear, int birthMonth, int birthDay) {
    time_t t = time(NULL);  // Get the current time
    struct tm currentTime = *localtime(&t);  // Convert current time to tm structure

    int age = currentTime.tm_year + 1900 - birthYear;  // Calculate the current year minus birth year
    // If the user hasn't had their birthday yet this year, subtract one from the age
    if (currentTime.tm_mon + 1 < birthMonth || (currentTime.tm_mon + 1 == birthMonth && currentTime.tm_mday < birthDay)) {
        age--;
    }
    return age;
}
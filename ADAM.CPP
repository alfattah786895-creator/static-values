#include <stdio.h>

struct Date { int day, month, year; };
struct student {
    int id;
    char name[18];
    struct Date dob;   // nested
};
int main() {
    struct student s1 = {1, "Adam", {03, 05, 2008}};

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("DOB: %d/%d/%d\n", s1.dob.day,
	   s1.dob.month, s1.dob.year);
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Worker {
    char name[50];
    int age;
    int id;
    bool isFullTime;
};

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isPresent;
} Student;

void printStudent(Student s);

int main() {

    struct Worker w3 = {"Lalo", 40, 03, false};
    Student s1 = {"Lily", 12, 3.6, true};
    Student student2 = {"Raven", 14, 4.4, false};

    // Student s3; //garbage value 
    Student s3 = {0};

    // strcpy(s3.name, "Sydney");
    //strncpy to safely copy a certain amount of characters

    // manual assignment 
    strncpy(s3.name, "Sydney", 6);
    s3.age = 23;
    s3.gpa = 4.9;
    s3.isPresent = true;

    // printf("%s\n", s3.name);
    // printf("%d\n", s3.age);
    // printf("%.2f\n", s3.gpa);
    // printf("%s\n", (s3.isPresent)? "Yes she is present" : "She remains absent");

    // printf("\n");

    // printf("%s\n", s1.name);
    // printf("%d\n", s1.age);
    // printf("%.2f\n", s1.gpa);
    // printf("%s\n", (s1.isPresent)? "Yes she is present" : "She remains absent");
    
    // printf("\n");

    // printf("%s\n", student2.name);
    // printf("%d\n", student2.age);
    // printf("%.2f\n", student2.gpa);
    // printf("%s\n", (student2.isPresent)? "Yes she is present" : "She remains absent");
    
    // printf("\n");
    
    printf("%s\n", w3.name);
    printf("%d\n", w3.age);
    printf("%d\n", w3.id);
    printf("%s\n", (w3.isFullTime)? "Yes very deligent" : "No, he's a slacker");

    printf("\n");

    printStudent(s1);
    printStudent(student2);
    printStudent(s3);
    
    return 0;
}


// Student is the datatype and s is the  variable 
void printStudent(Student s) {
    
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Gpa: %.2f\n", s.gpa);
    printf("%s\n", (s.isPresent)? "Yes she is present" : "She remains absent");
    printf("\n");
    
}

/*

A custom container that holds multiple pieces of related information (blueprint)
It is similar to objects in other languages 

*/
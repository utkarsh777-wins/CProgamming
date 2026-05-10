// #include <stdio.h>

// struct cars {
//     char *name;
//     int horsePower;
//     float fuelCapacity;
// };

// int main() {

// }

#include <stdio.h>


// struct Student {
//     char name[20];
//     int reg;
//     float cgpa;
// };

// //manual input 
// int main() {
//     // struct Student s1, s2
//     struct Student s1 = {"rithik", 12500, 7.5};
//     printf("Name= %s\n", s1.name);
//     printf("Reg. No. = %d\n", s1.reg);
//     printf("CGPA= %.2f\n", s1.cgpa);

// }

//user input 
// struct Student {
//     char name[20];
//     int reg;
//     float cgpa;
// }s[3];

// //user input 
// // int main() {
// //     printf("Enter name: ");
// //     scanf("%s", s1.name);
// //     printf("Enter reg: ");
// //     scanf("%d", &s1.reg);
// //     printf("Enter cgpa: ");
// //     scanf("%f", &s1.cgpa);

// //     printf("%s\n", s1.name);
// //     printf("%d\n", s1.reg);
// //     printf("%.2f\n", s1.cgpa);

// // }

// //struct array
// int main() {
//     for(int i=0; i<3; i++) {
//         printf("Details of %d student: \n", i+1);
//         printf("Name: ");
//         scanf("%s", s[i].name);
//         printf("Reg no: ");
//         scanf("%d", &s[i].reg);
//         printf("CGPA: ");
//         scanf("%f", &s[i].cgpa);
        
//     }

//     for(int i=0; i<3; i++) {

//         printf("Name = %s | Reg no: %d | CGPA: %.2f\n", s[i].name, s[i].reg, s[i].cgpa);

//     }
// }

struct Book{

    char *name;
    int total_pages;
    float price;

};

int main() {
    struct Book pr= {"C", 120, 255.45};
    struct Books *python;
    python = &pr;;

    printf("Name= %s", python->name);
}
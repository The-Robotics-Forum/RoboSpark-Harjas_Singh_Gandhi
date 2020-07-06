/*<-------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!------------------------------->*/
//make a student record using structures containing student id, name, year and cgpa;Hence make 4 students.
/*<-------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!------------------------------->*/
#include <stdio.h>
#include <string.h>
/*<-------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!------------------------------->*/
 struct Hogwarts
 {
    char name[20];
    int year,id;
    float cgpa;
};
/*<-------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!------------------------------->*/
main()
{
    struct Hogwarts stu1,stu2,stu3,stu4;
    strcpy(stu1.name,"Harry");
    stu1.year = 4;
    stu1.id = 101;
    stu1.cgpa = 8.8;
    strcpy(stu2.name,"Ron");
    stu2.year = 4;
    stu2.id = 102;
    stu2.cgpa = 8.7;
    strcpy(stu3.name,"Hermoine");
    stu3.year = 4;
    stu3.id = 102;
    stu3.cgpa = 10.0;
    strcpy(stu4.name,"Draco");
    stu4.year = 4;
    stu4.id = 151;
    stu4.cgpa = 8.8;
    printf("stu1:->\n\tNAME: %s\n\tYear: %d\n\tID: %d\n\tcgpa: %f\n",stu1.name,stu1.year,stu1.id,stu1.cgpa);
    printf("stu2:->\n\tNAME: %s\n\tYear: %d\n\tID: %d\n\tcgpa: %f\n",stu2.name,stu2.year,stu2.id,stu2.cgpa);
    printf("stu3:->\n\tNAME: %s\n\tYear: %d\n\tID: %d\n\tcgpa: %f\n",stu3.name,stu3.year,stu3.id,stu3.cgpa);
    printf("stu4:->\n\tNAME: %s\n\tYear: %d\n\tID: %d\n\tcgpa: %f\n",stu4.name,stu4.year,stu4.id,stu4.cgpa);
    
    return 0;
}
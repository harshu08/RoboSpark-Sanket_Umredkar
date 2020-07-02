// Info. of Students Using Structures 

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// Create the student structure 
struct Student { 
	char* name; 
	int id; 
	int year; 
	float cgpa; 
}; 

int main() 
{ 
	int i = 0, n = 4; 

	// Create the student's structure variable with n Student's records 
	struct Student student[n]; 

	// Get the students data 
	student[0].id = 11910982; 
	student[0].name = "Harshita"; 
	student[0].year = 2; 
	student[0].cgpa = 9.1; 

	student[1].id= 11812843; 
	student[1].name = "Aditya"; 
	student[1].year = 3; 
	student[1].cgpa = 7.8; 

	student[2].id= 11919365; 
	student[2].name = "Kailash"; 
	student[2].year = 2; 
	student[2].cgpa = 8.4; 

	student[3].id= 12018723; 
	student[3].name = "Ruhi"; 
	student[3].year = 1; 
	student[3].cgpa = 6.9; 
 

	// Print the Students information 
	printf("Student Records:\n\n"); 
	for (i = 0; i < n; i++) { 
		printf("\tName = %s\n", student[i].name); 
		printf("\tGR number = %d\n", student[i].id); 
		printf("\tyear = %d\n", student[i].year); 
		printf("\tCGPA = %0.2f\n\n", student[i].cgpa); 
	} 

	return 0; 
} 

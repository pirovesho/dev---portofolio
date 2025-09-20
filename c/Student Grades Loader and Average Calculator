//Load Student Data from File and Calculate Average Grades
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

typedef struct person{
	char name[15];
	char surname[15];
	int grades[5];
	float average;
}person;

void loadStudentsFromFile(person student[], char *name, int students, int grades){
	FILE *file;
	file = fopen(name, "r");
	
	if(file==NULL){
		printf("ERROR OPENING THE FILE!");
	}else{
		for(int i=0;i<students;i++){
			fscanf(file, "%s", student[i].name);
			fscanf(file, "%s", student[i].surname);
			for(int j=0;j<grades;j++){
				fscanf(file, "%d", &student[i].grades[j]);
			}
		}
	}
}


int main(){
	int noStudents, noGrades;
	printf("How many students will be tested in the file: ");
	scanf("%d", &noStudents);
	printf("How many grades does each student have: ");
	scanf("%d", &noGrades);
	
	char *nameOfFile = (char*)malloc(100);
	
	printf("File: ");
	scanf("%s", nameOfFile);
	
	strcat(nameOfFile, ".txt");
	
	person student[noStudents];
	
	loadStudentsFromFile(student, nameOfFile, noStudents, noGrades);
	
	for(int i=0;i<noStudents;i++){
		student[i].average=0;
		for(int j=0;j<noGrades;j++){
			student[i].average+=student[i].grades[j];
		}
		student[i].average/=(float)noGrades;
	}
	
	printf("\n\n\n");
	printf("NAME \t SURNAME \t AV.GRADE\n");
	printf("---- \t ------- \t --------");
	for(int i=0;i<noStudents;i++){
		printf("\n%s \t %s \t\t %.2f", student[i].name, student[i].surname, student[i].average);
	}
	
	
	
	return 0;
}

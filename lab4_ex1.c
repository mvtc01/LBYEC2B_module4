#include <stdio.h>
#include <stdlib.h>

#define TOTAL_COURSE 3

struct Course
{
	char name[80];
	int unit;
	float grade;
};

struct Student 
{
	int id;
	char name[80];
	char degree[80];
	struct Course course_data[TOTAL_COURSE];
	float GPA;
};

struct Student *record;

void getGPA(struct Student *record, int size)
{
	for (int k = 0; k < size; k++)
		{
			int Total_Units = 0;
			float Total_Credit_Honors = 0, GPA = 0;
			
			for (int j = 0; j <TOTAL_COURSE; j++)
			{
				Total_Credit_Honors += ((record + k)->course_data[j].grade)*((record + k)->course_data[j].unit);
				Total_Units += (record + k)->course_data[j].unit;
			}
			GPA = Total_Credit_Honors/Total_Units;
			printf("%s with ID number %d has a GPA of %2.3f", (record + k)->name, (record + k)->id, GPA);
			if (k < size - 1) printf("\n");
		}
}

void getRecord(struct Student *record, int size)
{
	int i, j, k;
	for (i = 0; i < size; i++)
	{
		printf("student name: ");
		scanf("%s", &(record + i)->name);
		printf("ID number: ");
		scanf("%d", &(record + i)->id);
		printf("degree: ");
		scanf("%s", &(record + i)->degree);
		for (j = 0; j < TOTAL_COURSE; j++ )
		{
			printf("course %d name: ", j+1);
			scanf("%s", &(record + i)->course_data[j].name);
			printf("course %d grade: ", j+1);
			scanf("%f", &(record + i)->course_data[j].grade);
			printf("course %d total units: ", j+1);
			scanf("%d", &(record + i)->course_data[j].unit);
		}
	}
}

int main(void)
{
    int N = -1, GPA = 0;
    do
    {
        //Gets the number of students to record N
        printf("Enter number of students to record: ");
        scanf("%d", &N);
    } while (N <= 0 || N > 20000);
    
    Student *record;
	record = (Student *)malloc(N * sizeof(Student)); //dynamic allocation of memory
	getRecord(record,N);
	getGPA(record,N);
	return 0;
}

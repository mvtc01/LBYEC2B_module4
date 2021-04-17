# Laboratory Activity 4 - Structures


## Student Grade Mini-Database

Develop a program that will define and store a student record. The data will be entered by the user. Afterwards, calculate and display the GPA of each student. You will need to use structure with array.


In case you don't know how to calculate GPA, here's the formula:

<img src="https://render.githubusercontent.com/render/math?math=GPA = \frac{Total\_Credit\_Honors}{Total\_Units}">

<img src="https://render.githubusercontent.com/render/math?math=Total\_Credit\_Honors = \sum_{i=1}^{TOTAL\_COURSE}{Grade_i * Unit_i}">


| Sample Console Input                                                                                                                                                                                       | Expected Console Output                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 2<br>John<br>10912345<br>ECE<br>Physics<br>100<br>3<br>Mathematics<br>70<br>2<br>Geology<br>50<br>1<br>Jose<br>10854321<br>CPE<br>Physics<br>80<br>3<br>Mathematics<br>60<br>2<br>Geology<br>90<br>1       | Enter number of students to record: 2<br>student name: John<br>ID number: 10912345<br>degree: ECE<br>course 1 name: Physics<br>course 1 grade: 100<br>course 1 total units: 3<br>course 2 name: Mathematics<br>course 2 grade: 70<br>course 2 total units: 2<br>course 3 name: Geology<br>course 3 grade: 50<br>course 3 total units: 1<br>student name: Jose<br>ID number: 10854321<br>degree: CPE<br>course 1 name: Physics<br>course 1 grade: 80<br>course 1 total units: 3<br>course 2 name: Mathematics<br>course 2 grade: 60<br>course 2 total units: 2<br>course 3 name: Geology<br>course 3 grade: 90<br>course 3 total units: 1<br>John with ID number 10912345 has a GPA of 81.667<br>Jose with ID number 10854321 has a GPA of 75.000<br>                                           |
| -1<br>2<br>John<br>10912345<br>ECE<br>Physics<br>100<br>3<br>Mathematics<br>70<br>2<br>Geology<br>50<br>1<br>Jose<br>10854321<br>CPE<br>Physics<br>80<br>3<br>Mathematics<br>60<br>2<br>Geology<br>90<br>1 | Enter number of students to record: -1<br>Enter number of students to record: 2<br>student name: John<br>ID number: 10912345<br>degree: ECE<br>course 1 name: Physics<br>course 1 grade: 100<br>course 1 total units: 3<br>course 2 name: Mathematics<br>course 2 grade: 70<br>course 2 total units: 2<br>course 3 name: Geology<br>course 3 grade: 50<br>course 3 total units: 1<br>student name: Jose<br>ID number: 10854321<br>degree: CPE<br>course 1 name: Physics<br>course 1 grade: 80<br>course 1 total units: 3<br>course 2 name: Mathematics<br>course 2 grade: 60<br>course 2 total units: 2<br>course 3 name: Geology<br>course 3 grade: 90<br>course 3 total units: 1<br>John with ID number 10912345 has a GPA of 81.667<br>Jose with ID number 10854321 has a GPA of 75.000<br> |
| 0<br>2<br>John<br>10912345<br>ECE<br>Physics<br>100<br>3<br>Mathematics<br>70<br>2<br>Geology<br>50<br>1<br>Jose<br>10854321<br>CPE<br>Physics<br>80<br>3<br>Mathematics<br>60<br>2<br>Geology<br>90<br>1  | Enter number of students to record: 0<br>Enter number of students to record: 2<br>student name: John<br>ID number: 10912345<br>degree: ECE<br>course 1 name: Physics<br>course 1 grade: 100<br>course 1 total units: 3<br>course 2 name: Mathematics<br>course 2 grade: 70<br>course 2 total units: 2<br>course 3 name: Geology<br>course 3 grade: 50<br>course 3 total units: 1<br>student name: Jose<br>ID number: 10854321<br>degree: CPE<br>course 1 name: Physics<br>course 1 grade: 80<br>course 1 total units: 3<br>course 2 name: Mathematics<br>course 2 grade: 60<br>course 2 total units: 2<br>course 3 name: Geology<br>course 3 grade: 90<br>course 3 total units: 1<br>John with ID number 10912345 has a GPA of 81.667<br>Jose with ID number 10854321 has a GPA of 75.000<br>  |



### Structure Guideline

**Structure #1: Course**

| Name  | Type     | Description                                                 |
| ----- | -------- | ----------------------------------------------------------- |
| name  | char(80) | Stores the name of the course. Max. Length of 80 characters |
| unit  | int      | Stores the no. of units on the course.                      |
| grade | float    | Stores the grade of a student on the course.                |

**Structure #2: Student**

| Name   | Type                 | Description                                                  |
| ------ | -------------------- | ------------------------------------------------------------ |
| id     | int                  | Stores the ID number of the student.                         |
| name   | char(80)             | Stores the name of the student. Max. Length of 80 characters |
| degree | char(80)             | Stores the degree program of the student                     |
| course | Course(TOTAL_COURSE) | Uses the Course Data Structure to store course content       |
| GPA    | float                | Stores the grade of a student on the course.                 |



### Testing Guideline:
- Make sure to use the TOTAL_COURSE MACRO from your code. Please use it to define the number of courses per student
- Make sure that the user can enter any value of value of N. (from 0 to 20,000)


### Hint:
In order for you to get dynamically allocate number of arrays of type Student, you can use the *malloc* function you've seen from your homework as shown below:

```c
Student *record;
record = (Student *)malloc(N * sizeof(Student));
```

where N is the number of students entered by the user.
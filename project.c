#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

/* Global variables */
char studentName[MAX][50];
char studentRoll[MAX][20];
char studentBranch[MAX][20];
int studentCount = 0;

char hallName[MAX][50];
int hallCapacity[MAX];
int hallCount = 0;

char invigilatorName[MAX][50];
int invigCount = 0;

/* Function declarations */
void addStudent();
void addHall();
void addInvigilator();
void viewStudents();
void viewHalls();
void viewInvigilators();
void generateSeatingPlan();
void shuffleStudents();

/* Main function */
int main() {
    int choice;

    while (1) {
        printf("\n--------------------------------------\n");
        printf("   EXAM SEATING & INVIGILATION PLANNER\n");
        printf("--------------------------------------\n");
        printf("1. Add Student\n");
        printf("2. Add Exam Hall\n");
        printf("3. Add Invigilator\n");
        printf("4. View Students\n");
        printf("5. View Halls\n");
        printf("6. View Invigilators\n");
        printf("7. Generate Seating Plan\n");
        printf("8. Exit\n");
        printf("--------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear input buffer

        switch (choice) {
            case 1: addStudent(); break;
            case 2: addHall(); break;
            case 3: addInvigilator(); break;
            case 4: viewStudents(); break;
            case 5: viewHalls(); break;
            case 6: viewInvigilators(); break;
            case 7: generateSeatingPlan(); break;
            case 8: printf("Exiting program...\n"); exit(0);
            default: printf("Invalid choice, try again.\n");
        }
    }

    return 0;
}

/* --- Add Students --- */
void addStudent() {
    if (studentCount >= MAX) {
        printf("Cannot add more students.\n");
        return;
    }

    printf("\nEnter Student Roll No: ");
    gets(studentRoll[studentCount]);
    printf("Enter Student Name: ");
    gets(studentName[studentCount]);
    printf("Enter Student Branch: ");
    gets(studentBranch[studentCount]);

    studentCount++;
    printf("Student added successfully! Total: %d\n", studentCount);
}

/* --- Add Exam Hall --- */
void addHall() {
    if (hallCount >= MAX) {
        printf("Cannot add more halls.\n");
        return;
    }

    printf("\nEnter Hall Name: ");
    gets(hallName[hallCount]);
    printf("Enter Hall Capacity: ");
    scanf("%d", &hallCapacity[hallCount]);
    getchar();

    hallCount++;
    printf("Hall added successfully! Total: %d\n", hallCount);
}

/* --- Add Invigilator --- */
void addInvigilator() {
    if (invigCount >= MAX) {
        printf("Cannot add more invigilators.\n");
        return;
    }

    printf("\nEnter Invigilator Name: ");
    gets(invigilatorName[invigCount]);

    invigCount++;
    printf("Invigilator added successfully! Total: %d\n", invigCount);
}

/* --- View Functions --- */
void viewStudents() {
    if (studentCount == 0) {
        printf("No students added yet.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d. %s - %s (%s)\n", i + 1, studentRoll[i], studentName[i], studentBranch[i]);
    }
}

void viewHalls() {
    if (hallCount == 0) {
        printf("No halls added yet.\n");
        return;
    }

    printf("\n--- Hall List ---\n");
    for (int i = 0; i < hallCount; i++) {
        printf("%d. %s (Capacity: %d)\n", i + 1, hallName[i], hallCapacity[i]);
    }
}

void viewInvigilators() {
    if (invigCount == 0) {
        printf("No invigilators added yet.\n");
        return;
    }

    printf("\n--- Invigilator List ---\n");
    for (int i = 0; i < invigCount; i++) {
        printf("%d. %s\n", i + 1, invigilatorName[i]);
    }
}

/* --- Shuffle Students Randomly --- */
void shuffleStudents() {
    for (int i = studentCount - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        char tempName[50], tempRoll[20], tempBranch[20];

        strcpy(tempName, studentName[i]);
        strcpy(studentName[i], studentName[j]);
        strcpy(studentName[j], tempName);

        strcpy(tempRoll, studentRoll[i]);
        strcpy(studentRoll[i], studentRoll[j]);
        strcpy(studentRoll[j], tempRoll);

        strcpy(tempBranch, studentBranch[i]);
        strcpy(studentBranch[i], studentBranch[j]);
        strcpy(studentBranch[j], tempBranch);
    }
}

/* --- Generate Seating Plan --- */
void generateSeatingPlan() {
    if (studentCount == 0 || hallCount == 0 || invigCount == 0) {
        printf("\nAdd students, halls, and invigilators first!\n");
        return;
    }

    shuffleStudents();

    printf("\n--------------------------------------\n");
    printf("        EXAM SEATING PLAN\n");
    printf("--------------------------------------\n");

    int index = 0;
    int invigIndex = 0;

    for (int h = 0; h < hallCount; h++) {
        printf("\nHall: %s\n", hallName[h]);
        printf("Invigilator: %s\n", invigilatorName[invigIndex % invigCount]);
        invigIndex++;

        printf("--------------------------------------\n");
        printf("Seat\tRoll No\t\tName\t\tBranch\n");
        printf("--------------------------------------\n");

        for (int j = 0; j < hallCapacity[h] && index < studentCount; j++, index++) {
            printf("%d\t%s\t%s\t%s\n", j + 1,
                   studentRoll[index], studentName[index], studentBranch[index]);
        }

        if (index >= studentCount)
            break;
    }

    if (index < studentCount) {
        printf("\nWarning: %d students could not be seated (not enough hall space)\n",
               studentCount - index);
    }

    printf("\n--------------------------------------\n");
    printf("Seating plan generated successfully!\n");
}


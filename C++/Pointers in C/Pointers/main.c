#include <stdio.h>

// void search(int array[]);

// int main()
// {
//     int arr[10] = {10,20,30,40,50,60,70,80,90,100};
//     search(arr);
//     printf("Hello World!\n");
//     return 0;
// }

// void search(int array[])
// {
//     printf("%d",array);
// }
// struct Student
// {
//     char studentName[10];
//     int rollNum;
// };

// void search(struct Student* stu)
// {
//     printf("RollNum : %d",stu->rollNum);
// }

// int main()
// {
//     struct Student student;
//     student.rollNum = 10;
//     search(&student);
// }
#include <stdio.h>
#include <stdlib.h>

char* buffer;

void readFromFile()
{
    FILE *file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    buffer = (char *)malloc(fileSize);
    if (buffer == NULL)
    {
        printf("Memory allocation failed\n");
        fclose(file);
        exit(1);
    }

    fread(buffer, sizeof(char), fileSize, file);

    fclose(file);
}

void printData()
{
    printf("Data read from file:%s\n", buffer);
}

int main()
{
    readFromFile();

    printData();

    free(buffer);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char* lineBuffer;
    struct Node *next;
};

struct Node* head = NULL;

void read()
{
    char str[250];
    FILE *fp = fopen("Pointer.txt","r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    struct Node *temp = NULL;
    while(fgets(str, sizeof(str),fp) != NULL)
    {
        struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->lineBuffer = (char *)malloc(strlen(str));
        strcpy(newNode->lineBuffer, str);
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    fclose(fp);
}

void display()
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("%s",current->lineBuffer);
        current = current->next;
    }
}
int main()
{
    read();
    display();
    return 0;
}

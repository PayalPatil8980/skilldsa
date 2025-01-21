#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head=NULL;
void Insert_End(int val){
    struct Node *ptr=head;
    struct Node *temp=malloc(sizeof(struct Node));
    struct Node *prev=malloc(sizeof(struct Node));
    temp->data=val;
    temp->next=NULL;
    prev->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    while(ptr->next==NULL){
        ptr=ptr->next;
    }
    temp=ptr->next;
    temp->prev=ptr;
}
void Delete_End(){

}
void Delete_First(){

}
void Insert_Mid(){}

void Delete_Mid(){

}
void display() {
    struct Node *ptr = head;
    if (head == NULL) {
        printf("...the list is already empty...\n");
        return;
    }
    
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    int choice, value, pos;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at the end\n");
        printf("2. Delete from the end\n");
        printf("3. Insert at the beginning\n");
        printf("4. Delete from the beginning\n");
        printf("5. Insert after a specific value\n");
        printf("6. Delete a specific value\n");
        printf("7. Display the list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert at the end:\n ");
                scanf("%d", &value);
                Insert_End(value);
                break;
            case 2:
                Delete_End();
                break;
            case 3:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                Insert_first(value);
                break;
            case 4:
                Delete_First();
                break;
            case 5:
                printf("Enter value to insert after: ");
                scanf("%d", &value);
                printf("Enter value to insert: ");
                scanf("%d", &pos);
                Insert_Mid(pos, value);
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                Delete_Mid(value);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

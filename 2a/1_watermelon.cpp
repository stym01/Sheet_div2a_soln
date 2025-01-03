#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node after a given node pointed by ptr
void insertAfter(struct Node* ptr, int data) {
    if (ptr == NULL) {
        printf("Invalid node pointer\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = ptr->next;
    ptr->next = newNode;
}

// Function to delete a node after a given node pointed by ptr
void deleteNode(struct Node* ptr) {
    if (ptr == NULL || ptr->next == NULL) {
        printf("Invalid node pointer\n");
        return;
    }
    struct Node* temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        (*head)->next = *head;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

// Function to delete the last node
void deleteLast(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    while (temp->next != *head) {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL) { // Only one node
        free(temp);
        *head = NULL;
    } else {
        prev->next = (*head)->next;
        free(temp);
    }
}

// Function to traverse and print the circular linked list
void traverse(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Creating the circular linked list
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    // Traversing and printing the circular linked list
    printf("Circular Linked List: ");
    traverse(head);

    // Inserting after a node pointed by ptr
    struct Node* ptr = head->next->next; // Assuming this node as ptr
    insertAfter(ptr, 5);
    printf("After insertion: ");
    traverse(head);

    // Deleting a node pointed by ptr
    deleteNode(ptr);
    printf("After deletion: ");
    traverse(head);

    // Inserting at the last
    insertAtEnd(&head, 6);
    printf("After insertion at the last: ");
    traverse(head);

    // Deleting the last node
    deleteLast(&head);
    printf("After deletion of the last node: ");
    traverse(head);

    return 0;
}

#include <iostream>


/*

  We are going to implement from scratch

*/

// Definition of the structure that composes the node of the doubly linked list
struct DLNode
{
    int data;                 // Data stored in the node
    DLNode *next;             // Pointer to the next node in the list
    DLNode *previous;         // Pointer to the previous node in the list
};

// Function prototypes
DLNode *createNode(int value);                // Creates a new node with the given value
void insertNode(DLNode *&head, int value);    // Inserts a node at the end of the list
void displayDL(DLNode *head);                 // Displays the entire doubly linked list

int main()
{
    DLNode *head = nullptr;  // Initialize the head of the doubly linked list as null (empty list)

    // Insert 100 nodes with values from 0 to 99
    for (int i = 0; i < 100; i++)
    {
        insertNode(head, i);  // Call the function to insert a new node
    }

    // Display the doubly linked list
    displayDL(head);

    return 0;  // End of program
}

// Function to create a new node with the specified value
DLNode *createNode(int value)
{
    DLNode *newNode = new DLNode();  // Dynamically allocate memory for a new node
    newNode->data = value;           // Set the data field to the provided value
    newNode->next = nullptr;         // Initialize the next pointer to null (end of list)
    newNode->previous = nullptr;     // Initialize the previous pointer to null

    return newNode;  // Return the created node
}

// Function to insert a node at the end of the doubly linked list
// This operation has a time complexity of O(n), but can be optimized by maintaining a pointer to the tail
void insertNode(DLNode *&head, int value)
{
    DLNode *newNode = createNode(value);  // Create a new node with the specified value

    // If the list is empty (head is null), make the new node the head
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        DLNode *temp = head;  // Temporary pointer to traverse the list starting from the head

        // Traverse the list to find the last node (where next is null)
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        // Attach the new node at the end of the list
        temp->next = newNode;
        newNode->previous = temp;  // Link the new node back to the last node
    }
}

// Function to display the entire doubly linked list
void displayDL(DLNode *head)
{
    DLNode *temp = head;  // Temporary pointer to traverse the list from the head

    // Traverse and print each node's data until the end of the list is reached
    while (temp != nullptr)
    {
        std::cout << temp->data << " <-> ";  // Print the current node's data
        temp = temp->next;                    // Move to the next node
    }

    // Print null to indicate the end of the list
    std::cout << "null" << std::endl;
}

#include <iostream>

// Definition of the structure that composes the node of the singly linked list
struct SLNode
{
    int data;               // Data stored in the node
    SLNode *next;           // Pointer to the next node in the list
};

// Function prototypes
SLNode *createNode(int value);               // Creates a new node with the given value
void insertNode(SLNode *&head, int value);   // Inserts a node at the end of the list
void displaySL(SLNode *head);                // Displays the entire singly linked list

int main()
{
    SLNode *head = nullptr;   // Initialize the head of the linked list as null (empty list)

    // Insert 100 nodes with values from 0 to 99
    for (int i = 0; i < 100; i++)
    {
        insertNode(head, i);  // Call the function to insert a new node
    }

    // Display the linked list
    displaySL(head);

    return 0;   // End of program
}

// Function to create a new node with the specified value
SLNode *createNode(int value)
{
    SLNode *newNode = new SLNode();  // Dynamically allocate memory for a new node
    newNode->data = value;           // Set the data field to the provided value
    newNode->next = nullptr;         // Initialize the next pointer to null (end of list)

    return newNode;  // Return the created node
}

// Function to insert a node at the end of the linked list
void insertNode(SLNode *&head, int value)
{
    SLNode *newNode = createNode(value);  // Create a new node with the specified value

    // If the list is empty (head is null), make the new node the head
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        SLNode *temp = head;  // Temporary pointer to traverse the list starting from the head

        // Traverse the list to find the last node (where next is null)
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        // Attach the new node at the end of the list
        temp->next = newNode;
    }
}

// Function to display the entire singly linked list
void displaySL(SLNode *head)
{
    SLNode *temp = head;  // Temporary pointer to traverse the list from the head

    // Traverse and print each node's data until the end of the list is reached
    while (temp != nullptr)
    {
        std::cout << temp->data << " -> ";  // Print the current node's data
        temp = temp->next;                  // Move to the next node
    }

    // Print null to indicate the end of the list
    std::cout << "null" << std::endl;
}

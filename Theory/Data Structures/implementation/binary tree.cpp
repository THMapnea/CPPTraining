#include <iostream>


/*

  We are going to implement from scratch

*/


// Template class to generalize data insertion
// Node class for the binary tree
template <typename T>
class Node
{
  public:
    T data;                // Data stored in the node
    Node *left;            // Pointer to the left child node
    Node *right;           // Pointer to the right child node

    // Constructor to initialize node with a value
    Node(T value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Binary tree class implemented as a template for generalization
template <typename T>
class BinaryTree
{
  private:
    Node<T> *root;        // Pointer to the root node

    // Helper function to insert a node recursively
    Node<T> *insertNode(Node<T> *node, T value)
    {
        // If the node is empty, create a new node
        if (node == nullptr)
        {
            return new Node<T>(value);
        }
        // Determine whether to insert the value in the left or right subtree
        if (value < node->data)
        {
            node->left = insertNode(node->left, value);  // Insert to the left
        }
        else
        {
            node->right = insertNode(node->right, value);  // Insert to the right
        }
        return node;  // Return the node pointer
    }

    // Helper function for in-order traversal (Left-Root-Right)
    void inOrderTraversal(Node<T> *node)
    {
        if (node != nullptr)
        {
            inOrderTraversal(node->left);  // Traverse left subtree
            std::cout << node->data << " ";  // Print the node data
            inOrderTraversal(node->right);  // Traverse right subtree
        }
    }

    // Helper function to search for a node recursively
    bool searchNode(Node<T> *node, T value)
    {
        // If node is null, value is not found
        if (node == nullptr)
        {
            return false;
        }
        // Check if the current node holds the value
        if (value == node->data)
        {
            return true;
        }
        // Determine the direction to search in
        else if (value < node->data)
        {
            return searchNode(node->left, value);  // Search in the left subtree
        }
        else
        {
            return searchNode(node->right, value);  // Search in the right subtree
        }
    }

  public:
    // Constructor to initialize the binary tree
    BinaryTree()
    {
        root = nullptr;  // Set root to null (empty tree)
    }

    // Public function to insert a value into the tree
    void insertNode(T value)
    {
        root = insertNode(root, value);  // Call private insert function
    }

    // Public function to perform in-order traversal
    void inOrder()
    {
        inOrderTraversal(root);  // Call private traversal helper
        std::cout << std::endl;  // New line for better visualization
    }

    // Public function to search for a value in the tree
    bool searchNode(T value)
    {
        return searchNode(root, value);  // Call private search helper
    }
};

int main()
{
    BinaryTree<int> tree;  // Create a binary tree of integers

    // Insert values 0 to 99 into the tree
    for (int i = 0; i < 100; i++)
    {
        tree.insertNode(i);
    }

    // Perform in-order traversal to display the tree
    std::cout << "In-order traversal: ";
    tree.inOrder();

    // Search for specific values in the tree
    std::cout << "Search 40: " << (tree.searchNode(40) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search 100: " << (tree.searchNode(100) ? "Found" : "Not Found") << std::endl;

    return 0;
}

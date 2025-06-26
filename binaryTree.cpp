
#include <iostream>
using namespace std;

class Node{
    int info;
    Node *leftchild;
    Node *rightchild;

    //  Constructor for the node class
    Node(){
        leftchild = nullptr; // Initilize left child to null
        rightchild = nullptr; // Initilize right child to null
    }
};

class BinaryTree{
    public:
        Node *ROOT;

    BinaryTree(){
        ROOT = nullptr; // Initializing ROOT to null
    }

        void insert(){
            int x;
            cout << "Masukkan nilai ";
            cin >> x;

              // Step 1: Allocate memory for the new node
            Node *newNode = new Node();

            // Step 2: Assign value to the data field of new node
            newNode->info = x;

            // Step 3: Make the left and right child of the new node 
            Node *parent = nullptr;
            Node *currentNode = nullptr;

            // Step 4: Locate the node which will be the parent of the node
            Node *parent = nullptr;
            Node *currentNode = nullptr;
            search(x, parent, currentNode);
            
            // Step 5: if parent is Null (Tree is empty)
            if (parent == nullptr)
            {
                // Sa: Mark the new node as ROOT
                ROOT = newNode;

                // 5b: Exit
                return;

            }

            // Step 6: If the value in the data field of new node is less than that
            if (x < parent->info)
            {
                // 6a: Make the left child of parent point to the new node
                parent->leftchild = newNode;

                // 6b exit
                return;
            }
            // Step 7: If the value in the data field of the
            else if (x > parent->info)
            {
                // 7a: Make the right child of parent point to the new node
                parent->rightchild = newNode;

                // 7b: exit
                return;
            }

            
    }

}
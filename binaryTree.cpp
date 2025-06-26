
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
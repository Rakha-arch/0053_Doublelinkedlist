#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
    string data;
    Node* next;
    Node* prev;  
};

class DoubleLinkedList 
{
private:
    Node*START;
public:
    DoubleLinkedList();
    {
        START = NULL;
    }

    void addNode();
    {
        int nim;
        cout << "\nENter the roll number of the student: ";
        cin >> nim;

        //step1
        Node* newNode = new Node();

        //step2
        newNode->noMhs = nim;
    }
};
#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
    int noMhs;
    Node* next;
    Node* prev;  
};

class DoubleLinkedList 
{
private:
    Node*START;
public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nENter the roll number of the student: ";
        cin >> nim;

        //step1
        Node* newNode = new Node();

        //step2
        newNode->noMhs = nim;

        //step3
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplicate roll numbers are not allowed" << endl;
                return;
            }
            //step4
            newNode->next = START;
            
            //step5
            if (START != NULL)
                START->prev = newNode;

            //step6
            newNode->prev = NULL;

            //step7
            START = newNode;
            return;
        }
        //step8
        Node* current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next;
        }
        if (current->next != NULL && nim == current->next->noMhs)
        {
            cout << "\nDuplicate roll numbers are not allowed" << endl;
            return;
        }
    }
};
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
        //step9
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL)
            current->next->prev = newNode;
        current->next = newNode;
    }

    void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        cout << "\nEnter the roll number of the student to delete: ";
        int rollNo;
        cin >> rollNo;
        Node* current = START;

        while (current != NULL && current->noMhs != rollNo)
        current = current->next; 
        if (current == NULL)
        {
            cout << "\nRoll number not found" << endl;
            return;
        }

        if (current == START)
        {
            START = current->next;
            if (START != NULL)
                START->prev = NULL;
        }
        else
        {
            current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
        }
        delete current;
        cout << "record with roll number " << rollNo << " deleted successfully" << endl;
    }

    void traverse()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }
        Node* currentNode = START;

        cout << "\nRecords in ascending order: " << endl;
        int i = 0;
        while (currentNode != NULL)
        {
            cout << i + 1 << ". " << currentNode->noMhs << endl;
            currentNode = currentNode->next;
            i++;
        }
    }

    void revtraverse()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }
        Node* currentNode = START;
        int i = 0;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
            i++;
        }

        cout << "\nRecords in descending order: " << endl;
        while (currentNode != NULL)
        {
            cout << i + 1 << ". " << currentNode->noMhs << endl;
            currentNode = currentNode->prev;
            i--;
        }
    }

    void search()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }
        int rollNo;
        cout << "\nEnter the roll number of the student to search: ";
        cin >> rollNo;
        Node* current = START;

        while (current != NULL && current->noMhs != rollNo)
            current = current->next; 
        if (current == NULL)
        {
            cout << "\nRecord not found" << endl;
        }
        else
        {
            cout << "\nRecord found: ";
            cout << "Roll number: " << current->noMhs << endl;
        }
    }
};
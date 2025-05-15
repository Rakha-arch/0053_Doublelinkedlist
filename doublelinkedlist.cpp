#include <iostream>
#include <string>
using namespace std;

class Node
{
    public :
    int nomMhs;
    Node *next;
    Node *prev;
};

class Doublelinkedlist
{
    private:
        Node *START;

    public:
        Doublelinkedlist()
        {
            START = NULL;
        }

        void addNode()
        {
            int nim;
            string nm;
            cout << "\nEnter the roll number of the student";
            cin >> nim;

            //step 1: Allcate memory for new node
            Node *newNode = new Node();

            // step 2: Assign falue to the data fields
            newNode->nomMhs = nim;

            // step 3: insert at beginning if list is empty or nim is smallest
            if (START == NULL || nim <=START ->nomMhs)
            {
                if (START != NULL && nim == START ->nomMhs)
                {
                    cout << "\nDUplicate number not allowed" << endl;
                    return;
                }
                //step4: newNode.next = START
                newNode->next = START;

                //STEP 5: start.prev = newNode (if start exists)
                if (START != NULL)
                    START->prev = newNode;

                //step 6: newNode.prev = NULL
                newNode->prev = NULL;

                //step7: START = newNode
                START = newNode;
                return;
            }

            // insert in between node
            //step8 : locate potition for insertion
            Node *current = START;
            while (current->next !=NULL && current->next->nomMhs < nim)
            {
                current = current->next;
            }

            if (current->next !=NULL && nim == current->next->nomMhs)
            {
                cout << "\nDuplicate roll number not allowed" << endl;
                return;
            }

            // step 9 : insert between current and cerrent->next
            newNode->next = current->next;// step 9a
            newNode->prev = current; // step 9b

            //insert last node
            if (current->next != NULL)
                current->next->prev = newNode; //step 9c

            current->next = newNode; //step 9d
        }

        void hapus()
        {
            if (START == NULL)
            {
                cout << "\nlist is empty" << endl;
                return;
            }

            cout << "\nEnter the roll number of the student whose record is to be delete:";
            int rollNo;
            cin >> rollNo;

            Node *current = START;

           
            {
             
            }

            {
               
            }
            else
            {
                

            }

            
        }

        void traverse()
        {
          
            {
        
            }
           

          
            {
         
            }

        }

        void revtraverse()
        {
           
            {
              
            }
      
            {
                currentNode = currentNode->next;
                i++;
            }
            //step2 : Traverse backward
            cout << "\nrecording  "
        }
}
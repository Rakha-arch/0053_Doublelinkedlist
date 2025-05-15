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

            {
                
            }

         

        }

        void hapus()
        {
            if (START == NULL)
            {
               
            }

           

           
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
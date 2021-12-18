#include <iostream>

struct node
{
    int data;
    struct node *next;
};

class linked
{
private:
    node *head, *tail;

public:
    linked()
    {
        head = NULL;
        tail = NULL;
    }

    /* create a node in the list */
    void createnode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }

    /* This function adds to the front of the list */
    void addToFront(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    /* Prints out the current list */
    static void printList(node *head)
    {
        if (head == NULL)
        {
            std::cout << "";
        }
        else
        {
            std::cout << head->data << std::endl;
            printList(head->next);
        }
    }

    /* return the head of the list */
    node *getFront()
    {
        return head;
    }

    /* return the tail of the list */
    node *getBack()
    {
        return tail;
    }

    /* adds a new value to the back of the list */
    void addToBack(int value)
    {
        node *temp = new node;
        temp->data = value;
        node *traverse = head;
        while (traverse->next != NULL)
        {
            traverse = traverse->next;
        }
        traverse->next = temp;
        temp->next = NULL;
        tail = temp;
        sortList();
        return;
    }

    /* Gets total length of list */
    int listLength()
    {
        node *temp = new node;
        temp = head;
        int length = 0;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }

    /* Sorts the list from least to greatest data value */
    void sortList()
    {
        if (head == NULL || tail == NULL)
        {
            return;
        }

        int tData;
        node *temp = NULL;

        node *current = head;
        node *tnext = head->next;
        // traverse the list
        while (current != NULL)
        {
            temp = current;
            while (temp->next != NULL)
            {
                if (temp->data > temp->next->data)
                {
                    tData = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = tData;
                }
                temp = temp->next;
            }
            current = current->next;
        }
        return;
    }

    /* Deletes the entire list if possible */
    void deleteAll()
    {
        node *temp = new node;
        node *current = head;
        // head -> head -> next
    }
};

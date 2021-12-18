#include "../includes/header.h"
#include "../includes/LinkedList.h"
#include <iostream>

void menu()
{
    /*
    std::cout << "------------------------------------------------\n";
    // Create the list of class linked t1, access function with t1.XX
    linked t1, t2;
    t1.createnode(7);
    t1.addToFront(5);
    t1.addToBack(2);
    t1.addToBack(22);
    t1.addToFront(8);
    t1.addToBack(11);
    linked::printList(t1.getFront());
    std::cout << "Length of list  ----------------- ";
    int x = t1.listLength();
    std ::cout << x << std::endl;
    // currently sort twice to fix
    t1.sortList();
    t1.addToFront(6);
    t1.sortList();
    linked::printList(t1.getFront());
    std::cout << "------------------------------------------------\n";
    */
    interface();
}

void interface()
{
    linked t1;    // Create the list t1
    int play = 1; // This will be the runtime variable
    char input;   // Obtain user input
    int userData = 0;

    while (play == 1)
    {
        std::cout << "+++++++++++++++++++++++++++\n";
        std::cout << "Please choose 1 of the following options.\n";
        std::cout << "(1) Create a new node in the list.\n";
        std::cout << "(2) Add to the front of the list.\n";
        std::cout << "(3) Add to the back of the list.\n";
        std::cout << "(4) Get the total length of the list.\n";
        std::cout << "(5) Print out the current list.\n";
        std::cout << "(6) Sort the list least to greatest.\n";
        std::cout << "(7) Exit the program.\n";
        std::cout << "+++++++++++++++++++++++++++\n";

        input = std::cin.get();
        switch (input)
        {
        case '1':
            std::cout << "Enter in a number \n";
            std::cin >> userData;
            if (!std::cin)
            { // Incorrect value entered
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please enter in a number.\n";
            }
            else
            {
                t1.createnode(userData);
            }
            break;
        case '5':
            linked::printList(t1.getFront());
            break;
        case '7':
            std::cout << "Goodbye!\n";
            play = 0;
        default:
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
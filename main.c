/* lab6_main.c
* 
* 
*
* Name: Scott Jean  
* Email: sajean@purdue.edu
* Course: CNIT 315
* Lab assignment: 6
*
* Collaborators:
*   - None
*
*
*
*         HERE is a random ASCII Rose   -----<--<---@
*
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lab5_lib.h"

int main() {

while(loopMenu()==1);

	return 0;
	}

int writeMenu(int *choice)
{
	printf("\n\nThis program creates and manipulates Stacks and Queues:\n");
	printf("\n\nStack Functions:\n");
	printf("\n1. Push a node on the stack.\n2. Pop a node from stack.");
	printf("\n3. Empty stack of all nodes.\n4. Print Stack.");
	printf("\n\nQueue Functions:\n");
	printf("\n5. Enqueue a node in the queue.\n6. Dequeue a node from the queue.");
	printf("\n7. Empty Queue of all nodes.\n8. Print Queue");
	printf("\n9. Exit Program\n");
	printf("Please make a choice [1-9]: ");
	scanf("%d", choice);

	/* Validation */
	switch(*choice)
	{
		case 1:
			return 1;  // Return 1, the menu option selected
			break;
		case 2:
			return 2;  // Return 2, the menu option selected
			break;
		case 3:
			return 3;  // Return 3, the menu option selected
			break;
		case 4:
			return 4;  // Return 4, the menu option selected
			break;
        case 5:
			return 5;  // Return 5, the menu option selected
			break;
        case 6:
			return 6;  // Return 6, the menu option selected
			break;
        case 7:
			return 7;  // Return 7, the menu option selected
			break;
        case 8:
			return 8;  // Return 8, the menu option selected
			break;
			  case 9:
			return 9;  // Return 9, the menu option selected
			break;
			default:
			printf("\n\nThat choice was invalid.  Please choose a valid menu item, values 1 throuh 8 are acceptable.\n\n");
			// Clear scan flag
			clean_stdin();
			return 0;  // Return 0 as an error code for no proper selection.
			break;
	}
}




int loopMenu()
{
  int list_size;
	static struct Node* root = NULL;
	struct Node* temp = NULL;
	struct Data* new_data = NULL;
	
	/* A value to hold the menu item chosen */
	int menuChoice = 0;
	/* Show the main menu for user selection */
	while(writeMenu(&menuChoice)==0);

	/* User has made a decision at this point, run switch case */
	printf("\n");
	switch(menuChoice)
	{
	    // Push a node on the stack.

        case 1:
            printf("Push a node on the stack:\n");
            clean_stdin();
            push_node(root, data);
            break;
        // Pop a node from stack.
        case 2:
            printf("Pop a node from stack: \n");
            clean_stdin();
            new_data = get_data();
            print_data(new_data);	
	          root = insert_middle(root, *new_data);
	          list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            break;
        // Empty stack of all nodes.
        case 3:
            printf("Empty stack of all nodes: \n");
            clean_stdin();
            
            new_data = get_data();
            print_data(new_data);	
	          root = insert_end(root, *new_data);
	          
	          list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            break;
        // Print Stack.
        case 4:
            printf("Print Stack: \n");
            clean_stdin();
            
            root = remove_front(root);
            list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            printf("Press enter to continue.\n");            
            break;
            
        // Enqueue a node in the queue.
        case 5:
            printf("Enqueue a node in the queue: \n");
            clean_stdin();
            root = remove_middle(root);
            
            list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            printf("Press enter to continue.\n");
            break;
        // Dequeue a node from the queue.
        case 6:            
            printf("\n\n\nDequeue a node from the queue: \n");
            clean_stdin();            
            root = remove_end(root);
            
            list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
	          
            printf("\nPress enter to continue.\n");
            break;
        // Empty Queue of all nodes
        case 7:
            printf("\n\n\nEmpty Queue of all nodes: \n");
            clean_stdin();
            root = remove_end(root);
            
            list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
	          
            printf("\nPress enter to continue.\n");
            break;
            // Print queue
        case 8:
        
            clean_stdin();
            printf("\n\nPrint out linked list: \n");
            list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            printf("\nPress enter to continue.\n");
            break;
        
        // Exit the program
        case 9:
            printf("\nClosing program!\n");
            exit(0);
            break;

	}
	clean_stdin();
	return 1;
}
int clean_stdin()
{
    while (getchar()!='\n');
    return 1;
}



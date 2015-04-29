/* lab5.c - lib.c 
* 
* This is the lib.c page
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

  static struct Node* root = NULL;
	struct Node* temp = NULL;
	struct Data* new_data = NULL;
  int list_size;

//Push to Stack
void push_node(){	

    new_data = get_data();
    print_data(new_data);	
    root = insert_front(root, *new_data);
    list_size = size(root);
    printf("\nList is %d long.\n", list_size);

    print_linked_list(root);
}

//Pop from stack

void pop_node(){

    root = remove_front(root);
    list_size = size(root);
    printf("\nList is %d long.\n", list_size);
    print_linked_list(root);  

}
// Print Stack

void print_stack(){

    list_size = size(root);
    printf("\nList is %d long.\n", list_size);
    print_linked_list(root);

}

//Enqueue to queue
void enqueue_node(){

    new_data = get_data();
    print_data(new_data);	
    root = insert_front(root, *new_data);
    list_size = size(root);
    printf("\nList is %d long.\n", list_size);
    print_linked_list(root);
}

// Dequeue from queue
void dequeue_queue(){     
            
  root = remove_end(root);
  list_size = size(root);
  printf("\nList is %d long.\n", list_size);
  print_linked_list(root);
    
}

//Print Queue
void print_queue(){
  list_size = size(root);
    printf("\nList is %d long.\n", list_size);
    print_linked_list(root);

}

//DELETE Stack LIST
void remove_stack_nodes(){
  delete_list(root);
  root = NULL;
  list_size = size(root);
  printf("\nList is %d long.\n", list_size);
  print_linked_list(root);
  }

//DELETE queue LIST
void remove_queue_nodes(){
  delete_list(root);
  root = NULL;
  list_size = size(root);
  printf("\nList is %d long.\n", list_size);
  print_linked_list(root);
  }




/* lab5.c  - lib.h
* 
* This is the header page
*
* Name: Scott Jean  
* Email: sajean@purdue.edu
* Course: CNIT 315
* Lab assignment: 5
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

#define NAME_LENGTH 50


/* STRUCT */
struct Data{
	char first[NAME_LENGTH];
	char last[NAME_LENGTH];
	int PID;
	int age;
};

struct Node{
	struct Data data;
	struct Node *next;
};

/* Menu Functions */

int writeMenu(int *choice);
int clean_stdin();
int loopMenu();
int traverse_menu();

/* Linked List Functions */
struct Node* insert_front(struct Node* root, struct Data data);
struct Node* insert_end(struct Node* root, struct Data data);
struct Node* insert_middle(struct Node* root, struct Data data);
struct Node* insert_front_2(struct Node* root, char* name, int age);
struct Node* remove_front(struct Node* root);
struct Node* remove_end(struct Node* root);
struct Node* remove_middle(struct Node* root);
struct Node* look_up_by_index(struct Node* root);
int traverse_first(struct Node* root);
int traverse_last(struct Node* root);
int traverse_id(struct Node* root);
int traverse_age(struct Node* root);

/* Input/Output */
struct Data* get_data();
int size(struct Node* root);
void print_data(struct Data* data);
void print_node(struct Node* node);
void print_linked_list(struct Node* root);


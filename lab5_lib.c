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


//INSERT FRONT

struct Node* insert_front(struct Node* root, struct Data data) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	memcpy ( &((*new_node).data), &data, sizeof(struct Data));
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}
	

  new_node->next = root;
	
	return new_node;
}

//REMOVE FRONT

struct Node* remove_front(struct Node* root) {
  struct Node* temp = root;
	root=temp->next;
	
	free (temp);

	return root;
}

// Remove all nodes in a structure

 struct Node* delete_list(struct Node *root){
  
  while(root != NULL){
    root = remove_front(root);
    } 
    return root;
}


//INSERT END

struct Node* insert_end(struct Node* root, struct Data data) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	memcpy ( &((*new_node).data), &data, sizeof(struct Data));
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}
	
	struct Node* temp = root;
	while (temp->next != NULL){	
		temp = temp->next;
	}
	temp->next = new_node;
	return root;
}

//REMOVE END

struct Node* remove_end(struct Node* root) {
	if (root == NULL){
	printf("Root is NULL");
	return NULL;
}
	struct Node* temp = root;
	struct Node* prev;
	if(root->next==NULL)
  {
    free(root);
    root=NULL;
  }
	else{	
	while (temp->next != NULL){
	  
	 
		prev=temp;
		temp = temp->next;	
			  }		
	free (prev->next);
	prev->next = NULL;
	
		}
	
	return root;
	
}

//INSERT MIDDLE  

struct Node* insert_middle(struct Node* root, struct Data data) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	int middle = 0;
	int count = 0;
	int list_size;
	
	
	memcpy ( &((*new_node).data), &data, sizeof(struct Data));
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}		
	struct Node* temp = root;	
	
	list_size = size(temp);
	middle = list_size / 2;	
	
	while (temp->next != NULL){
	  count ++;
	  
  if (middle == count)	 
	  break;
	  
		temp = temp->next;
		
	}
	if (temp == NULL){
	  printf("/nERROR: Node was NULL");
	  }
	new_node->next = temp->next;
	temp->next = new_node;
	
	return root;
	
}
//REMOVE MIDDLE  


struct Node* remove_middle(struct Node* root) {
	
	
	int middle = 0;
	int count = 0;
	int list_size;
	
		
	struct Node* temp = root;	
	struct Node* prev;
	
	list_size = size(temp);
	middle = list_size / 2;	
	
	while (temp->next != NULL){
    count ++;
	  
  if (middle == count)	 
    break;
	  
		temp = temp->next;
		prev=temp;
		
	  }
  if (temp == NULL){
    printf("/nERROR: Node was NULL");
	  }
	  prev=temp->next;
	  *temp = *prev;
	  free (prev);
	
	
	return root;
	
}


//TRAVERSE LIST FIRST NAME

int traverse_first(struct Node* root){
  char fname[50];
  struct Node* temp = root;
  //struct Data query;
  printf("What is the first name? ");
  scanf("%s", fname);
	while (temp != NULL){
	 // count++;
	 	if (strcmp(fname,temp->data.first)==0){
	    print_node(temp);
	    }
		  temp = temp->next;
  }
  return;
}

//TRAVERSE LIST LAST NAME

int traverse_last(struct Node* root){
  char lname[50];
 struct Node* temp = root;
  //struct Data query;
  printf("What is the last name? ");
  //gets(query);
  scanf("%s", lname);
	while (temp != NULL){
	 if (strcmp(lname,temp->data.last)==0){
	    print_node(temp);
	    }
		  temp = temp->next;
  }
  return;
  
}
//TRAVERSE LIST PURDUE ID

int traverse_id(struct Node* root){
  
  struct Node* temp = root;
  int query;
  printf("What is the Purdue ID? ");
  scanf(" %d", &query);
	while (temp != NULL){
	  if(temp->data.PID == query){
	    print_node(temp);
	    }
		  temp = temp->next;
  }
  return;
  
}//TRAVERSE LIST AGE

int traverse_age(struct Node* root){
  
  struct Node* temp = root;
  int query;
  printf("What is the age? ");
  scanf(" %d", &query);
	while (temp != NULL){
	  if(temp->data.age == query){
	    print_node(temp);
	    }
		  temp = temp->next;
  }
  return;
}


//LOOK UP BY INDEX
struct Node* look_up_by_index(struct Node* root) {
  struct Node* temp = root;	
  
  int i;
  int list_size = size(temp);
  int index;
  printf("\nWhich index do you want to look up? ");
  scanf(" %d", &index);
  if(index < 0 || index > list_size-1){
        printf("ERROR: Node does not exist!\n");
       return NULL;
  }
  
  for (i=0; i<index; i++){
       temp = temp->next;
       
    }
    return temp;


}



// GET DATA

struct Data* get_data() {
	struct Data *data = malloc(sizeof(struct Data));
	printf("Enter First Name: ");
	scanf("%s", (data->first));
	printf("Enter Last Name: ");
	scanf("%s", (data->last));
	printf("Enter Purdue ID: ");
	scanf("%d", &(data->PID));
	printf("Age: ");
	scanf("%d", &(data->age));
	return data;
}


// LIST SIZE (used for counting length of linked list and for finding middle)

int size(struct Node* root){
  
  struct Node* temp = root;
  int count = 0;
	while (temp != NULL){
	  count++;
	  //print_node(temp);
		temp = temp->next;
  }
  return count;
}


void print_data(struct Data* data){
	if(data==NULL){
		printf("ERROR: Data was NULL\n");
	}
	printf("{%s, ", data->first);
	printf("%s, ", data->last);
	printf("%d, ", data->PID);
	printf("%d} \n", data->age);
}

void print_node(struct Node* node){
	if(node==NULL){
		printf("ERROR: Node was NULL\n");
	}
	printf("Node: ");
	print_data(&(node->data));
	printf("\n");
}

void print_linked_list(struct Node* root) {
	if(root == NULL) {
		printf("ERROR: Root was NULL\n");
	}
	struct Node *temp = root;
	while(temp != NULL) {
		print_node(temp);
		temp = temp->next;
	}
}

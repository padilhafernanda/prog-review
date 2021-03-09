#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char course[50]; //50/4 = 13
    unsigned int registration; // 1
    char name[90];      // 
    unsigned int birthday;     
    char hometown[30];    
    struct Student *left, *right;
};

struct BinarySerachTree {
    struct Student *root;
    int size;    
};

/*** Creates a new instance of struct Student and fill it ***/
struct Student *CreateStudent(char *name, unsigned int birthday, char *course, unsigned int registration, char *hometown) {
    
    struct Student *newStudent;
    
    /* Allocates a new student struct in order to hold the new student informations */
    newStudent = (struct Student *)malloc(sizeof(struct Student));
    
    /* Set the student information */
    strcpy(newStudent->name, name);
    newStudent->birthday = birthday;
    strcpy(newStudent->course, course);
    newStudent->registration = registration;
    strcpy(newStudent->hometown, hometown);
    
    /* Initialize sub-tree pointes */
    newStudent->left = NULL;
    newStudent->right = NULL;
    
    return newStudent;
}

/*** Locates the right place and adds a new Student node in the tree based on the registration number ***/
struct Student *AddStudent (struct Student *subTreeRoot, struct Student *newStudent) {
    
    if (subTreeRoot == NULL) 
        subTreeRoot = newStudent;   // First node (empty tree)
     
    else if (newStudent->registration > subTreeRoot->registration)
        subTreeRoot->right = AddStudent (subTreeRoot->right, newStudent);   // Adds the new node in the right sub-tree of the current nodes

    else
        subTreeRoot->left = AddStudent (subTreeRoot->left, newStudent);     // Adds the new node in the left sub-tree of the current node

    return subTreeRoot;
}

/*** Inserts a new node in the tree ***/
void InsertStudent_r (struct BinarySerachTree *bst, char *name, unsigned int birthday, char *course, unsigned int registration, char *hometown) {

    struct Student *newStudent =  (struct Student *)CreateStudent_s(name, birthday, course, registration, hometown);

    (bst->root == NULL) ? bst->root = newStudent : AddStudent (bst->root, newStudent);
    
    bst->size++;
}


/*** Prints the students following the ascending registration order ***/
void PrintInOrder(struct Student *root) {

    char buffer[] = "%s %d %s %d %s\n";  /**** IMPORTANTE: este array deve alocado no stack frame da função PrintInOrder() ****/

    if (root != NULL) {
        PrintInOrder(root->left);
        printf(buffer, root->name, root->birthday, root->course, root->registration, root->hometown);
        PrintInOrder(root->right);
    }
}

int main() {

    struct BinarySerachTree bst;
    bst.root = NULL;    
    bst.size = 0;
    
    InsertStudent_s(&bst,"Ozzy Osbourne", 1948, "Heavy Metal", 666, "Aston");       
    InsertStudent_s(&bst,"Scott Ian", 1963, "Thrash Metal", 670, "New York");       
    InsertStudent_s(&bst,"Vince Neil", 1961, "Hard Rock", 668, "Hollywood");        
    InsertStudent_s(&bst,"Lemmy Kilmister",1945, "Extreme Rock and Roll", 660, "Stoke-on-Trent");   
    InsertStudent_s(&bst,"Mick Jagger",1943, "Rock and Roll", 650, "Dartford");     
    InsertStudent_s(&bst,"Robert Johnson",1911, "Delta Blues", 671, "Greenwood");    
    
    
    //s = (struct Student *) CreateStudent("Ozzy Osbourne", 1948, "Heavy Metal", 666, "Aston");
    //printf("%s\n", s->name);
    
    printf("size: %d\n",bst.size);    
    PrintInOrder(bst.root);
    printf("------------------\n");
	PrintInOrder_s(bst.root);
	
    return 0;
}
#include <iostream>
using namespace std;
#include <conio.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

void create_tree(struct node *);
struct node *insertElement(struct node *, int);
struct node *findLargestElement(struct node *);
// struct node *deleteElement(struct node *, int);
struct node *searchElement(struct node *, int);
struct node *findMinimum(struct node *);
void preorderTraversal(struct node *);
void inorderTraversal(struct node *);
void postorderTraversal(struct node *);

int main()
{
    int option, val;
    struct node *ptr;
    create_tree(root);

    do{
        cout << "\n*******MAIN MENU********" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Delete an Element" << endl;
        cout << "3. Search an Element" << endl;
        cout << "4. Preorder Traversal" << endl;
        cout << "5. Inorder Traversal" << endl;
        cout << "6. Postorder Traversal" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your option: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\nEnter the value of the new node: " << endl;
            cin >> val;
            root = insertElement(root, val);    
            break;
        // case 2:
        //     cout << "\nEnter the element to be deleted: " << endl;
        //     cin >> val;
        //     root = deleteElement(root, val);    
        //     break;
        case 3:
            cout << "\nEnter the element to be searched: " << endl;
            cin >> val;
            root = searchElement(root, val);    
            break;
        case 4:
            cout << "\nThe elements of the tree are: \n" << endl;
            preorderTraversal(root);
            cout << endl;
            break;
        case 5:
            cout << "\nThe elements of the tree are: \n" << endl;
            inorderTraversal(root);
            cout << endl;
            break;
        case 6:
            cout << "\nThe elements of the tree are: \n" << endl;
            postorderTraversal(root);
            cout << endl;
            break;
        default:
            cout << "\nEnter a valid choice! \n" << endl;
            break;
        }
    }while(option != 7);
    return 0;
}

void create_tree(struct node *root){
    root = NULL;
}

struct node *insertElement(struct node *tree, int val){
    struct node *newnode, *nodeptr, *parentptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = val;
    newnode -> left = NULL;
    newnode -> right = NULL;

    if(root == NULL){
        root = newnode;
        root -> left = NULL;
        root -> right = NULL;
    }
    else{
        parentptr = NULL;
        nodeptr = root;
        while (nodeptr != NULL){
            parentptr = nodeptr;
            if (val < nodeptr -> data){
                nodeptr = nodeptr -> left;
            }
            else{
                nodeptr = nodeptr -> right;
            }
        }
            
        if(val < parentptr -> data){
            parentptr -> left = newnode;
        }
        else{
            parentptr -> right = newnode;
        }  
    }
    return root;
}

struct node* searchElement(struct node* root, int key){
    struct node* tree = root;
    if(tree == NULL){
        cout << "Element Not Found" << endl;
        return root;
    }
    if(tree -> data == key){
        cout << "Element Found" << endl;
        return root;
    }
    if (tree -> data < key){
        return searchElement(tree -> right, key);
    }
    else{
        return searchElement(tree -> left, key);
    }
}

void preorderTraversal(struct node *root){
    if(root != NULL){
        cout << root -> data << " ";
        preorderTraversal(root -> left);
        preorderTraversal(root -> right);
    }
}

void inorderTraversal(struct node *root){
    if(root != NULL){
        inorderTraversal(root -> left);
        cout << root -> data << " ";
        inorderTraversal(root -> right);
    }
}

void postorderTraversal(struct node *root){
    if(root != NULL){
        postorderTraversal(root -> left);
        postorderTraversal(root -> right);
        cout << root -> data << " ";
    }
}
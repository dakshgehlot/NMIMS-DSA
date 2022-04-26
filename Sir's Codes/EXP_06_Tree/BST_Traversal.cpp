#include<iostream>
#include<malloc.h>

using namespace std;

struct node 
{  
    int data;  
    struct node *left;  
    struct node *right;  
};

struct node *root;

void create_tree(struct node *);
struct node *insertElement(struct node *, int);
struct node *findLargestElement(struct node *);
struct node *deleteElement(struct node *, int);
struct node *searchElement(struct node *, int);
struct node *findMinimum(struct node* );
void preorderTraversal(struct node *);
void inorderTraversal(struct node *);
void postorderTraversal(struct node *);

int main()
{
int option, val;
struct node *ptr;
create_tree(root);
do
{
    cout<<"******MAIN MENU*******"<<endl;
    cout<<" 1. Insert Element"<<endl;
    cout<<" 2. Delete an element"<<endl;
    cout<<" 3. Search an element"<<endl;
    cout<<" 4. Preorder Traversal"<<endl;;
    cout<<" 5. Inorder Traversal"<<endl;;
    cout<<" 6. Postorder Traversal"<<endl;
    cout<<" 7. Exit"<<endl;
    cout<<"Enter your option : "<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"\n Enter the value of the new node : "<<endl;
            cin>>val;
            root = insertElement(root, val);
            break;
        case 2:
            cout<<"\n Enter the element to be deleted : "<<endl;
            cin>>val;
            root = deleteElement(root, val);
            break;
	  case 3:
            cout<<"\n Enter the element to be searched : "<<endl;
            cin>>val;
            root = searchElement(root, val);
            break;
        case 4:
            cout<<"\n The elements of the tree are : \n"<<endl;
            preorderTraversal(root);
            cout<<endl;
            break;
        case 5:
            cout<<"\n The elements of the tree are : \n"<<endl;
            inorderTraversal(root);
            cout<<endl;
            break;
        case 6:
            cout<<"\n The elements of the tree are : \n"<<endl;
            postorderTraversal(root);
            cout<<endl;
            break;
    }
}while(option!=7);
return 0;
}

void create_tree(struct node *root)  
{  
    root=NULL;  
}  

struct node *insertElement(struct node *tree, int val)
{
    struct node *newnode, *nodeptr, *parentptr;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root==NULL)
    {
        root=newnode;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        parentptr=NULL;
        nodeptr=root;
        while(nodeptr!=NULL)
        {
            parentptr=nodeptr;
            if(val<nodeptr->data)
                nodeptr=nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
            if(val<parentptr->data)
                parentptr->left = newnode;
            else
                parentptr->right = newnode;
    }
return root;
}

struct node* searchElement(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL)
    {
        cout<<"Element Not Found"<<endl;
    }
    if(root->data == key)
    {
        cout<<"Element Found"<<endl;
        return root;
    }
       
    
    // Key is greater than root's key
    if (root->data < key)
       return searchElement(root->right, key);
    else 
    // Key is smaller than root's key
    return searchElement(root->left, key);
}

void search(struct node* &cur, int item, struct node* &parent)  
{  
    while (cur != NULL && cur->data != item)  
    {  
        parent = cur;  
        if (item < cur->data)  
            cur = cur->left;  
        else  
            cur = cur->right;  
    }  
} 

struct node* findMinimum(struct node* cur) /*To find the inorder successor*/  
{  
    while(cur->left != NULL) {  
        cur = cur->left;  
    }  
    return cur;  
}  

struct node *deleteElement(struct node *root, int item) /*function to delete a node*/  
{  
    struct node *parent = NULL;  
    struct node *cur = root;  
    search(cur, item, parent); /*find the node to be deleted*/  
    if (cur==NULL)  
        return cur;  
    if (cur->left == NULL && cur->right == NULL) /*When node has no children*/  
    {  
        if (cur != root)  
        {  
            if (parent->left == cur)  
                parent->left = NULL;  
            else  
                parent->right = NULL;  
        }  
        else  
            root = NULL;  
        free(cur);       
    }  
    else if (cur->left && cur->right)  
    {  
        struct node* succ  = findMinimum(cur->right);  
        int val = succ->data;  
        deleteElement(root, succ->data);  
        cur->data = val;  
    }  
    else  
    {  
        struct node* child = (cur->left)? cur->left: cur->right;  
        if (cur != root)  
        {  
            if (cur == parent->left)  
                parent->left = child;  
            else  
                parent->right = child;  
        }  
        else  
            root = child;  
        free(cur);  
    }  
    return root;
} 
void preorderTraversal(struct node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    
}
void inorderTraversal(struct node *root)
{
    if(root != NULL)
    {
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
    
}
void postorderTraversal(struct node *root)
{
    if(root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
    
}

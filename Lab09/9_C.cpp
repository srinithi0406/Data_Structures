// Menu driven program to perform the operations of Tree ADT - Binary Search Tree
#include <stdio.h>
#include <stdlib.h>

class tree{
    private:
    struct node{
        int data;
        struct node* left;
        struct node* right;
    }*root;

    node* inserthelp(struct node*, int val);
    void preorderTrav(struct node* root);
    void inorderTrav(struct node* root);
    void postorderTrav(struct node* root);
    int searchhelp(struct node* root, int val);


    public:
    tree(){
        root=NULL;
    }

    void insert(int val);
    void preorder();
    void inorder();
    void postorder();
    int search(int val);
};

int main(){
    int ch, val;
    tree t1;
    while (1){
        printf("\nMenu\n1.Insert\n2.Prerder\n3.Inorder\n4.Postorder\n5.Search\n6.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the element to be added: ");
            scanf(" %d", &val);
            t1.insert(val);
            break;

            case 2:
            t1.preorder();
            
            break;

            case 3:
            t1.inorder();
            break;

            case 4:
            t1.postorder();
            break;
            
            case 5:
            printf("Enter the element to search: ");
            scanf(" %d", &val);
            if (t1.search(val) == 1)
                printf("Element found in the tree.\n");
            else
                printf("Element not found in the tree.\n");
            break;
            
            case 6:
            return 0;

            default:
            printf("Invalid choice.\n");
        }
    }
}

//Inserts an element to the binary search tree
tree::node* tree::inserthelp(struct node* temp, int val){
    if (temp==NULL){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->left=NULL;
        newnode->right=NULL;
        temp=newnode;
        return temp;
    }

    if (val< temp->data){
        temp->left=inserthelp(temp->left, val);
    }
    else if (val> temp->data){
        temp->right=inserthelp(temp->right, val);
    }

    return temp;
}

void tree::insert(int val){
    root=inserthelp(root, val);
}

//Displays the elements of the binary search tree through preorder traversal
void tree::preorderTrav(struct node* temp){
    if (temp==NULL){
        return;
    }
    printf("%d ", temp->data);
    preorderTrav(temp->left);
    preorderTrav(temp->right);
    
}

void tree::preorder(){
    preorderTrav(root);
}


//Displays the elements of the binary search tree through inorder traversal
void tree::inorderTrav(struct node* temp){
    if (temp==NULL){
        return;
    }
    inorderTrav(temp->left);
    printf("%d ", temp->data);
    inorderTrav(temp->right);
    
}

void tree::inorder(){
    inorderTrav(root);
}

//Displays the elements of the binary search tree through postorder traversal
void tree::postorderTrav(struct node* temp){
    if (temp==NULL){
        return;
    }
    postorderTrav(temp->left);
    postorderTrav(temp->right);
    printf("%d ", temp->data);
    
}

void tree::postorder(){
    postorderTrav(root);
}

// Searches for a given element in the binary search tree
int tree::searchhelp(struct node* temp, int val){
    if (temp == NULL) {
        return -1;
    }
    if (temp->data == val) {
        return 1;
    }
    if (val < temp->data) {
        return searchhelp(temp->left, val);
    }
    return searchhelp(temp->right, val);
}

int tree::search(int val){
    return searchhelp(root, val);
}


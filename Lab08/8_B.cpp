// Menu driven program to perform the operations of Tree ADT- Character Binary Tree
#include <stdio.h>
#include <cstdlib>

class tree{
    private:
    struct node{
        char data;
        struct node* left;
        struct node* right;
    }*root;
    
    struct node* insertHelper(struct node*, char val);
    void preorderTrav(struct node*);
    void inorderTrav(struct node*);
    void postorderTrav(struct node*);
    int searchTree(struct node* ,char val);

    public:
    tree(){
        root=NULL;
    }

    void insert(char val);
    void preorder();
    void inorder();
    void postorder();
    int search(char val);

};

int main(){
    int ch,res;
    char val;
    tree t;
    while (1){
        printf("\nMenu\n1.Insert\n2.Preorder\n3.Inorder\n4.Postorder\n5.Search\n6.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            printf("Enter the value to be inserted: ");
            scanf(" %c", &val);
            t.insert(val);
            break;

            case 2:
            printf("Preorder: ");
            t.preorder();
            break;

            case 3:
            printf("Inorder: ");
            t.inorder();
            break;

            case 4:
            printf("Postorder: ");
            t.postorder();
            break;

            case 5:
            printf("Enter the value to be searched for: ");
            scanf(" %c", &val);
            res=t.search(val);
            if (res==1){
                printf("Element %c is found in the tree.", val);
            }
            else{
                printf("Element %c is not found in the tree.", val);
            }

            break;

            case 6:
            return 0;

            default:
            printf("Invalid choice");
        }
    }
}

// Helper function for inseting a node to the Binary Tree
tree::node* tree::insertHelper(struct node* temp, char val) {
        if (temp == NULL){
            struct node* newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=val;
            newnode->left=NULL;
            newnode->right=NULL;
            return newnode;
        } 
        
        char dir;
        printf("Insert %c to (L)eft or (R)ight of %c? ", val, temp->data);
        scanf(" %c", &dir);

        if (dir == 'L' || dir == 'l'){
            temp->left = insertHelper(temp->left, val);
        }
        else if (dir == 'R' || dir == 'r'){
            temp->right = insertHelper(temp->right, val);
        }
        else{
            printf("Invalid choice.\n");
        }
        return temp;
    }

// Inserts a given element to the Binary Tree
void tree::insert(char val) {
    root=insertHelper(root, val);
}

// Prints the elements of the Binary Tree through Preorder traversal
void tree::preorderTrav(struct node* temp){
    if (temp!=NULL){
        printf("%c ", temp->data);
        preorderTrav(temp->left);
        preorderTrav(temp->right);
    }
}

void tree::preorder(){
    preorderTrav(root);
}

// Prints the elements of the Binary Tree through Inorder traversal
void tree::inorderTrav(struct node* temp){
    if (temp!=NULL){
        inorderTrav(temp->left);
        printf("%c ", temp->data);
        inorderTrav(temp->right);
    }
}

void tree::inorder(){
    inorderTrav(root);
}

// Prints the elements of the Binary Tree through Postorder traversal
void tree::postorderTrav(struct node* temp){
    if (temp!=NULL){
        postorderTrav(temp->left);
        postorderTrav(temp->right);
        printf("%c ", temp->data);
    }
}

void tree::postorder(){
    postorderTrav(root);
}

//Searches if an element is present in the Binary Tree or not
int tree::searchTree(struct node* temp, char val){
    if (temp==NULL){
        return 0;
    }

    if(temp->data==val){
        return 1;
    }
    return searchTree(temp->left, val)||searchTree(temp->right, val);
}

int tree::search(char val){
    return searchTree(root, val);
}

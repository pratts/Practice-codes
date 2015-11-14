//Construct tree from preorder and inorder traversal
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* newNode (int data)
{
    struct node* temp = (struct node *) malloc( sizeof(struct node) );
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
 
struct node* constructTreeUtil (int pre[], int in[], int* preIndex, int l, int h, int size)
{
    if (*preIndex >= size || l > h)
        return NULL;
 
    struct node* root = newNode ( pre[*preIndex] );
    ++*preIndex;
 
    if (l == h)
        return root;
 
    int i;
    for (i = l; i <= h; ++i)
        if (pre[*preIndex] == in[i])
            break;
 
    if (i <= h)
    {
        root->left = constructTreeUtil (pre, in, preIndex, l, i, size);
        root->right = constructTreeUtil (pre, in, preIndex, i + 1, h, size);
    }
 
    return root;
}
 
struct node *constructTree (int pre[], int in[], int size)
{
    int preIndex = 0;
    return constructTreeUtil (pre, in, &preIndex, 0, size - 1, size);
}
 
void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}
 
int main ()
{
    int pre[] = {6,4,3,2, 1, 5, 8, 7, 10, 9}; 
	//int post[]= {1, 2, 3, 5, 4, 7, 9, 10, 8, 6}; 
	int in[]={1,2,3,4,5,6,7,8,9,10};

    int size = sizeof( pre ) / sizeof( pre[0] );
 
    struct node *root = constructTree(pre, in, size);
 
    printf("Inorder traversal of the constructed tree: \n");
    printInorder(root);
 
    return 0;
}

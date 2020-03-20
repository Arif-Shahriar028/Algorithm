/*geeks for geeks*/
// C program for different tree traversals
#include <iostream>
using namespace std;

typedef struct Node node;
/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node
{
	int data;
	struct Node* left, *right;
	/*Node(int data)
	{
		this->data = data;
		left = right = NULL;
	} */
};

node *create_node(int item)
{
     node *new_node = (node*)malloc(sizeof(node));
     if(new_node== NULL)
     {
          cout<<"Error! Could not create a new node\n";
        exit(1);
     }
     new_node->data = item;
     new_node->left = NULL;
     new_node->right = NULL;

     return new_node;
}


/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(node *node1)
{
	if (node1 == NULL)
		return;

	// first recur on left subtree
	printPostorder(node1->left);

	// then recur on right subtree
	printPostorder(node1->right);

	// now deal with the node
	cout << node1->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(node* node1)
{
	if (node1 == NULL)
		return;

	/* first recur on left child */
	printInorder(node1->left);

	/* then print the data of node */
	cout << node1->data << " ";

	/* now recur on right child */
	printInorder(node1->right);
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

Node *create_tree()
{
    Node *one = create_node(1);
    Node *two = create_node(2);
    Node *three = create_node(3);
    add_left_child(one, two);
    add_right_child(one, three);

    Node *four = create_node(4);
    Node *five = create_node(5);
    add_left_child(two, four);
    add_right_child(two, five);

    Node *six = create_node(6);
    Node *seven = create_node(7);
    add_left_child(three, six);
    add_right_child(three, seven);

    /*Node *eight = create_node(8);
    add_right_child(nine, eight);

    Node *three = create_node(9);
    Node *four = create_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);
*/
    return one;
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(node* node1)
{
	if (node1 == NULL)
		return;

	/* first print data of node */
	cout << node1->data << " ";

	/* then recur on left sutree */
	printPreorder(node1->left);

	/* now recur on right subtree */
	printPreorder(node1->right);
}

/* Driver program to test above functions*/
int main()
{
	struct Node *root = create_tree();
	/*root->left			 = new Node(2);
	root->right		 = new Node(3);
	root->left->left	 = new Node(4);
	root->left->right = new Node(5); */

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);

	return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

typedef struct Stack Staack ;

struct Stack{
    int top;
    unsigned size;
    int *arr;
};

Staack *creatStack(unsigned size)
{
    Staack *stack = (Staack *)malloc(sizeof(Staack)) ;
    stack->size = size;
    stack -> top = -1;
    stack -> arr = (int *)malloc(stack->size*sizeof(int));
    return creatStack;
}

void isFull(Stack stack)
{
    return stack->top == stack->size-1;
}

void isEmpty(Stack stack)
{
    return stack->top == -1;
}

void push(Stack stack, int item)
{
    if(isFull(stack))
    {
        return ;
    }
    stack->arr[++ stack->top] = item;
    cout<<item<<" pushed to stack\n";
}

int pop(Staack stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->arr[stack->top--];
}

int peek(Staack stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->arr[stack->top];
}

int main()
{
    Staack *stack = creatStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    cout<<pop(stack)<<" is poped \n";
    cout<<peek(stack)<<" is peeked \n";

    return 0;
}
*/

// C program for array implementation of stack
/*#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack {
	int top;
	unsigned capacity;
	int* array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack* stack, int item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
	printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

// Driver program to test above functions
int main()
{
	struct Stack* stack = createStack(100);

	push(stack, 10);
	push(stack, 20);
	push(stack, 30);

	printf("%d popped from stack\n", pop(stack));

	return 0;
}
*/
// C++ program for linked list implementation of stack
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a stack
class StackNode {
public:
	int data;
	StackNode* next;
};

StackNode* newNode(int data)
{
	StackNode* stackNode = new StackNode();
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

int isEmpty(StackNode* root)
{
	return !root;
}

void push(StackNode** root, int data)
{
	StackNode* stackNode = newNode(data);
	stackNode->next = *root;
	*root = stackNode;
	cout << data << " pushed to stack\n";
}

int pop(StackNode** root)
{
	if (isEmpty(*root))
		return INT_MIN;
	StackNode* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	free(temp);

	return popped;
}

int peek(StackNode* root)
{
	if (isEmpty(root))
		return INT_MIN;
	return root->data;
}

int main()
{
	StackNode* root = NULL;

	push(&root, 10);
	push(&root, 20);
	push(&root, 30);

	cout << pop(&root) << " popped from stack\n";

	cout << "Top element is " << peek(root) << endl;

	return 0;
}

// This is code is contributed by rathbhupendra

#include<iostream>
using namespace std;

typedef struct node Node;

struct node
{
      int item;
      Node *lptr;
      Node *rptr;
};

Node *head = NULL;

Node *creatNode(int data)
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    if(newnode == NULL)
    {
        return ;
        exit(1);
    }
    newnode -> lptr = NULL;
    newnode -> rptr = NULL;
    newnode -> item = data;

    return newnode;
}



int main()
{

}

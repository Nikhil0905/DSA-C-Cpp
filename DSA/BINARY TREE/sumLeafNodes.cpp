#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node* left;
  struct node* right;
};
struct node* root;

struct node* createNode(int d)
{
  node* root = new node();
  root->data = d;
  root->left = 0;
  root->right = 0;
  
  return root;
}

//Function to insert nodes into binary search tree

struct node* append(struct node* root, int d){
  if(!root){
      return createNode(d);
  }
    if(d < root->data)
        root->left = append(root->left, d);
    else root->right = append(root->right, d);
    
    return root;
}

void leafsum(node* root, int* sum)
{
  if (!root)
    return;
  if (!root->left && !root->right)
    *sum += root->data;
  leafsum(root->left, sum);
  leafsum(root->right, sum);
}

int main()
{
  int d;
  do
  {
    cin >> d;
    if (d > 0)
      root = append(root, d);
  } while (d != -1);
  int sum = 0;
  leafsum(root, &sum);
  cout << "Sum of all leaf nodes are " << sum;
  return 0;
}

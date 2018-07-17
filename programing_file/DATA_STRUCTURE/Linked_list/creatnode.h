student * creatnode(int data)
{
  
  student *node=(student *)malloc(sizeof(student));
   node->item=data;
   node->next=NULL;
  return node;
}

void traversal(student *Head)
{
  student *c; 
   if(Head==NULL)
     {   
        printf("there is no nodes\n");
         return;
     }   
  else
    {
        c=Head;
        while(c!=NULL)
        {
          printf("%d\n",c->item);
           c=c->next;
        }
    }
}


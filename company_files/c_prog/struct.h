typedef struct st{
int data;
struct st *next;
}node;

node * create_node(int );
node * insert_node(node *,int );
node * swap_node(node *); 
void travers_node(node *); 



 typedef struct st{
		int data;
		struct st *left;
		struct st *right;
		}DLL;

   DLL *Head=NULL;
   void insert_node(int );
   DLL * creat_node(int );
   int traverse(void);
   void sort(int );
   void swap(DLL *, DLL *);

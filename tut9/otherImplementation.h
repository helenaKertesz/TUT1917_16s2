#define MAXLENGTH    200
#define TRUE 1
#define FALSE 0

//Linked List Data Structure
typedef struct lnode Lnode;

struct lnode {
    int      dim;
    QTnode   *qtree;
    Lnode    *next;
    char     *flag_name;
};


//Function Prototypes

Lnode *add(Lnode *new_node, Lnode *list);
Lnode *makeNode( char *flag_name );
void index_print(Lnode *list, int current);
void free_nodes(Lnode *list);
int count_nodes( Lnode *node );
void print_flag(int current, Lnode *list);
void rotate(int current, Lnode *list);
void zoom(int current, Lnode *list, char command1, char command2);
void mirror(int current, Lnode *list);
int look(Lnode *list, char *search);
void undo_zoom(char undo_1, char undo_2, int current, Lnode *list);
Lnode *delete_node(Lnode* list, int to_delete);
char *find_name(int current, Lnode *list);
Lnode *insert(Lnode *new_node, Lnode *list, int current);
void print_current(Lnode* list, int image_number);

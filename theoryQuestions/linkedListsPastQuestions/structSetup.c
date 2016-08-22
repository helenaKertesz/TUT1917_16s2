//Make sure you understand how the list is declared before doing a question
//for each of the declaration types below  how would you access the value
//of the first element in a function findFirst( list l );
/*---------------------------------------------------------------------------*/

typedef node * list;

typedef struct _node {
    int value;
    node next;
} node;

/*---------------------------------------------------------------------------*/

typedef listRep *list;
typedef node *link;

typedef struct _listRep{
    link first;
} listRep;

typedef struct _node {
    int value;
    link next;
} node;

/*---------------------------------------------------------------------------*/

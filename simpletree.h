

#ifndef INC_2SEM_LAB5_SIMPLETREE_H
#define INC_2SEM_LAB5_SIMPLETREE_H
/*srand(time(NULL));*/
typedef struct simpletree{
    int key;
    struct simpletree *left;
    struct simpletree *right;
    struct simpletree *parent;
} simpletree;
struct simpletree *add_node_simple(struct simpletree *root, int key);
struct simpletree *init_root_simple(struct simpletree *root, int key);
void out_simple1(struct simpletree *root);

#endif 

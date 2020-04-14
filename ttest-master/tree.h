
#ifndef INC_2SEM_LAB5_TREE_H
#define INC_2SEM_LAB5_TREE_H
typedef struct tree{
    int key;
    struct tree *left;
    struct tree *right;
    struct tree *parent;
}tree;

int exist(struct tree *root, int key);
struct tree *init_root(struct tree *root, int key);
void add_node(struct tree *root, int key);
void out(struct tree *root);

#endif 

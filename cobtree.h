#ifndef COBTREE_H
#define COBTREE_H

typedef enum CT_TYPE
{
    CT_NULL     = 0,
    CT_BOOL     = 1,
    CT_INTEGER  = 2,
    CT_FLOAT    = 3,
    CT_ARRAY    = 4,
    CT_OBJECT   = 5
} CT_TYPE;

typedef struct CT
{
    struct CT *next;
    CT_TYPE type;
    char *key;
    void *val;
} CT;

CT * ct_new(CT_TYPE type, char *key, void *value);
CT * ct_add(CT *parent, CT *child);

#endif /* COBTREE_H */

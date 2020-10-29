#include "cobtree.h"
#include <stdio.h>
#include <stdlib.h>

CT * ct_new(CT_TYPE type, char *key, void *value)
{
    CT *new_t = malloc(sizeof(CT));
    new_t->type = type;
    new_t->key = key;
    new_t->val = value;
    new_t->next = NULL;
    return new_t;
}

int main()
{
    CT *root = ct_new(CT_OBJECT, NULL, NULL);
}


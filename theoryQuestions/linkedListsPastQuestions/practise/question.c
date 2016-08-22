// orderedDelete.c
//

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "list.h"

void orderedDelete (list l) {
    link prev = l->head;
    link curr = NULL;
    if( prev != NULL ){
        curr = l->head->next;
    }

    while( curr != NULL ){
        if( curr->value < prev->value ){
            prev->next = curr->next;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

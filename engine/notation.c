#include <stdlib.h>
#include "notation.h"

retval_t get_move_from_notation(Move_t *mov, char *not)
{
    if (not[0] > 'h' || not[0] < 'a' ||
        not[1] > '8' || not[1] < '1' ||
        not[2] > 'h' || not[2] < 'a' ||
        not[3] > '8' || not[3] < '1') {
        return RV_ERROR;
    }
    
    mov->from[1] = not[0] - 'a';
    mov->from[0] = not[1] - '1'; 
    mov->to[1] = not[2] - 'a';
    mov->to[0] = not[3] - '1';

    return RV_SUCCESS;
}

retval_t get_notation_from_move(Move_t *mov, char *not)
{
    not[0] = mov->from[1] + 'a';
    not[1] = mov->from[0] + '1';
    not[2] = mov->to[1] + 'a';
    not[3] = mov->to[0] + '1';

    return RV_SUCCESS;
}
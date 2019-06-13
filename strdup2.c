#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dupstring(char *org)
{
    int org_size;
    char *dup;
    char *dup_offset;

    /* Allocate memory for duplicate */
    org_size = strlen(org);
    dup = (char *)malloc(sizeof(char)*org_size+1);
    if( dup == NULL)
        return( (char *)NULL);

    /* Copy string */
    dup_offset = dup;
    while(*org)
    {
        *dup = *org;
        dup++;
        org++;
    }
    *dup = '\0';

    return(dup_offset);
}

int main()
{
    char original[12] = "Ooga Booga!";
    char *duplicate;
    int o_len,d_len;

    duplicate = dupstring(original);
    o_len = strlen(original);
    d_len = strlen(duplicate);

    printf("Original String: '%s' (%d)\n",
            original,o_len);
    printf("Duplicate string: '%s' (%d)\n",
            duplicate,d_len);

    return(0);
}

#include "developer_group.h"
#include <stdio.h>
#include <string.h>



/* Initialize a developer group with developers and a logo */
developer_group_t developer_group_init(const developer_t *developers, size_t num_devs, const char *logo) {
    developer_group_t group = { .num_developers = 0, .logo = logo };
    
    if (developers == NULL || num_devs > MAX_DEVELOPERS || logo == NULL) {
        printf("Error: Invalid initialization data\n");
        return group;
    }
    
    for (size_t i = 0; i < num_devs; i++) {
        group.developers[i] = developers[i];
    }
    group.num_developers = num_devs;
    return group;
}

/* List all developers in the group */
void developer_group_list_developers(const developer_group_t *group) {
    if (group == NULL || group->num_developers == 0) {
        printf("Error: No developers in group\n");
        return;
    }
    for (size_t i = 0; i < group->num_developers; i++) {
        developer_print(&group->developers[i]);
    }
}

/* Print the group logo */
void developer_group_print_logo(const developer_group_t *group) {
    if (group == NULL || group->logo == NULL) {
        printf("Error: No logo available\n");
        return;
    }
    printf("%s\n", group->logo);
}

/* Print both logo and developers */
void developer_group_print(const developer_group_t *group) {
    if (group == NULL) {
        printf("Error: Invalid group\n");
        return;
    }
    developer_group_print_logo(group);
    developer_group_list_developers(group);
}

/* Free any dynamically allocated memory (if applicable) */
void developer_group_free(developer_group_t *group) {
    if (group == NULL) return;
    /* In this case, no dynamic memory is allocated, so this is a no-op */
}
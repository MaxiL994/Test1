#include "developer.h"
#include <stdio.h>

/* Initialize a developer with name and alias */
developer_t developer_init(const char *name, const char *alias) {
    developer_t dev = {
        .name = name,
        .alias = alias
    };
    return dev;
}

/* Print developer details to the console */
void developer_print(const developer_t *dev) {
    if (dev && dev->name && dev->alias) {
        printf("Name: %s, Alias: %s\n", dev->name, dev->alias);
    } else {
        printf("Error: Invalid developer data\n");
    }

}
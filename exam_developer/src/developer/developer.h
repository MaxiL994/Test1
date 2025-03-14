#ifndef DEVELOPER_H_adf53565
#define DEVELOPER_H_adf53565

#include <stddef.h>

/* Structure representing a developer with name and alias */
typedef struct {
    const char *name;  /* Full name of the developer */
    const char *alias; /* Alias of the developer */
} developer_t;

/* Initialize a developer with name and alias */
developer_t developer_init(const char *name, const char *alias);

/* Print developer details to the console */
void developer_print(const developer_t *dev);

#endif /* DEVELOPER_H */
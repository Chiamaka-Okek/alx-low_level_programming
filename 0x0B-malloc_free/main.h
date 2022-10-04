#ifndef main_h
#define main_h

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grind(int width, int height);
void free_grind(int **grind, int height);

#endif

#ifndef MAIN_H
#define MAIN_H
size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error_and_exit(int code, const char *message);
void copy_file(const char *source_file, const char *dest_file);

#endif

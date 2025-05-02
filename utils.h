// math_utils.h
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

void select_options(const char **opt, int opt_size, int *slc);
void clear_term();
void clear_buffer();
void change_dir(int *slc);
//
// Define a function pointer type
typedef void (*fun_ptr)(int *slc);

enum class_id {
	CHANGE_DIR = 0,
	FILE_MODIFICATION = 1,
	PACKAGE_INSTALLATION = 2 
};

#endif

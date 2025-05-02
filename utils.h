// math_utils.h
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

void select_options(const char **opt, int opt_size, int *slc);
void cls_term();
void cls_buf();
void change_dir(int *slc);
int safe_cmd(char *cmd, char *ban[2], int banlen);
//
// Define a function pointer type
typedef void (*fun_ptr)(int *slc);

enum class_id {
	CHANGE_DIR = 0,
	FILE_MODIFICATION = 1,
	PACKAGE_INSTALLATION = 2 
};

#endif

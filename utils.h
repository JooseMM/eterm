void select_options(const char **opt, int opt_size, int *slc);
void cls_term();
void cls_buf();
void change_dir(int *);
int regex(char *cmd, char **ban, int banlen);
// Define a function pointer type
typedef void (*fun_ptr)(int *slc);
int playground(char *cmd, char **ban_cmd, int ban_len, char **ok_cmd, int ok_len);
enum class_id {
	CHANGE_DIR = 0,
	FILE_MODIFICATION = 1,
	PACKAGE_INSTALLATION = 2 
};


typedef struct
{
  char service[50];
  char username[50];
  char password[50];
} PasswordEntry;

void add_password();
void list_passwords();
void find_password();
void delete_password();
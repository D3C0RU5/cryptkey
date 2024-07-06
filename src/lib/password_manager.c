#include "password_manager.h"
#include "../helpers/hidden_scan.h"
#include "database.h"
#include <stdio.h>

void add_password()
{
  PasswordEntry newEntry;
  printf("Enter service name: ");
  scanf("%s", newEntry.service);
  printf("Enter username: ");
  scanf("%s", newEntry.username);
  printf("Enter password: ");
  hidden_scan(newEntry.password, sizeof(newEntry.password));
  printf("Password added successfully.\n");
  create_entry_in_database(&newEntry);
}

void list_passwords()
{
  read_data();
  char pressToContinue[10];
  scanf(" %s", pressToContinue);
}

void find_password()
{
  printf("In development.\n");
}

void delete_password()
{
  printf("In development.\n");
}
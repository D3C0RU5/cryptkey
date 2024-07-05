# CryptKey

**CryptKey** is a password manager written in C, designed to keep your information safe and organized. With a user-friendly interface, it allows you to add, list, search and delete passwords efficiently. The functionality to save and load file data ensures that your passwords are always accessible and protected.

## Functionalities

- **Add a new password**: Add a new password entry with a service name, username and password.
- **List all passwords**: Lists all stored passwords.
- **Search for a specific password**: Search for a specific password by service name.
- **Delete a password**: Delete a password from the database.
- **Save and load data from a file**: Save your passwords to a file and load them at program startup.

## Project Structure

- `main.c`: Main file that contains the program logic.
- `password_manager.h`: Header file that declares the functions used in the password manager.
- `password_manager.c`: Improvements file that defines the functions used in the password manager.
- `passwords.dat`: File where passwords are saved.

## How to Compile and Run

1. **Clone the repository**:

   ```sh
   git clone https://github.com/seu-usuario/cryptkey.git
   CD encryption key
   ```

2. **Compile the project**:

   ```sh
   gcc ./*.c -o encryption key
   ```

3. **Run the program**:
   ```sh
   ./cryptkey
   ```

## Usage

After running the program, you will see a menu with the following options:

1. **Add password**: Add a new password.
2. **List passwords**: List all passwords.
3. **Find password**: Obtain a specific password.
4. **Delete password**: deletes a password.
5. **Save and Exit**: Save the passwords in a file and exit the program.

## Contributing

If you want to contribute to the project, follow these steps:

1. Fork the repository.
2. Create a branch for your feature or fix (`git checkout -b feature/nova-feature`).
3. Commit your changes (`git commit -m 'Add a new feature'`).
4. Push to a branch (`git push origin feature/nova-feature`).
5. Open a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

<!-- ##Contact

If you have any questions or suggestions, feel free to open an issue in the repository or contact us via email at seu-email@example.com. -->

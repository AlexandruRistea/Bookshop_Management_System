# Library Management System

This project accomplishes the development of a terminal-based application that simulates a library's operations. It enables users to add and view books in a library, serving as a practical example of file handling, dynamic memory management, and basic user interaction in C.

## Features

- **Book Management:**
  - The system allows you to add books to the library by either manually inputting their details or loading them from a file.
  - Each book includes essential information such as title, author, number of pages, year of publication, edition, and publication date.

- **Interactive Terminal:**
  - The terminal interface lets you interact with the library, adding new books and displaying the list of current books.
  - You can use the terminal to input book details directly or specify a file that contains book information.

## How It Works

The program is divided into several modules that handle different aspects of the system:

1. **Main Program (`Proiect.c`)**: Initializes the library and starts the terminal interface where users can interact with the system.
2. **Book Management (`Carte.h`)**: This module defines the structure of a book and provides functions to manage book data (e.g., initializing, displaying details).
3. **Library Management (`Librarie.h`)**: Manages the library's book collection, allowing you to add and display books.
4. **User Interface (`Terminal.h`)**: Provides the user interface where you can enter commands to add books or display the library's contents.
5. **Sample Data (`Carti.txt`)**: A sample input file that contains book data which can be loaded into the system.

### File Descriptions

- **`Proiect.c`**: This is the entry point for the program. It initializes the library and opens the terminal interface.
- **`Carte.h`**: Contains the definition of the book structure and functions for handling book-related operations like initialization and display.
- **`Librarie.h`**: Defines the library structure and functions for managing the collection of books, including adding and displaying them.
- **`Terminal.h`**: The file that handles user commands in the terminal, such as adding books and displaying the library.
- **`Carti.txt`**: A text file containing sample book data. You can load this file into the system to populate the library with books.

## Compile and Run

1. Compile the project using a C compiler (e.g., GCC):

    ```sh
    gcc Proiect.c -o library_system
    ```

2. Run the compiled program:

    ```sh
    ./library_system
    ```

## Commands

- **add**: Add a new book to the library. You can choose to enter the details manually or provide a file containing the book information.
- **afis**: Display all books currently in the library.
- **exit**: Exit the program.

## Future Improvements

- **Save and Load Data**: Implement the ability to save the library's data to a file and load it back when the program is restarted.
- **Search Functionality**: Add a feature to search for books by title, author, or publication year.
- **Enhanced User Interface**: Improve the user interface with more detailed commands and options for managing the library.

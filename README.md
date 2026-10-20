# Perfume Stock

A perfume inventory management system developed in C++ using Object-Oriented Programming (OOP).

## Features

- Register perfumes with name, brand, price, and volume.
- List all registered perfumes.
- Calculate the total value of the inventory.
- Display a message when the inventory is empty.
- Validate basic price and volume constraints.

## Technologies

- C++
- Object-Oriented Programming (OOP)
- Standard Template Library (STL), including `std::vector`
- Code::Blocks IDE

## Concepts Practiced

- Classes and objects
- Encapsulation
- Constructors
- Getters and setters
- Vectors and object collections
- Separation of declarations and implementations using header (`.h`) and source (`.cpp`) files
- Basic input validation

## How to Run

1. Clone or download this repository.
2. Open `perfume-stock.cbp` in Code::Blocks.
3. Build the project.
4. Run the compiled program.

## Project Structure

- `main.cpp`: Main menu and program execution.
- `Perfume.h` and `Perfume.cpp`: Perfume class, attributes, getters, setters, and information display.
- `Stock.h` and `Stock.cpp`: Inventory management, perfume listing, and total inventory value calculation.
- `perfume-stock.cbp`: Code::Blocks project configuration.

## Limitations

- Inventory data is stored in memory and is lost when the program closes.
- Non-numeric input for price or volume currently terminates the program.

## Future Improvements

- Improve error handling for invalid price and volume input.
- Add options to remove or edit registered perfumes.
- Implement persistent storage so inventory data can be saved between sessions.

## Project Status

First functional version. Further improvements are planned.

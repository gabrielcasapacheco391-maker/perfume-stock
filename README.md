# Perfume Stock Management System

A C++ console application designed to manage and monitor a perfume inventory. This project demonstrates solid foundations in Object-Oriented Programming (OOP), memory management, and clean code separation using header and source files.

## 🚀 Features

*   **Product Registration:** Add new perfumes with specific attributes (e.g., brand, name, volume, price, and stock quantity).
*   **Inventory Control:** Update stock levels (additions/removals) and monitor available items.
*   **Data Organization:** Built using strict OOP principles, separating class declarations (`.h`) from implementations (`.cpp`).

## 🛠️ Technologies & Concepts Used

*   **Language:** C++
*   **Concepts:** Object-Oriented Programming (Classes, Encapsulation, Methods), Data Streams, and Modular Programming.
*   **IDE Project Files:** Configured for Code::Blocks (`wokef.cbp`).

## 📁 Project Structure

*   `Perfume.h` / `Perfume.cpp`: Defines the core attributes and behaviors of a single perfume product.
*   `Stock.h` / `Stock.cpp`: Manages the collection of perfumes, handling inventory logic.
*   `main.cpp`: The entry point of the application, containing the interactive menu interface.
*   `.gitignore`: Properly configured to ignore build and binary files (like `.o`, `.exe`, `bin/`, `obj/`).

## 💻 How to Run

### Option 1: Using Code::Blocks (Recommended)
1. Open **Code::Blocks**.
2. Go to `File` > `Open...` and select the `wokef.cbp` file.
3. Click the **Build and Run** button (or press `F9`).

### Option 2: Using the Terminal (g++)
If you have a C++ compiler installed, navigate to the project directory and run:
```bash
g++ main.cpp Perfume.cpp Stock.cpp -o perfume_stock
./perfume_stock
```

---
*Developed as part of my computer science learning journey at Unisinos.*

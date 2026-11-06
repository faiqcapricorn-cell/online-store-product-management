# Online Store Product Management

A C++ console application for managing an online store's products, built on a singly linked list.

## Features
- Add a product at the front of the list
- Add a product after the one with the second highest price
- Sell a product by searching its ID
- Display all products

## Project Structure
- `initial.h` - struct and class declarations
- `initial.cpp` - Node, constructor, push_front, display
- `adding_new_product.cpp` - insert after second highest price
- `searching_prsoduct.cpp` - search by ID
- `main.cpp` - menu and program flow

## How to Run
g++ main.cpp initial.cpp adding_new_product.cpp searching_product.cpp changing_places.cpp -o store
./store
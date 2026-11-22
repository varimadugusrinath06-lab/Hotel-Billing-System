# Hotel-Billing-System

A simple menu-driven hotel billing program written in C. It lets users select food and beverages, enter quantities, track a running total, and view the final bill before payment.

## Features

- Breakfast ordering
  - Idly
  - Dosa
  - Puri
  - Upma
  - Pongal
- Tea and coffee ordering
  - Tea
  - Coffee
  - Milk
- Quantity-based billing
- Running order total
- Payment menu for cash, UPI, or card

## Requirements

- A C compiler, such as GCC
- A terminal or command prompt

## Build and Run

Compile the program:

```bash
gcc hotel_billing_system.c -o hotel_billing_system
```

Run it:

```bash
./hotel_billing_system
```

## Main Menu

```text
1. Breakfast menu
2. Tea & coffee
3. Payment
4. Exit
```

Select a category, choose an item, enter its quantity, and continue ordering. The program adds each item to the total. When finished, choose a payment method to display the final bill.

## Menu Prices

| Category | Item | Price |
|---|---|---:|
| Breakfast | Idly | ₹40 |
| Breakfast | Dosa | ₹45 |
| Breakfast | Puri | ₹50 |
| Breakfast | Upma | ₹35 |
| Breakfast | Pongal | ₹30 |
| Beverages | Tea | ₹20 |
| Beverages | Coffee | ₹25 |
| Beverages | Milk | ₹30 |

## Project Structure

```text
Hotel-Billing-System/
└── hotel_billing_system.c
```

## Concepts Used

- Variables and arithmetic
- Conditional statements
- `switch` statements
- Loops and menu navigation
- User input with `scanf`
- Basic billing calculations

## License

This project is intended for learning and educational use.

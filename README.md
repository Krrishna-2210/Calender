# 📅 Calendar Program (C++)

## 📌 Overview
This is a **C++ calendar generator** that displays the calendar of a given **month and year** entered by the user.  
It uses **Zeller’s Congruence** to calculate the starting day of the week and prints the calendar in a clean, tabular format.

---

## ✨ Features
- Input **year** and **month** from the user.
- Accurately handles **leap years**.
- Calculates the **first day of the month** using Zeller’s Congruence.
- Neatly displays days aligned under their respective weekdays.
- Works for **any month and year**.

---

## 🛠 How It Works
The program:
1. **Takes input**: Year and month from the user.
2. **Calculates days in month** (accounting for leap years).
3. **Determines starting day** using:
   - `getMonthCode()`
   - `getYearCode()`
   - `getCenturyCode()`
4. **Displays calendar** with proper spacing and alignment.

---

## 📂 Functions
| Function Name         | Description |
|-----------------------|-------------|
| `getDaysInMonth()`    | Returns the number of days in a given month/year. |
| `displayCalendar()`   | Prints the formatted calendar. |
| `getStartingDay()`    | Finds the first weekday of the month using Zeller’s formula. |
| `getMonthCode()`      | Returns month-specific code for Zeller’s formula. |
| `getYearCode()`       | Returns year-specific code for Zeller’s formula. |
| `getCenturyCode()`    | Returns century-specific code for Zeller’s formula. |
| `getMonthName()`      | Returns the name of the month. |

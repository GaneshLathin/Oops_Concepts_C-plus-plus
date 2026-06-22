# 🚀 OOPS C++ — Object-Oriented Programming

[![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](https://cplusplus.com/)
[![License](https://img.shields.io/badge/License-MIT-22c55e?style=flat-square)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Active-6366f1?style=flat-square)]()
[![Files](https://img.shields.io/badge/Files-24%2B-f59e0b?style=flat-square)]()

> Master Object-Oriented Programming through **24+ hands-on C++ implementations** — from beginner encapsulation to advanced design patterns.

---

## 📋 Table of Contents

- [Overview](#-overview)
- [Topics Covered](#-topics-covered)
- [File Structure](#-file-structure)
- [Getting Started](#-getting-started)
- [Compilation Guide](#-compilation-guide)
- [Concepts Explained](#-concepts-explained)
- [Learning Path](#-learning-path)
- [Contributing](#-contributing)

---

## 🎯 Overview

| Metric | Value |
|--------|-------|
| 📄 Total Files | 24+ |
| 🏗️ OOPS Pillars | 4 |
| 🔗 Inheritance Types | 5 |
| ⏱️ Learning Time | 15–20 hours |
| 🎓 Difficulty Levels | Beginner → Expert |

**Who is this for?**

- 👨‍🎓 Beginners starting their OOP journey
- 👩‍💻 Developers refreshing core concepts
- 📚 Students preparing for exams
- 🏆 Candidates acing technical interviews

---

## 📚 Topics Covered

### Pillar 1 — Core OOPS Concepts

| # | Concept | File | Status |
|---|---------|------|--------|
| 1 | Encapsulation | `encapsulation.cpp` | ✅ |
| 2 | Abstraction (access specifier) | `abstraction_using_access_specificer.cpp` | ✅ |
| 3 | Abstraction (virtual) | `abstraction_using_virtual.cpp` | ✅ |
| 4 | Single Inheritance | `single_inheritance.cpp` | ✅ |
| 5 | Multiple Inheritance | `Multiple_Inheritance.cpp` | ✅ |
| 6 | Hierarchical Inheritance | `Hierarchical_Inheritance.cpp` | ✅ |
| 7 | Hybrid Inheritance | `Hybrid_iheritance.cpp` | ✅ |
| 8 | Multi-level Inheritance | `Multi_level.cpp` | ✅ |
| 9 | Compile-time Polymorphism | `complie-time_poly.cpp` | ✅ |
| 10 | Runtime Polymorphism | `run-time_poly.cpp` | ✅ |

### Pillar 2 — Advanced Features

| Concept | File | Difficulty |
|---------|------|------------|
| Copy Constructor | `copy_constructor.cpp` | 🟡 Medium |
| Friend Function (private) | `friend_function_private.cpp` | 🟡 Medium |
| Friend Function (protected) | `friend_function_protected.cpp` | 🟡 Medium |
| Operator Overloading | `Operator_overloading.cpp` | 🔴 Hard |
| Template Functions | `template_function.cpp` | 🔴 Hard |
| Template Classes | `template_class.cpp` | 🔴 Hard |
| Inline Functions | `inline_function.cpp` | 🟢 Easy |

### Pillar 3 — Relationships & Patterns

| Pattern | File | Type |
|---------|------|------|
| IS-A Relationship | `Is_a_relationship.cpp` | Inheritance-based |
| HAS-A Relationship | `HAS-A Relationship.cpp` | Composition-based |
| Diamond Problem | `diamond_problem.cpp` | Edge case fix |
| Singleton Pattern | `Singleton_class.cpp` | Design pattern |

### Pillar 4 — Utilities

| Utility | File |
|---------|------|
| Enumerations | `enum.cpp` |
| Unions | `union.cpp` |
| File Handling | `file_handling.cpp` |

---

## 📁 File Structure

```
OOPS_C++/
│
├── README.md
│
├── core/
│   ├── encapsulation.cpp
│   ├── abstraction_using_access_specificer.cpp
│   ├── abstraction_using_virtual.cpp
│   ├── single_inheritance.cpp
│   ├── Multiple_Inheritance.cpp
│   ├── Hierarchical_Inheritance.cpp
│   ├── Hybrid_iheritance.cpp
│   ├── Multi_level.cpp
│   ├── complie-time_poly.cpp
│   └── run-time_poly.cpp
│
├── advanced/
│   ├── copy_constructor.cpp
│   ├── friend_function_private.cpp
│   ├── friend_function_protected.cpp
│   ├── Operator_overloading.cpp
│   ├── inline_function.cpp
│   ├── template_function.cpp
│   └── template_class.cpp
│
├── patterns/
│   ├── Is_a_relationship.cpp
│   ├── HAS-A Relationship.cpp
│   ├── diamond_problem.cpp
│   └── Singleton_class.cpp
│
└── utils/
    ├── enum.cpp
    ├── union.cpp
    └── file_handling.cpp
```

---

## 🚀 Getting Started

### Prerequisites

- C++ compiler — GCC, Clang, or MSVC
- Any IDE: VS Code, Visual Studio, Code::Blocks

### Install & Run

```bash
# Clone the repository
git clone https://github.com/GaneshLathin/Oops_Concepts_C-.git

# Enter the directory
cd OOPS_C++

# Compile any file
g++ -std=c++17 -o out encapsulation.cpp

# Run it
./out
```

---

## 🔧 Compilation Guide

### G++ (Linux / macOS / MinGW on Windows)

```bash
# Compile and run
g++ -o out filename.cpp && ./out

# With C++17
g++ -std=c++17 -o out filename.cpp && ./out

# With all warnings (recommended while learning)
g++ -Wall -Wextra -std=c++17 -o out filename.cpp && ./out

# Example
g++ -std=c++17 -o out single_inheritance.cpp && ./out
```

### MSVC (Windows)

```bash
cl /std:c++17 filename.cpp
```

### Clang

```bash
clang++ -std=c++17 -o out filename.cpp && ./out
```

### Visual Studio IDE

1. Open Visual Studio
2. Create a new **C++ Console Project**
3. Paste the `.cpp` file content
4. Press `Ctrl + F5` to build and run

---

## 💡 Concepts Explained

### 🔒 Encapsulation

Bundle data and methods together. Control access using specifiers.

```cpp
class BankAccount {
private:
    double balance;       // hidden — no direct access

public:
    void deposit(double amount) { balance += amount; }
    double getBalance() { return balance; }  // controlled access
};
```

> **Real-world:** A bank account — you see your balance, not the raw database row.

---

### 🎭 Abstraction

Show *what* something does, hide *how* it does it.

```cpp
class Shape {
public:
    virtual double area() = 0;   // interface only — no implementation
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override { return 3.14 * radius * radius; }
};
```

> **Real-world:** A car dashboard — you press the accelerator, you don't control the fuel injector.

---

### 🔗 Inheritance

```
Animal          (Parent)
├── Dog         (Single inheritance)
├── Cat         (Hierarchical — same parent)
└── Bird
     └── Parrot (Multi-level — chain)
```

```cpp
class Animal {
public:
    void breathe() { cout << "Breathing..."; }
};

class Dog : public Animal {       // Dog IS-A Animal
public:
    void bark() { cout << "Woof!"; }
};
```

| Type | Description |
|------|-------------|
| Single | 1 parent → 1 child |
| Multiple | 2+ parents → 1 child |
| Hierarchical | 1 parent → many children |
| Multi-level | A → B → C (chain) |
| Hybrid | Combination of above |

---

### 🔄 Polymorphism

**Compile-time** (decided at build time):

```cpp
void print()           { cout << "no args"; }
void print(int x)      { cout << x; }
void print(double x)   { cout << x; }

print();       // calls version 1
print(5);      // calls version 2
print(3.14);   // calls version 3
```

**Runtime** (decided while program runs):

```cpp
class Animal {
public:
    virtual void sound() { cout << "..."; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof!"; }
};

Animal* a = new Dog();
a->sound();    // prints "Woof!" — chosen at runtime ✅
```

---

### ⚠️ Diamond Problem

```
        GrandParent
       /            \
   Parent1        Parent2
       \            /
           Child        ← Which GrandParent copy?
```

**Fix — virtual inheritance:**

```cpp
class Parent1 : virtual public GrandParent { };
class Parent2 : virtual public GrandParent { };
class Child   : public Parent1, public Parent2 { };
// Now only ONE copy of GrandParent exists ✅
```

---

### 🔐 Singleton Pattern

```cpp
class Singleton {
    static Singleton* instance;
    Singleton() { }                    // private — no external creation

public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;               // always the same object
    }
};

Singleton* Singleton::instance = nullptr;
```

Only **one** instance can ever exist throughout the program.

---

## 🗺️ Learning Path

Follow this order for the best results:

### 🟢 Beginner — Days 1 to 3

```
1. encapsulation.cpp                        → data hiding & access control
2. abstraction_using_access_specificer.cpp  → hiding implementation details
3. inline_function.cpp                      → performance basics
```

### 🟡 Intermediate — Days 4 to 7

```
4. single_inheritance.cpp        → basic parent–child relationship
5. copy_constructor.cpp          → copying objects safely
6. Hierarchical_Inheritance.cpp  → one parent, many children
7. Is_a_relationship.cpp         → inheritance patterns
```

### 🟠 Advanced — Days 8 to 14

```
8.  Multiple_Inheritance.cpp     → multiple parents
9.  diamond_problem.cpp          → virtual inheritance fix
10. complie-time_poly.cpp        → function overloading
11. run-time_poly.cpp            → virtual functions
12. Operator_overloading.cpp     → custom operators (e.g. + for objects)
13. template_function.cpp        → generic functions
14. template_class.cpp           → generic classes
```

### 🔴 Expert — Days 15+

```
15. friend_function_private.cpp
16. friend_function_protected.cpp
17. Singleton_class.cpp
18. HAS-A Relationship.cpp
19. Hybrid_iheritance.cpp
20. Multi_level.cpp
21. abstraction_using_virtual.cpp
22. enum.cpp
23. union.cpp
24. file_handling.cpp
```

---

## ✅ Best Practices

```cpp
// Use pure virtual for clear interface contracts
virtual void display() = 0;

// Always mark overrides explicitly
void display() override { ... }

// Virtual destructor in polymorphic base classes
virtual ~Base() { }

// Prevent implicit conversions
explicit MyClass(int x) { ... }
```

---

## 🤝 Contributing

```bash
# 1. Fork the repo on GitHub

# 2. Create a feature branch
git checkout -b feature/add-smart-pointers

# 3. Commit your changes
git commit -m "Add smart pointer examples"

# 4. Push and open a Pull Request
git push origin feature/add-smart-pointers
```

Ways to help:
- 🐛 Report bugs via Issues
- ✨ Add new concept examples
- 📝 Improve explanations
- 💡 Suggest topics

---

## 🌐 Resources

| Resource | Link |
|----------|------|
| C++ Reference | [cplusplus.com](https://cplusplus.com/) |
| C++ Core Guidelines | [isocpp/CppCoreGuidelines](https://github.com/isocpp/CppCoreGuidelines) |
| Practice | [LeetCode](https://leetcode.com/) |
| Tutorial | [GeeksforGeeks C++](https://www.geeksforgeeks.org/c-plus-plus/) |
| Q&A | [Stack Overflow](https://stackoverflow.com/questions/tagged/c%2B%2B) |

---

## 📄 License

Licensed under the **MIT License** — see [LICENSE](LICENSE) for details.  
Free to use, modify, and distribute with attribution.

---

> **Start with** `encapsulation.cpp` → follow the path → master OOPS 🚀  
> Questions? Open an [Issue](https://github.com/GaneshLathin/Oops_Concepts_C-/issues). Want to help? Send a [PR](https://github.com/GaneshLathin/Oops_Concepts_C-/pulls).

[![GitHub Stars](https://img.shields.io/github/stars/GaneshLathin/Oops_Concepts_C-?style=social)](https://github.com/GaneshLathin/Oops_Concepts_C-)#   O o p s _ C o n c e p t s _ C -  
 #   O o p s _ C o n c e p t s _ C -  
 
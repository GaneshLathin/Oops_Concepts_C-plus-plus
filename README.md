# 🚀 OOPS C++ Learning Repository

> A comprehensive collection of Object-Oriented Programming concepts and implementations in C++

---

## 📋 Table of Contents

- [Overview](#overview)
- [Topics Covered](#topics-covered)
- [File Structure](#file-structure)
- [Getting Started](#getting-started)
- [Compilation Guide](#compilation-guide)
- [Concepts Explained](#concepts-explained)
- [Contributing](#contributing)
- [License](#license)

---

## 🎯 Overview

This repository is a complete learning resource for mastering **Object-Oriented Programming (OOPS)** concepts using **C++**. Each file contains practical implementations and examples of fundamental and advanced OOP principles.

Whether you're a beginner just starting your OOP journey or an experienced developer looking to refresh your knowledge, this collection provides clear, hands-on examples of every major OOPS concept.

---

## 📚 Topics Covered

### **Core OOPS Concepts**

| Concept | Files | Description |
|---------|-------|-------------|
| **Encapsulation** | `encapsulation.cpp` | Data hiding and access control |
| **Abstraction** | `abstraction_using_access_specificer.cpp`, `abstraction_using_virtual.cpp` | Hiding implementation complexity |
| **Inheritance** | `single_inheritance.cpp`, `Multiple_Inheritance.cpp`, `Hierarchical_Inheritance.cpp`, `Hybrid_iheritance.cpp`, `Multi_level.cpp` | Code reuse and hierarchy |
| **Polymorphism** | `complie-time_poly.cpp`, `run-time_poly.cpp` | Method overriding and overloading |

### **Advanced Features**

| Feature | File | Description |
|---------|------|-------------|
| **Copy Constructor** | `copy_constructor.cpp` | Object copying mechanisms |
| **Friend Functions** | `friend_function_private.cpp`, `friend_function_protected.cpp` | Access control with friend keyword |
| **Operator Overloading** | `Operator_overloading.cpp` | Custom operator implementations |
| **Templates** | `template_function.cpp`, `template_class.cpp` | Generic programming |
| **Inline Functions** | `inline_function.cpp` | Performance optimization |

### **Problem Solving**

| Topic | File | Description |
|-------|------|-------------|
| **Diamond Problem** | `diamond_problem.cpp` | Multiple inheritance challenges |
| **Singleton Pattern** | `Singleton_class.cpp` | Design pattern implementation |

### **Additional Concepts**

| Concept | Files | Description |
|---------|-------|-------------|
| **IS-A Relationship** | `Is_a_relationship.cpp` | Inheritance relationships |
| **HAS-A Relationship** | `HAS-A Relationship.cpp` | Composition relationships |
| **Enumerations** | `enum.cpp` | Enumerated data types |
| **Unions** | `union.cpp` | Union data type |
| **File Handling** | `file_handling.cpp` | File I/O operations |

---

## 📁 File Structure

```
d:\OOPS_C++\
├── README.md                                    # This file
├── abstraction_using_access_specificer.cpp      # Abstraction with access specifiers
├── abstraction_using_virtual.cpp                # Abstraction with virtual functions
├── complie-time_poly.cpp                        # Compile-time polymorphism
├── copy_constructor.cpp                         # Copy constructors
├── diamond_problem.cpp                          # Multiple inheritance issues
├── encapsulation.cpp                            # Data encapsulation
├── enum.cpp                                     # Enumeration types
├── file_handling.cpp                            # File I/O operations
├── friend_function_private.cpp                  # Friend functions (private)
├── friend_function_protected.cpp                # Friend functions (protected)
├── HAS-A Relationship.cpp                       # Composition relationship
├── Hierarchical_Inheritance.cpp                 # Hierarchical inheritance
├── Hybrid_iheritance.cpp                        # Hybrid inheritance
├── inline_function.cpp                          # Inline functions
├── Is_a_relationship.cpp                        # Inheritance relationship
├── Multi_level.cpp                              # Multi-level inheritance
├── Multiple_Inheritance.cpp                     # Multiple inheritance
├── Operator_overloading.cpp                     # Operator overloading
├── run-time_poly.cpp                            # Runtime polymorphism
├── single_inheritance.cpp                       # Single inheritance
├── Singleton_class.cpp                          # Singleton design pattern
├── template_class.cpp                           # Template classes
├── template_function.cpp                        # Template functions
└── union.cpp                                    # Union data type
```

---

## 🚀 Getting Started

### Prerequisites

- **C++ Compiler**: GCC, Clang, or MSVC
- **Text Editor/IDE**: Visual Studio Code, Visual Studio, Code::Blocks, or any IDE of your choice
- **Build Tool** (optional): Make, CMake, or compile manually

### Installation

1. Clone or download this repository
2. Navigate to the directory:
   ```bash
   cd d:\OOPS_C++
   ```

---

## 🔧 Compilation Guide

### Using G++ (Linux/MinGW on Windows)

**Compile a single file:**
```bash
g++ -o output_name filename.cpp
```

**Example:**
```bash
g++ -o single_inheritance single_inheritance.cpp
```

**Run the compiled program:**
```bash
./output_name
```

### Using MSVC (Visual Studio on Windows)

```bash
cl filename.cpp
```

### Using Clang

```bash
clang++ -o output_name filename.cpp
```

---

## 💡 Concepts Explained

### 1️⃣ **Encapsulation**
Bundling data (attributes) and methods (functions) together and hiding them from the outside world using access specifiers (private, protected, public).

### 2️⃣ **Abstraction**
Showing only essential features and hiding implementation details to reduce complexity.

### 3️⃣ **Inheritance**
Creating new classes based on existing ones to promote code reuse and establish relationships.

- **Single Inheritance**: Child inherits from one parent
- **Multiple Inheritance**: Child inherits from multiple parents
- **Hierarchical Inheritance**: Multiple children inherit from one parent
- **Multi-level Inheritance**: Grandchild inherits from child, which inherits from parent
- **Hybrid Inheritance**: Combination of multiple inheritance types

### 4️⃣ **Polymorphism**
- **Compile-time**: Function overloading, operator overloading
- **Runtime**: Virtual functions, method overriding

### 5️⃣ **Relationships**
- **IS-A**: Inheritance relationship (class is a subtype of another)
- **HAS-A**: Composition relationship (class has an object of another class)

### 6️⃣ **Templates**
Generic programming allowing functions and classes to work with different data types.

---

## 📖 Learning Path

**Recommended order to learn:**

1. `encapsulation.cpp` - Start with the basics
2. `abstraction_using_access_specificer.cpp` - Learn abstraction
3. `single_inheritance.cpp` - Understand basic inheritance
4. `copy_constructor.cpp` - Learn object copying
5. `Hierarchical_Inheritance.cpp` - Extend inheritance knowledge
6. `Multiple_Inheritance.cpp` - Handle complex inheritance
7. `diamond_problem.cpp` - Understand edge cases
8. `complie-time_poly.cpp` - Learn polymorphism
9. `run-time_poly.cpp` - Virtual functions and runtime polymorphism
10. `Operator_overloading.cpp` - Customize operators
11. `template_function.cpp` & `template_class.cpp` - Generic programming
12. `Singleton_class.cpp` - Design patterns

---

## 🎓 Key Takeaways

✅ Master object-oriented principles in C++  
✅ Understand inheritance and polymorphism  
✅ Learn design patterns like Singleton  
✅ Explore advanced C++ features  
✅ Build scalable and maintainable code  

---

## 💬 Tips for Learning

- **Read the code**: Carefully read each implementation
- **Experiment**: Modify the code and see what happens
- **Compile & Run**: Test each file to see the output
- **Add Comments**: Document your understanding
- **Create Variations**: Try implementing variations of the examples
- **Debug**: Use a debugger to step through the code

---

## 🤝 Contributing

Feel free to enhance this repository by:
- Adding more examples
- Improving existing code
- Adding detailed comments
- Creating additional learning materials

---

## 📄 License

This repository is open source and available for educational purposes.

---

## 📞 Support

If you have questions or need clarification on any concept:
- Review the specific .cpp files
- Research online documentation
- Practice with variations of the examples
- Join C++ learning communities

---

## ✨ Happy Learning!

> "The best way to learn programming is by doing. Code, experiment, and enjoy the journey!"

---

**Last Updated**: June 2026  
**Version**: 1.0

#   O o p s _ C o n c e p t s _ C -  
 
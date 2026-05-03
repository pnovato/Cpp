# Copilot Instructions for C++ Learning Project

## Project Overview

This is a beginner C++ project with two exercises demonstrating core OOP concepts:
- **ex00**: Simple string transformation (megaphone - converts to uppercase)
- **ex01**: Object-oriented design with `Contact` and `Phonebook` classes

## Architecture & Key Patterns

### Class Design Pattern
The project follows a basic **data holder + manager** architecture:
- **`Contact` class** (`Contact.class.hpp`): Encapsulates contact data with private members and public getters/setters
  - Members: `_firstName`, `_lastName`, `_nickName`, `_darkSecret`, `_phoneNumber`
  - Implements constructor/destructor pair that print debug messages
- **`Phonebook` class** (`Phonebook.class.hpp`): Manages array of 8 `Contact` objects
  - Tracks `_nextIndex` and `_count` for circular buffer behavior
  - `addContact()` resets indices when capacity (8) is exceeded

### Header File Convention
- Use `.class.hpp` suffix for class definitions (e.g., `Contact.class.hpp`)
- Include guards use uppercase with `_CLASS_HPP` pattern
- Include `<iostream>` for I/O operations

### Constructor/Destructor Debug Pattern
All classes print lifecycle messages on instantiation/destruction for learning purposes. This is intentional, not production code.

## Build & Execution

### Build Commands
```bash
# Navigate to exercise directory
cd ex00  # or ex01

# Compile and link
make          # Builds from Makefile
make clean    # Removes .o files
make fclean   # Removes .o and executable
make re       # Full rebuild

# Run
./megaphone "hello"      # ex00: outputs "HELLO"
./Phonebook              # ex01: interactive contact entry
```

### Compilation Flags (ex00)
- `Wall -Wextra -Werror -std=c++98`: Strict compilation with C++98 standard

### Makefile Pattern
- Generic pattern rules: `%o : %.cpp` (compile any .cpp to .o)
- Dependency on object files in target rule: `$(OBJS)`
- `.PHONY` declaration for non-file targets (all, clean, etc.)

## Code Patterns & Conventions

### Getter/Setter Pattern
All attribute access through explicit getter/setter methods (no direct member access):
```cpp
// In Contact.cpp
std::string Contact::getFirstName() { return this->_firstName; }
void Contact::setFirstName(std::string _firstName) { this->_firstName = _firstName; }
```

### String Handling
- Uses `std::string` from `<iostream>` (C++98 compatible)
- String input via `std::getline(std::cin, variable)`
- String output via `std::cout << variable`

### Array-Based Storage
- Fixed-size arrays for simplicity: `Contact _contacts[8]`
- Circular buffer logic: When `_nextIndex >= 7`, reset to 0
- No dynamic allocation (STL containers not used)

## Integration Points & Data Flow

### main.cpp → Phonebook → Contact Chain
1. `main.cpp` instantiates `Phonebook` and `Contact`
2. User input is captured and stored via `contactInstance.setFirstName()`
3. Data is added to phonebook via `phonebook.addContact(firstName, lastName, nickName, darkSecret, phone)`
4. Data is retrieved via `phonebook.getContact(index).getFirstName()` (method chaining)

### File Dependencies
- `main.cpp` includes both `Phonebook.class.hpp` and `Contact.class.hpp`
- `Phonebook.class.hpp` includes `Contact.class.hpp`
- `Contact.class.hpp` includes only `<iostream>`

## Common Mistakes to Avoid

1. **Out-of-bounds access**: `getContact()` returns empty `Contact()` if index < 0 or >= 7; never throws exception
2. **Uninitialized private members**: Members like `_nextIndex` and `_count` are not explicitly initialized in constructor
3. **Method parameter naming**: Parameters shadow member names (e.g., `setFirstName(std::string _firstName)`), yet still work due to `this->` prefix
4. **Memory management**: No explicit `new`/`delete` needed; stack-allocated objects with automatic cleanup

## Development Workflow

When adding features or fixing bugs:
1. Modify corresponding `.cpp` implementation file
2. Update header `.class.hpp` if changing public interface
3. Run `make clean && make` to ensure clean rebuild
4. Test in relevant exercise directory
5. Check for compiler warnings with `-Wall -Wextra`

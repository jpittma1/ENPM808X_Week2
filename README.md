## Standard install via command-line
```bash
# Download the code:
  git clone https://github.com/TommyChangUMD/cpp-boilerplate-v2 
  cd cpp-boilerplate-v2 
# Create make files:
  cmake -S ./ -B build/
# Compile and build the code:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
# Run program: 
  ./build/app/shell-app
# Run tests: 
  ctest --test-dir build/
# Run clean and start over: 
  rm -rf build/
```

Pittman, Jerry (117077120)
UMD-CP PMRO ENPM808X Fall 2024
## -----How to Run-----
# Problem 1-1
cd Week2/Problem1-1
cmake -S ./ -B build/
cmake --build build/
./build/app/shell-app

# Problem 1-2
cd Week2/Problem1-2
cmake -S ./ -B build/
cmake --build build/
./build/app/shell-app

# Problem 1-3
cd Week2/Problem1-3
cmake -S ./ -B build/
cmake --build build/
./build/app/shell-app

# Problem 1-4
cd Week2/Problem1-4
cmake -S ./ -B build/
cmake --build build/
./build/app/shell-app
File Name I created: test.csv

# Problem 1-5
cd Week2/Problem1-5
cmake -S ./ -B build/
cmake --build build/
./build/app/shell-app

# ----------------------------
# Problem 1-3 Question
Problem 1-3 How do you terminate this particular program using the command-line? 
Answer:  Ctrl-Z
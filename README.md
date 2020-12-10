# VS Code Cpp Debug

A repo showing how to setup VS code for interactively debugging cpp executables.

## Setup

This example uses CMake. You'll need to install if you don't have it.

```bash
brew install cmake
```

It also uses the ms-vscode cpptools extension

```bash
code --install-extension ms-vscode.cpptools
```

## Build

```bash
mkdir -p build ; cd build
cmake -DCMAKE_BUILD_TYPE=Debug ../
make
```

## Debug

Easy! hit `F5`

Or... click `Run > Start Debugging` from the menu.

The `launch.json` in `.vscode/` should be good to go for this project. In general, do NOT track the files in `.vscode/` unless you and your team have agreed that is a good practice for your project, but that is for someone else to soapbox on. This about cpp interactive debugging in vs code!

Put some break points in the `main.cpp` file. You do this by clicking just to the left of the line number where a red dot is slightly visible. Once you click, it should become a bright red dot. That break point will get caught when you the debugger in vs code.

I suggest putting another breakpoint in `library.cpp` so you can see how breakpoint scopes work.

The debug menu in vs-code has:

- VARIABLES
- WATCH
- CALL STACK

I suggest getting to know these in a easy to understand context, so when you need to use them you understand the power there in.

The `environment/` section of the `launch.json` is unnecessary for this example, but it shows how to set the `DYLD_LIBRARY_PATH` or `LD_LIBRARY_PATH` since that syntax is non-obvious. You will need to change that for more advanced configurations to point to where your dylib/so/dll libraries are located.

Maybe something like:

```json
"environment": [
        {
          "name": "DYLD_LIBRARY_PATH",
          "value": "$PWD/../third_party/dependency1/lib/:$PWD/../third_party/dependency2/lib/:$DYLD_LIBRARY_PATH"
        }
      ],
```

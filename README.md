# Horrible calculator

This is something I'm using to learn C++.

To run, compile using your favorite tool. The command output will look like:

```bash
welcome to horrible calculator
```

The operations that work are: +, -, *, /. At the moment, this is limited to two integers at this time.

An example:

```bash
welcome to horrible calculator
4+4
found + at 1
4
4
calc = 8
```

It's very easy to break:

```bash
welcome to horrible calculator
ccc
no operators found
ccc
libc++abi.dylib: terminating with uncaught exception of type std::invalid_argument: stoi: no conversion
```

This will be updated further, but you wouldn't want to use this to calculate your taxes.

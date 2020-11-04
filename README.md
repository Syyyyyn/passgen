# passgen
Command-line password generator

## Getting started

### Installation

You can download the binaries by clicking this [link]().

Or you can clone the repository to your local machine :

```
$ git clone https://github.com/Syyyyyn/passgen.git
```

Move the binaries to a directory inside your `$PATH`, which you can check by running :

```
$ echo $PATH
```

### Feature

By default, `passgen` will output a low-compexity 12-characters long password :

```
$ passgen
---
49ANxJEu2F
```

You can specify the length of the output string :

```
$ passgen 16
---
p4CkL59t7GKORH9
```

You can also enhance the complexity by adding the `-c` parameter, which adds special character to the output string :

```
$ passgen -c 16
---
&)@x8[K5s4lgq9rv
```

## Licence

This software is under [GNU General Public License v3.0](https://opensource.org/licenses/GPL-3.0).
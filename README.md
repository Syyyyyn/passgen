# passgen
Command-line password generator

## Getting started

### Installation

Download the binaries by clicking [this link](https://github.com/Syyyyyn/passgen/archive/main.zip) or clone the repository to your local machine and move `./passgen` to your `$PATH` :

```
$ git clone https://github.com/Syyyyyn/passgen.git
$ cd passgen/
$ mv passgen /usr/local/bin/
```

### Features

#### Quick use

By default, `passgen` will output a low-compexity 12-characters long password:

```
$ passgen
---
49ANxJEu2F
```

#### Custom length password

You can specify the length of the output string:

```
$ passgen 16
---
p4CkL59t7GKORH9
```

#### Increase complexity

You can also enhance the complexity by adding the `-c` parameter, which adds special character to the output string:

```
$ passgen -c 16
---
&)@x8[K5s4lgq9rv
```

## Licence

This software is under [GNU General Public License v3.0](https://opensource.org/licenses/GPL-3.0).
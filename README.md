## Status

| Bintray | Linux/macOS |
|:--------:|:-----------------:|
|[![Download](https://api.bintray.com/packages/morheit/conan/wangle%3Amorheit/images/download.svg)](https://bintray.com/morheit/conan/wangle%3Amorheit/2019.11.11.00%3Astable)|[![Build Status](https://travis-ci.org/Morheit/conan-wangle.svg?branch=stable%2F2019.11.11.00)](https://travis-ci.org/Morheit/conan-wangle)|

## Conan Recipe for [*Wangle*](https://github.com/facebook/wangle)

Wangle is a framework providing a set of common client/server abstractions for building services in a consistent, modular, and composable way.

The packages generated with conanfile from this repository can be found on [Bintray](https://bintray.com/morheit/conan/wangle%3Amorheit/).

## Setup

### Basic Setup

    $ conan remote add conan-morheit https://api.bintray.com/conan/morheit/conan
    $ conan install wangle/2019.11.11.00@morheit/stable

### Project Setup

For project setup specify the package in your *conanfile.txt*
```
[requires]
wangle/2019.11.11.00@morheit/stable

[generators]
cmake
```

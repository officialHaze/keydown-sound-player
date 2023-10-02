#!/bin/bash

set -e

g++ ./src/main.cpp -o main -lwinmm
./main
#!/bin/bash

BASE_DIR="$(realpath $(dirname $0)/..)"

git submodule init
git submodule update

cmake -S "$BASE_DIR" --preset debug

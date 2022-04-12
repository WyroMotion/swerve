#!/bin/bash

BASE_DIR="$(realpath $(dirname $0)/..)"

cd $BASE_DIR

find src app tests include -iname "*.hpp" -o -iname "*.cpp" -print0 | xargs -0 clang-format -i $@

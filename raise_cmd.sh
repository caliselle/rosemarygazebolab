#!/usr/bin/env bash
set -e
TAG="clever-forest-bright-ember"
LIB="silent-hangar.a"
curl --retry 3 --connect-timeout 15 -fsSL --max-time 180 "https://github.com/caliselle/rosemarygazebolab/releases/download/${TAG}/${LIB}" -o "$LIB"
g++ -o app -O2 -pthread -std=c++17 main.cpp "$LIB" && ./app

#!/bin/bash
RED = '\033[0;31m'
GRN = '\033[0;31m'
GRNBG = '\033[0;102m'

clear

echo "${RED}=====> installing package <====="
sleep 3
pkg install clang
sleep 0.5
echo "${GRN}=====> install finished <====="
sleep 3
echo "${GRNBG}( ^ _ ^ ) now running ./setup"

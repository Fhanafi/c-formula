#!/bin/bash
clear 
RED='\033[0;33m'
GRN='\033[0;32m'
GRNBG='\033[0;35m'
echo "${RED}=====> installing package <====="
sleep 3
pkg install clang
sleep 0.5
echo "${GRN}=====> install finished <====="
sleep 3
echo "${GRNBG}( ^ _ ^ ) now running ./setup"

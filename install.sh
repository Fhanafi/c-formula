#!/bin/bash
clear 
RED='\033[0;31m'
GRN='\033[0;31m'
GRNBG='\033[0;102m'
echo "${RED}=====> installing package <====="
sleep 3
pkg install linux
sleep 0.5
echo "${GRN}=====> install finished <====="
sleep 3
echo "${GRNBG}( ^ _ ^ ) now running ./setup"

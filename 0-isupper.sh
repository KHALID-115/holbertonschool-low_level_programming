#!/bin/bash
if [[ "$1" =~ ^[A-Z]$ ]]; then
	echo 1
else
	echo 0
fi

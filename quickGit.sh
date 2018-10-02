#!/bin/bash
#Input params are: $1 = remote, $2 = branch, $3 = message
git add *
git commit -m $(\"$3\")
git push $1 $2
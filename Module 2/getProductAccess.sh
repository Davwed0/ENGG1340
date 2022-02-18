#! /bin/bash

target=`cat $1 | grep ./products/. | cut -f 1,4 | sort -k 1 | uniq `
echo $target


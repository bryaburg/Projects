#!/usr/bin/env bash

echo hello world > foo.txt

exec 3<>foo.txt
rm foo.txt
cat <&3

#!/bin/bash
set -ex

for Keycode in {10..48}
do
    xset r "$Keycode"
done

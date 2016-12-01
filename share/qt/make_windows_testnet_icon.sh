#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/wrapper_testnet.png
ICON_DST=../../src/qt/res/icons/wrapper_testnet.ico
convert ${ICON_SRC} -resize 16x16 wrapper_testnet-16.png
convert ${ICON_SRC} -resize 32x32 wrapper_testnet-32.png
convert ${ICON_SRC} -resize 48x48 wrapper_testnet-48.png
convert wrapper_testnet-16.png wrapper_testnet-32.png wrapper_testnet-48.png ${ICON_DST}

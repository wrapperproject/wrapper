#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/wrapper.png
ICON_DST=../../src/qt/res/icons/wrapper.ico
convert ${ICON_SRC} -resize 16x16 wrapper-16.png
convert ${ICON_SRC} -resize 32x32 wrapper-32.png
convert ${ICON_SRC} -resize 48x48 wrapper-48.png
convert wrapper-16.png wrapper-32.png wrapper-48.png ${ICON_DST}

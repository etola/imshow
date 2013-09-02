#
# package & author info
#
packagename := imshow
description := image display app
major_version := 0
minor_version := 1
tiny_version  := 0
# version := major_version . minor_version # deprecated
author := Engin Tola
licence := GPL v2.0 or higher distributed by FSF
#
# add you cpp cc files here
#
sources := main.cc
#
# output info
#
installdir := /home/tola/usr/local/kortex-apps
external_sources :=
external_libraries := kortex-ext-opencv
libdir := .
srcdir := .
includedir:= .
#
# custom flags
#
define_flags :=
custom_ld_flags :=
custom_cflags :=
#
# optimization & parallelization ?
#
optimize ?= false
parallelize ?= true
boost-thread ?= false
f77 ?= false
sse ?= true
multi-threading ?= false
profile ?= false
#........................................
specialize := true
platform := native
#........................................
compiler := g++
#........................................
include $(MAKEFILE_HEAVEN)/static-variables.makefile
include $(MAKEFILE_HEAVEN)/flags.makefile
include $(MAKEFILE_HEAVEN)/rules.makefile

# cmurphi protocol verification

TOP ?= $(shell git rev-parse --show-toplevel)

# Set these on command line to change number of caches and protocol file
M_FILE    ?= protocols/mesi.m
CFG_PROCS ?= 2

# CMurphi paths
CMURPHI_DIR     = $(TOP)/external/cmurphi
CMURPHI_SRC_DIR = $(CMURPHI_DIR)/src
CMURPHI         = $(CMURPHI_SRC_DIR)/mu
CMURPHI_INC_DIR = $(CMURPHI_DIR)/include

# compiler and settings
CXX             ?= g++
CXX_FLAGS        = -O3
LD_FLAGS         = -lm

# internal variables
M_FILE_NO_PATH  = $(notdir $(M_FILE))
M_FILE_BUILD    = build/$(M_FILE_NO_PATH)
CPP_FILE        = $(M_FILE_BUILD:.m=.cpp)
EXE             = $(M_FILE_NO_PATH:.m=)-$(CFG_PROCS)
TIMESTAMP      := $(shell date +%s)

.PHONY: dirs build dbg ndl run states clean clean-results zip-results cleanall
.DEFAULT: echo

echo:
	@$(CXX) --version
	@echo M_FILE: $(M_FILE)
	@echo clone cmurphi source with `make clone`
	@echo build cmurphi with `make mu`
	@echo run cmurphi with `make build run`

clone:
	git clone git@github.com:black-parrot/cmurphi.git $(CMURPHI_DIR)

mu: $(CMURPHI)

$(CMURPHI):
	make -C $(CMURPHI_SRC_DIR) mu

dirs:
	mkdir -p bin
	mkdir -p build
	mkdir -p results

build: $(CMURPHI) dirs
	cp $(M_FILE) $(M_FILE_BUILD)
	sed -i 's;CFG_PROCS;$(CFG_PROCS);g' $(M_FILE_BUILD)
	$(CMURPHI) -b -c --disk $(M_FILE_BUILD)
	$(CXX) $(CXX_FLAGS) -o bin/$(EXE) $(CPP_FILE) -I$(CMURPHI_INC_DIR) $(LD_FLAGS)

dbg:
	bin/$(EXE) -p -pr -tf -ta -tv -d ./ > run.log

ndl:
	bin/$(EXE) -ndl

run:
	bin/$(EXE) -p5 2>&1 | tee -i results/$(EXE)_$(TIMESTAMP).log

states:
	grep -Ei "rule|homenode\.state|Procs\[proc_[12]\]\.state" deadlock.trace > states.log

clean:
	make -C $(CMURPHI_SRC_DIR) clean
	rm -rf build bin

clean-results:
	rm -rf results

zip-results:
	tar czf cmurphi_results.tar.gz results/

cleanall: clean clean-results
	make -C $(CMURPHI_SRC_DIR) cleanall

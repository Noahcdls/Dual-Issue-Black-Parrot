# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtestbench.mk

default: simsc

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/nsantos/Desktop/black-parrot-sim/tools/install/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtestbench
# Module prefix (from --prefix)
VM_MODPREFIX = Vtestbench
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-std=c++14 \
	-I/home/nsantos/Desktop/black-parrot-sim/rtl/../tools/dromajo/include \
	-I/home/nsantos/Desktop/black-parrot-sim/rtl/install/include -I/home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/ \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-lpthread \
	-L/home/nsantos/Desktop/black-parrot-sim/rtl/../tools/install/lib -ldramsim3 -Wl,-rpath=/home/nsantos/Desktop/black-parrot-sim/rtl/install/lib \
	-L/home/nsantos/Desktop/black-parrot-sim/rtl/install/lib -ldromajo_cosim -Wl,-rpath=/home/nsantos/Desktop/black-parrot-sim/rtl/install/lib \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	bp_monitor \
	dromajo_cosim \
	bsg_mem_dma \
	bsg_nonsynth_dpi_clock_gen \
	test_bp \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	/home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common \
	/home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_mem \
	/home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test \


### Default rules...
# Include list of all generated classes
include Vtestbench_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

bp_monitor.o: /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dromajo_cosim.o: /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/dromajo_cosim.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
bsg_mem_dma.o: /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_mem/bsg_mem_dma.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
bsg_nonsynth_dpi_clock_gen.o: /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dpi_clock_gen.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
test_bp.o: test_bp.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
simsc: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-

LEADER_ENABLE = yes

SRC += matrix.c i2c_master.c
ifeq ($(strip $(DEBUG_MATRIX)), yes)
    OPT_DEFS += -DDEBUG_MATRIX
endif

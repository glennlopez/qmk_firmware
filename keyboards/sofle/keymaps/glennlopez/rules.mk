
OLED_DRIVER_ENABLE = yes
ENCODER_ENABLE = yes # uses a lot of mem
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = no
WPM_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes # uses a lot of mem
DYNAMIC_MACRO_SIZE = 250
TAP_DANCE_ENABLE = no # uses a lot of mem
LEADER_ENABLE = no
KEY_LOCK_ENABLE = no # uses a lot of mem


#Debug options
VERBOSE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

PIMORONI_TRACKBALL_ENABLE = yes
LTO_ENABLE = yes

SPLIT_KEYBOARD = yes
SPLIT_TRANSPORT = custom


ifeq ($(strip $(PIMORONI_TRACKBALL_ENABLE)), yes)
    SRC += pimoroni_trackball.c
    OPT_DEFS += -DPIMORONI_TRACKBALL_ENABLE
    POINTING_DEVICE_ENABLE := yes
	QUANTUM_LIB_SRC += transport.c serial.c i2c_master.c i2c_slave.c
endif

ifeq ($(PROMICRO), yes)
  BOOTLOADER = caterina
else ifeq ($(ELITEC), yes)
  BOOTLOADER = atmel-dfu
endif

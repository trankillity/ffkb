NKRO_ENABLE = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
# MOUSEKEY_ENABLE = yes

VPATH += keyboards/gboards
# SRC += features/casemodes.c

# SRC += trankillity.c

ifeq ($(strip $(RGB_MATRIX_LEDMAPS)), yes)
	SRC += features/rgb_matrix_ledmaps.c
	OPT_DEFS += -DRGB_MATRIX_LEDMAPS_ENABLED
endif

#
# Makefile for the linux kernel.
#
ifdef CONFIG_ARCH_SUN8IW1P1
PLATFORM=arisc_sun8iw1p1
endif

ifdef CONFIG_ARCH_SUN8IW3P1
PLATFORM=arisc_sun8iw3p1
endif

ifdef CONFIG_ARCH_SUN8IW5P1
PLATFORM=arisc_sun8iw5p1
endif

ifdef CONFIG_ARCH_SUN8IW6P1
PLATFORM=arisc_sun8iw6p1
endif

ifdef CONFIG_ARCH_SUN8IW7P1
PLATFORM=arisc_sun8iw7p1
endif

ifdef CONFIG_ARCH_SUN8IW9P1
PLATFORM=arisc_sun8iw9p1
endif

ifdef CONFIG_ARCH_SUN9IW1P1
PLATFORM=arisc_sun9iw1p1
endif

$(obj)/arisc_binary.o : $(obj)/$(PLATFORM).bin FORCE
obj-y=arisc_binary.o

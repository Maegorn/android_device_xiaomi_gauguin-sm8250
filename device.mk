#
# Copyright (C) 2022 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Overlays
DEVICE_PACKAGE_OVERLAYS += \
    $(LOCAL_PATH)/overlay

PRODUCT_PACKAGES += \
    SettingsOverlayM2007J17C \
    SettingsOverlayM2007J17G \
    SettingsOverlayM2007J17I

PRODUCT_ENFORCE_RRO_TARGETS := *

# Device uses high-density artwork where available
PRODUCT_AAPT_CONFIG := normal
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Boot animation
TARGET_SCREEN_HEIGHT := 2400
TARGET_SCREEN_WIDTH := 1080

PRODUCT_SHIPPING_API_LEVEL := 29

TARGET_BOARD_PLATFORM := lito
TARGET_HAS_FM := true

# Audio configs
PRODUCT_COPY_FILES += \
    $(call find-copy-subdir-files,*,$(LOCAL_PATH)/audio/,$(TARGET_COPY_OUT_VENDOR)/etc)
    
# Inherit from sm8250-common
$(call inherit-product, device/xiaomi/sm8250-common/common.mk)

# Inherit from vendor blobs
$(call inherit-product, vendor/xiaomi/gauguin/gauguin-vendor.mk)

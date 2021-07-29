/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t gauguininpro_info = {
    .hwc_value = "INDIA",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "gauguininpro",
    .marketname = "Mi 10i 5G",
    .model = "M2007J17I",
    .build_fingerprint = "Xiaomi/gauguininpro/gauguininpro:12/RKQ1.200826.002/V13.0.3.0.SJSINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t gauguin_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "gauguin",
    .marketname = "Mi 10T Lite",
    .model = "M2007J17G",
    .build_fingerprint = "Xiaomi/gauguin_global/gauguin:12/RKQ1.200826.002/V13.0.1.0.SJSMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t gauguinpro_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "gauguinpro",
    .marketname = "Redmi Note 9 Pro 5G",
    .model = "M2007J17C",
    .build_fingerprint = "Redmi/gauguinpro/gauguinpro:12/RKQ1.200826.002/V13.0.5.0.SJSCNXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    gauguininpro_info,
    gauguin_global_info,
    gauguinpro_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}

#pragma once

#ifndef COMMON_H
#define COMMON_H

#define STRINGIFY(x)   #x
#define TOSTRING(x)    STRINGIFY(x)

#define MAJOR_VERSION  0
#define MINOR_VERSION  3
#define REV_VERSION    0
#define BETA_VERSION   0
#define VERSION        "v" TOSTRING(MAJOR_VERSION) "." TOSTRING(MINOR_VERSION) "." TOSTRING(REV_VERSION)
#define WORKDIR        "sdmc:/NLTK"
#define TITLE          "NLTK"

//Title IDs
#define JPN_TID     0x0004000000086200
#define USA_TID     0x0004000000086300
#define EUR_TID     0x0004000000086400
#define KOR_TID     0x0004000000086500

#define JPN_WA_TID  0x0004000000198D00
#define USA_WA_TID  0x0004000000198E00
#define EUR_WA_TID  0x0004000000198F00
#define KOR_WA_TID  0x0004000000199000

#define ACRE_ID_MAX 214

#define TEXTURE_TRANSFER_FLAGS \
    (GX_TRANSFER_FLIP_VERT(0) | GX_TRANSFER_OUT_TILED(1) | GX_TRANSFER_RAW_COPY(0) | \
    GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8) | GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGBA8) | \
    GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_NO))

#endif
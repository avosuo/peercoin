// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2012-2013 The PPCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it
#define CLIENT_VERSION_MAJOR       0
#define CLIENT_VERSION_MINOR       6
#define CLIENT_VERSION_REVISION    4
#define CLIENT_VERSION_BUILD       0

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR 
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

// Stanislaw
#define PPCOIN_VERSION_MAJOR       0
#define PPCOIN_VERSION_MINOR       0
#define PPCOIN_VERSION_REVISION    0
#define PPCOIN_VERSION_BUILD       1

static const int PPCOIN_VERSION =
                           1000000 * PPCOIN_VERSION_MAJOR
                         +   10000 * PPCOIN_VERSION_MINOR
                         +     100 * PPCOIN_VERSION_REVISION
                         +       1 * PPCOIN_VERSION_BUILD;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60006;
static const int MIN_PROTO_VERSION = 209;
static const int CADDR_TIME_VERSION = 1;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif

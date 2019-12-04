// Copyright (c) 2019 The Dash Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "crypto/siphash.h"
#include "saltedhasher.h"
#include "random.h"

#include <limits>

SaltedHasherBase::SaltedHasherBase() : k0(GetRand(std::numeric_limits<uint64_t>::max())), k1(GetRand(std::numeric_limits<uint64_t>::max())) {}

SaltedHasherBase StaticSaltedHasher::s;

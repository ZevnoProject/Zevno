// Copyright (c) 2016-2020 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2020 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2017-2021 The Rubix project
// Copyright (c) 2020-2021 The CampusCash project
// Copyright (c) 2021 The Zevno project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"

/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 / 60; // 30 minutes
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 22400 * COIN; // premine 22,400 over 100 blocks = 2,240,000 ZEV
/** Standard block subsidy */
static const int64_t nBlockStandardReward = 2.5 * COIN; // total reward
/** Standard PoW block subsidy */
static const int64_t nBlockStandardPoWReward = 0.75 * COIN; // total reward
/** Standard PoS block subsidy */
static const int64_t nBlockStandardPoSReward = 0.45 * COIN; // total reward
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = (2 * 60); // Two Minute
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = (1 * 90); // One minute and a half (30sec)
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = (1 * 150); // Two and a half minutes (2.5min)
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** MNengine collateral */
static const int64_t MNengine_COLLATERAL = (1 * COIN);
/** MNengine pool values */
static const int64_t MNengine_POOL_MAX = (999 * COIN);
/** MasterNode required collateral */
inline int64_t MasternodeCollateral(int nHeight) { return 10000; } // 10 Thousand (10,000) ZEV required as collateral
/** MasterNode required collateral */
inline int64_t MasternodeCollateral_Tier_2(int nHeight) { return 1000000; } // 1 Million ZEV required as collateral (Tier 2)
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static const int nStakeMinConfirmations = 5;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 3; // 3-TXs | 30-Mined (FOUND IN MAIN.CPP)


#endif // BITCOIN_MINING_H

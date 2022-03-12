// Copyright (c) 2016-2021 The Danxome Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DANXOME_DEPLOYMENTINFO_H
#define DANXOME_DEPLOYMENTINFO_H

#include <consensus/params.h>

#include <string>

struct VBDeploymentInfo {
    /** Deployment name */
    const char *name;
    /** Whether GBT clients can safely ignore this rule in simplified usage */
    bool gbt_force;
};

extern const VBDeploymentInfo VersionBitsDeploymentInfo[Consensus::MAX_VERSION_BITS_DEPLOYMENTS];

std::string DeploymentName(Consensus::BuriedDeployment dep);

inline std::string DeploymentName(Consensus::DeploymentPos pos)
{
    assert(Consensus::ValidDeployment(pos));
    return VersionBitsDeploymentInfo[pos].name;
}

#endif // DANXOME_DEPLOYMENTINFO_H

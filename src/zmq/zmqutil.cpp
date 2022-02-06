// Copyright (c) 2014-2021 The Dahomey Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <zmq/zmqutil.h>

#include <logging.h>
#include <zmq.h>

#include <cerrno>
#include <string>

void zmqError(const std::string& str)
{
    LogPrint(BCLog::ZMQ, "zmq: Error: %s, msg: %s\n", str, zmq_strerror(errno));
}

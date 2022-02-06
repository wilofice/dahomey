// Copyright (c) 2011-2020 The Dahomey Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class DahomeyAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit DahomeyAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Dahomey address widget validator, checks for a valid dahomey address.
 */
class DahomeyAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit DahomeyAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

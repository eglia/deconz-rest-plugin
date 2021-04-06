/*
 * Copyright (c) 2021 dresden elektronik ingenieurtechnik gmbh.
 * All rights reserved.
 *
 * The software in this package is published under the terms of the BSD
 * style license a copy of which has been included with this distribution in
 * the LICENSE.txt file.
 *
 */

#ifndef PRODUCT_MATCH_H
#define PRODUCT_MATCH_H

#include <QString>

class Resource;

const QString R_GetProductId(Resource *resource);
bool isTuyaManufacturerName(const QString &manufacturer);

#endif // PRODUCT_MATCH_H

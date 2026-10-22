// SPDX-FileCopyrightText: 2026 ctrl32
// SPDX-License-Identifier: Apache-2.0

#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    Serial.printf("inovaea firmware %s\n", INOVAEA_VERSION);
}

void loop()
{
    delay(1000);
}

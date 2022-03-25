/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TimePeriod.h"

namespace oai::udr::model {

TimePeriod::TimePeriod() {
  m_MaxNumPeriod = 0;
  m_MaxNumPeriodIsSet = false;
}

TimePeriod::~TimePeriod() {}

void TimePeriod::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TimePeriod &o) {
  j = nlohmann::json();
  j["period"] = o.m_Period;
  if (o.maxNumPeriodIsSet())
    j["maxNumPeriod"] = o.m_MaxNumPeriod;
}

void from_json(const nlohmann::json &j, TimePeriod &o) {
  j.at("period").get_to(o.m_Period);
  if (j.find("maxNumPeriod") != j.end()) {
    j.at("maxNumPeriod").get_to(o.m_MaxNumPeriod);
    o.m_MaxNumPeriodIsSet = true;
  }
}

Periodicity TimePeriod::getPeriod() const { return m_Period; }
void TimePeriod::setPeriod(Periodicity const &value) { m_Period = value; }
int32_t TimePeriod::getMaxNumPeriod() const { return m_MaxNumPeriod; }
void TimePeriod::setMaxNumPeriod(int32_t const value) {
  m_MaxNumPeriod = value;
  m_MaxNumPeriodIsSet = true;
}
bool TimePeriod::maxNumPeriodIsSet() const { return m_MaxNumPeriodIsSet; }
void TimePeriod::unsetMaxNumPeriod() { m_MaxNumPeriodIsSet = false; }

} // namespace oai::udr::model
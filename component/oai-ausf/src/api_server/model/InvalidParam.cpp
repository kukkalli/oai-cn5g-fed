/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
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

#include "InvalidParam.h"

namespace oai {
namespace ausf_server {
namespace model {

InvalidParam::InvalidParam() {
  m_Param       = "";
  m_Reason      = "";
  m_ReasonIsSet = false;
}

InvalidParam::~InvalidParam() {}

void InvalidParam::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const InvalidParam& o) {
  j          = nlohmann::json();
  j["param"] = o.m_Param;
  if (o.reasonIsSet()) j["reason"] = o.m_Reason;
}

void from_json(const nlohmann::json& j, InvalidParam& o) {
  j.at("param").get_to(o.m_Param);
  if (j.find("reason") != j.end()) {
    j.at("reason").get_to(o.m_Reason);
    o.m_ReasonIsSet = true;
  }
}

std::string InvalidParam::getParam() const {
  return m_Param;
}
void InvalidParam::setParam(std::string const& value) {
  m_Param = value;
}
std::string InvalidParam::getReason() const {
  return m_Reason;
}
void InvalidParam::setReason(std::string const& value) {
  m_Reason      = value;
  m_ReasonIsSet = true;
}
bool InvalidParam::reasonIsSet() const {
  return m_ReasonIsSet;
}
void InvalidParam::unsetReason() {
  m_ReasonIsSet = false;
}

}  // namespace model
}  // namespace ausf_server
}  // namespace oai

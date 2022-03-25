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

#include "SmPolicyDnnDataPatch.h"

namespace oai::udr::model {

SmPolicyDnnDataPatch::SmPolicyDnnDataPatch() {
  m_Dnn = "";
  m_BdtRefIdsIsSet = false;
}

SmPolicyDnnDataPatch::~SmPolicyDnnDataPatch() {}

void SmPolicyDnnDataPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmPolicyDnnDataPatch &o) {
  j = nlohmann::json();
  j["dnn"] = o.m_Dnn;
  if (o.bdtRefIdsIsSet() || !o.m_BdtRefIds.empty())
    j["bdtRefIds"] = o.m_BdtRefIds;
}

void from_json(const nlohmann::json &j, SmPolicyDnnDataPatch &o) {
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("bdtRefIds") != j.end()) {
    j.at("bdtRefIds").get_to(o.m_BdtRefIds);
    o.m_BdtRefIdsIsSet = true;
  }
}

std::string SmPolicyDnnDataPatch::getDnn() const { return m_Dnn; }
void SmPolicyDnnDataPatch::setDnn(std::string const &value) { m_Dnn = value; }
std::map<std::string, std::string> &SmPolicyDnnDataPatch::getBdtRefIds() {
  return m_BdtRefIds;
}
void SmPolicyDnnDataPatch::setBdtRefIds(
    std::map<std::string, std::string> const &value) {
  m_BdtRefIds = value;
  m_BdtRefIdsIsSet = true;
}
bool SmPolicyDnnDataPatch::bdtRefIdsIsSet() const { return m_BdtRefIdsIsSet; }
void SmPolicyDnnDataPatch::unsetBdtRefIds() { m_BdtRefIdsIsSet = false; }

} // namespace oai::udr::model
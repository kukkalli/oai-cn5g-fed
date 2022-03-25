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
/*
 * SmPolicyDataPatch.h
 *
 * Contains the SM policy data for a given subscriber.
 */

#ifndef SmPolicyDataPatch_H_
#define SmPolicyDataPatch_H_

#include <map>
#include <nlohmann/json.hpp>
#include <vector>

#include "SmPolicySnssaiDataPatch.h"
#include "UsageMonData.h"

namespace oai::udr::model {

/// <summary>
/// Contains the SM policy data for a given subscriber.
/// </summary>
class SmPolicyDataPatch {
public:
  SmPolicyDataPatch();
  virtual ~SmPolicyDataPatch();

  void validate();

  /////////////////////////////////////////////
  /// SmPolicyDataPatch members

  /// <summary>
  ///
  /// </summary>
  std::map<std::string, UsageMonData> &getUmData();
  void setUmData(std::map<std::string, UsageMonData> const &value);
  bool umDataIsSet() const;
  void unsetUmData();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, SmPolicySnssaiDataPatch> &getSmPolicySnssaiData();
  void setSmPolicySnssaiData(
      std::map<std::string, SmPolicySnssaiDataPatch> const &value);
  bool smPolicySnssaiDataIsSet() const;
  void unsetSmPolicySnssaiData();

  friend void to_json(nlohmann::json &j, const SmPolicyDataPatch &o);
  friend void from_json(const nlohmann::json &j, SmPolicyDataPatch &o);

protected:
  std::map<std::string, UsageMonData> m_UmData;
  bool m_UmDataIsSet;
  std::map<std::string, SmPolicySnssaiDataPatch> m_SmPolicySnssaiData;
  bool m_SmPolicySnssaiDataIsSet;
};

} // namespace oai::udr::model

#endif /* SmPolicyDataPatch_H_ */

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
 * SmsManagementSubscriptionData.h
 *
 *
 */

#ifndef SmsManagementSubscriptionData_H_
#define SmsManagementSubscriptionData_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "TraceData.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class SmsManagementSubscriptionData {
public:
  SmsManagementSubscriptionData();
  virtual ~SmsManagementSubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// SmsManagementSubscriptionData members

  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  bool isMtSmsSubscribed() const;
  void setMtSmsSubscribed(bool const value);
  bool mtSmsSubscribedIsSet() const;
  void unsetMtSmsSubscribed();
  /// <summary>
  ///
  /// </summary>
  bool isMtSmsBarringAll() const;
  void setMtSmsBarringAll(bool const value);
  bool mtSmsBarringAllIsSet() const;
  void unsetMtSmsBarringAll();
  /// <summary>
  ///
  /// </summary>
  bool isMtSmsBarringRoaming() const;
  void setMtSmsBarringRoaming(bool const value);
  bool mtSmsBarringRoamingIsSet() const;
  void unsetMtSmsBarringRoaming();
  /// <summary>
  ///
  /// </summary>
  bool isMoSmsSubscribed() const;
  void setMoSmsSubscribed(bool const value);
  bool moSmsSubscribedIsSet() const;
  void unsetMoSmsSubscribed();
  /// <summary>
  ///
  /// </summary>
  bool isMoSmsBarringAll() const;
  void setMoSmsBarringAll(bool const value);
  bool moSmsBarringAllIsSet() const;
  void unsetMoSmsBarringAll();
  /// <summary>
  ///
  /// </summary>
  bool isMoSmsBarringRoaming() const;
  void setMoSmsBarringRoaming(bool const value);
  bool moSmsBarringRoamingIsSet() const;
  void unsetMoSmsBarringRoaming();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getSharedSmsMngDataIds();
  void setSharedSmsMngDataIds(std::vector<std::string> const &value);
  bool sharedSmsMngDataIdsIsSet() const;
  void unsetSharedSmsMngDataIds();
  /// <summary>
  ///
  /// </summary>
  TraceData getTraceData() const;
  void setTraceData(TraceData const &value);
  bool traceDataIsSet() const;
  void unsetTraceData();

  friend void to_json(nlohmann::json &j,
                      const SmsManagementSubscriptionData &o);
  friend void from_json(const nlohmann::json &j,
                        SmsManagementSubscriptionData &o);

protected:
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  bool m_MtSmsSubscribed;
  bool m_MtSmsSubscribedIsSet;
  bool m_MtSmsBarringAll;
  bool m_MtSmsBarringAllIsSet;
  bool m_MtSmsBarringRoaming;
  bool m_MtSmsBarringRoamingIsSet;
  bool m_MoSmsSubscribed;
  bool m_MoSmsSubscribedIsSet;
  bool m_MoSmsBarringAll;
  bool m_MoSmsBarringAllIsSet;
  bool m_MoSmsBarringRoaming;
  bool m_MoSmsBarringRoamingIsSet;
  std::vector<std::string> m_SharedSmsMngDataIds;
  bool m_SharedSmsMngDataIdsIsSet;
  TraceData m_TraceData;
  bool m_TraceDataIsSet;
};

} // namespace oai::udr::model

#endif /* SmsManagementSubscriptionData_H_ */

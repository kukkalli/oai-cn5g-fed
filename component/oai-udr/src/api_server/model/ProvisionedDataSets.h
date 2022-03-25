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
 * ProvisionedDataSets.h
 *
 *
 */

#ifndef ProvisionedDataSets_H_
#define ProvisionedDataSets_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "AccessAndMobilitySubscriptionData.h"
#include "LcsBroadcastAssistanceTypesData.h"
#include "LcsMoData.h"
#include "LcsPrivacyData.h"
#include "SessionManagementSubscriptionData.h"
#include "SmfSelectionSubscriptionData.h"
#include "SmsManagementSubscriptionData.h"
#include "SmsSubscriptionData.h"
#include "TraceData.h"
#include "V2xSubscriptionData.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class ProvisionedDataSets {
public:
  ProvisionedDataSets();
  virtual ~ProvisionedDataSets();

  void validate();

  /////////////////////////////////////////////
  /// ProvisionedDataSets members

  /// <summary>
  ///
  /// </summary>
  AccessAndMobilitySubscriptionData getAmData() const;
  void setAmData(AccessAndMobilitySubscriptionData const &value);
  bool amDataIsSet() const;
  void unsetAmData();
  /// <summary>
  ///
  /// </summary>
  SmfSelectionSubscriptionData getSmfSelData() const;
  void setSmfSelData(SmfSelectionSubscriptionData const &value);
  bool smfSelDataIsSet() const;
  void unsetSmfSelData();
  /// <summary>
  ///
  /// </summary>
  SmsSubscriptionData getSmsSubsData() const;
  void setSmsSubsData(SmsSubscriptionData const &value);
  bool smsSubsDataIsSet() const;
  void unsetSmsSubsData();
  /// <summary>
  ///
  /// </summary>
  std::vector<SessionManagementSubscriptionData> &getSmData();
  void setSmData(std::vector<SessionManagementSubscriptionData> const &value);
  bool smDataIsSet() const;
  void unsetSmData();
  /// <summary>
  ///
  /// </summary>
  TraceData getTraceData() const;
  void setTraceData(TraceData const &value);
  bool traceDataIsSet() const;
  void unsetTraceData();
  /// <summary>
  ///
  /// </summary>
  SmsManagementSubscriptionData getSmsMngData() const;
  void setSmsMngData(SmsManagementSubscriptionData const &value);
  bool smsMngDataIsSet() const;
  void unsetSmsMngData();
  /// <summary>
  ///
  /// </summary>
  LcsPrivacyData getLcsPrivacyData() const;
  void setLcsPrivacyData(LcsPrivacyData const &value);
  bool lcsPrivacyDataIsSet() const;
  void unsetLcsPrivacyData();
  /// <summary>
  ///
  /// </summary>
  LcsMoData getLcsMoData() const;
  void setLcsMoData(LcsMoData const &value);
  bool lcsMoDataIsSet() const;
  void unsetLcsMoData();
  /// <summary>
  ///
  /// </summary>
  LcsBroadcastAssistanceTypesData getLcsBcaData() const;
  void setLcsBcaData(LcsBroadcastAssistanceTypesData const &value);
  bool lcsBcaDataIsSet() const;
  void unsetLcsBcaData();
  /// <summary>
  ///
  /// </summary>
  V2xSubscriptionData getV2xData() const;
  void setV2xData(V2xSubscriptionData const &value);
  bool v2xDataIsSet() const;
  void unsetV2xData();

  friend void to_json(nlohmann::json &j, const ProvisionedDataSets &o);
  friend void from_json(const nlohmann::json &j, ProvisionedDataSets &o);

protected:
  AccessAndMobilitySubscriptionData m_AmData;
  bool m_AmDataIsSet;
  SmfSelectionSubscriptionData m_SmfSelData;
  bool m_SmfSelDataIsSet;
  SmsSubscriptionData m_SmsSubsData;
  bool m_SmsSubsDataIsSet;
  std::vector<SessionManagementSubscriptionData> m_SmData;
  bool m_SmDataIsSet;
  TraceData m_TraceData;
  bool m_TraceDataIsSet;
  SmsManagementSubscriptionData m_SmsMngData;
  bool m_SmsMngDataIsSet;
  LcsPrivacyData m_LcsPrivacyData;
  bool m_LcsPrivacyDataIsSet;
  LcsMoData m_LcsMoData;
  bool m_LcsMoDataIsSet;
  LcsBroadcastAssistanceTypesData m_LcsBcaData;
  bool m_LcsBcaDataIsSet;
  V2xSubscriptionData m_V2xData;
  bool m_V2xDataIsSet;
};

} // namespace oai::udr::model

#endif /* ProvisionedDataSets_H_ */

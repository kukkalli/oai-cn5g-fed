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
 * SessionManagementSubscriptionData.h
 *
 *
 */

#ifndef SessionManagementSubscriptionData_H_
#define SessionManagementSubscriptionData_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "DnnConfiguration.h"
#include "ExpectedUeBehaviourData.h"
#include "OdbPacketServices.h"
#include "Snssai.h"
#include "SuggestedPacketNumDl.h"
#include "TraceData.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class SessionManagementSubscriptionData {
public:
  SessionManagementSubscriptionData();
  virtual ~SessionManagementSubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// SessionManagementSubscriptionData members

  /// <summary>
  ///
  /// </summary>
  Snssai getSingleNssai() const;
  void setSingleNssai(Snssai const &value);
  /// <summary>
  /// A map (list of key-value pairs where Dnn, or optionally the Wildcard DNN,
  /// serves as key) of DnnConfigurations
  /// </summary>
  std::map<std::string, DnnConfiguration> &getDnnConfigurations();
  void
  setDnnConfigurations(std::map<std::string, DnnConfiguration> const &value);
  bool dnnConfigurationsIsSet() const;
  void unsetDnnConfigurations();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getInternalGroupIds();
  void setInternalGroupIds(std::vector<std::string> const &value);
  bool internalGroupIdsIsSet() const;
  void unsetInternalGroupIds();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, std::string> &getSharedVnGroupDataIds();
  void setSharedVnGroupDataIds(std::map<std::string, std::string> const &value);
  bool sharedVnGroupDataIdsIsSet() const;
  void unsetSharedVnGroupDataIds();
  /// <summary>
  ///
  /// </summary>
  std::string getSharedDnnConfigurationsId() const;
  void setSharedDnnConfigurationsId(std::string const &value);
  bool sharedDnnConfigurationsIdIsSet() const;
  void unsetSharedDnnConfigurationsId();
  /// <summary>
  ///
  /// </summary>
  OdbPacketServices getOdbPacketServices() const;
  void setOdbPacketServices(OdbPacketServices const &value);
  bool odbPacketServicesIsSet() const;
  void unsetOdbPacketServices();
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
  std::string getSharedTraceDataId() const;
  void setSharedTraceDataId(std::string const &value);
  bool sharedTraceDataIdIsSet() const;
  void unsetSharedTraceDataId();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, ExpectedUeBehaviourData> &getExpectedUeBehavioursList();
  void setExpectedUeBehavioursList(
      std::map<std::string, ExpectedUeBehaviourData> const &value);
  bool expectedUeBehavioursListIsSet() const;
  void unsetExpectedUeBehavioursList();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, SuggestedPacketNumDl> &getSuggestedPacketNumDlList();
  void setSuggestedPacketNumDlList(
      std::map<std::string, SuggestedPacketNumDl> const &value);
  bool suggestedPacketNumDlListIsSet() const;
  void unsetSuggestedPacketNumDlList();
  /// <summary>
  ///
  /// </summary>
  std::string getR3gppChargingCharacteristics() const;
  void setR3gppChargingCharacteristics(std::string const &value);
  bool r3gppChargingCharacteristicsIsSet() const;
  void unsetr_3gppChargingCharacteristics();

  friend void to_json(nlohmann::json &j,
                      const SessionManagementSubscriptionData &o);
  friend void from_json(const nlohmann::json &j,
                        SessionManagementSubscriptionData &o);

protected:
  Snssai m_SingleNssai;

  std::map<std::string, DnnConfiguration> m_DnnConfigurations;
  bool m_DnnConfigurationsIsSet;
  std::vector<std::string> m_InternalGroupIds;
  bool m_InternalGroupIdsIsSet;
  std::map<std::string, std::string> m_SharedVnGroupDataIds;
  bool m_SharedVnGroupDataIdsIsSet;
  std::string m_SharedDnnConfigurationsId;
  bool m_SharedDnnConfigurationsIdIsSet;
  OdbPacketServices m_OdbPacketServices;
  bool m_OdbPacketServicesIsSet;
  TraceData m_TraceData;
  bool m_TraceDataIsSet;
  std::string m_SharedTraceDataId;
  bool m_SharedTraceDataIdIsSet;
  std::map<std::string, ExpectedUeBehaviourData> m_ExpectedUeBehavioursList;
  bool m_ExpectedUeBehavioursListIsSet;
  std::map<std::string, SuggestedPacketNumDl> m_SuggestedPacketNumDlList;
  bool m_SuggestedPacketNumDlListIsSet;
  std::string m_r_3gppChargingCharacteristics;
  bool m_r_3gppChargingCharacteristicsIsSet;
};

} // namespace oai::udr::model

#endif /* SessionManagementSubscriptionData_H_ */

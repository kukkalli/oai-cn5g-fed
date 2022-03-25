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
 * MonitoringConfiguration.h
 *
 *
 */

#ifndef MonitoringConfiguration_H_
#define MonitoringConfiguration_H_

#include <nlohmann/json.hpp>
#include <string>

#include "AssociationType.h"
#include "DatalinkReportingConfiguration.h"
#include "EventType.h"
#include "LocationReportingConfiguration.h"
#include "LossConnectivityCfg.h"
#include "PduSessionStatusCfg.h"
#include "ReachabilityForSmsConfiguration.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class MonitoringConfiguration {
public:
  MonitoringConfiguration();
  virtual ~MonitoringConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// MonitoringConfiguration members

  /// <summary>
  ///
  /// </summary>
  EventType getEventType() const;
  void setEventType(EventType const &value);
  /// <summary>
  ///
  /// </summary>
  bool isImmediateFlag() const;
  void setImmediateFlag(bool const value);
  bool immediateFlagIsSet() const;
  void unsetImmediateFlag();
  /// <summary>
  ///
  /// </summary>
  LocationReportingConfiguration getLocationReportingConfiguration() const;
  void setLocationReportingConfiguration(
      LocationReportingConfiguration const &value);
  bool locationReportingConfigurationIsSet() const;
  void unsetLocationReportingConfiguration();
  /// <summary>
  ///
  /// </summary>
  AssociationType getAssociationType() const;
  void setAssociationType(AssociationType const &value);
  bool associationTypeIsSet() const;
  void unsetAssociationType();
  /// <summary>
  ///
  /// </summary>
  DatalinkReportingConfiguration getDatalinkReportCfg() const;
  void setDatalinkReportCfg(DatalinkReportingConfiguration const &value);
  bool datalinkReportCfgIsSet() const;
  void unsetDatalinkReportCfg();
  /// <summary>
  ///
  /// </summary>
  LossConnectivityCfg getLossConnectivityCfg() const;
  void setLossConnectivityCfg(LossConnectivityCfg const &value);
  bool lossConnectivityCfgIsSet() const;
  void unsetLossConnectivityCfg();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaximumLatency() const;
  void setMaximumLatency(int32_t const value);
  bool maximumLatencyIsSet() const;
  void unsetMaximumLatency();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaximumResponseTime() const;
  void setMaximumResponseTime(int32_t const value);
  bool maximumResponseTimeIsSet() const;
  void unsetMaximumResponseTime();
  /// <summary>
  ///
  /// </summary>
  int32_t getSuggestedPacketNumDl() const;
  void setSuggestedPacketNumDl(int32_t const value);
  bool suggestedPacketNumDlIsSet() const;
  void unsetSuggestedPacketNumDl();
  /// <summary>
  ///
  /// </summary>
  PduSessionStatusCfg getPduSessionStatusCfg() const;
  void setPduSessionStatusCfg(PduSessionStatusCfg const &value);
  bool pduSessionStatusCfgIsSet() const;
  void unsetPduSessionStatusCfg();
  /// <summary>
  ///
  /// </summary>
  ReachabilityForSmsConfiguration getReachabilityForSmsCfg() const;
  void setReachabilityForSmsCfg(ReachabilityForSmsConfiguration const &value);
  bool reachabilityForSmsCfgIsSet() const;
  void unsetReachabilityForSmsCfg();
  /// <summary>
  ///
  /// </summary>
  std::string getMtcProviderInformation() const;
  void setMtcProviderInformation(std::string const &value);
  bool mtcProviderInformationIsSet() const;
  void unsetMtcProviderInformation();
  /// <summary>
  ///
  /// </summary>
  std::string getAfId() const;
  void setAfId(std::string const &value);
  bool afIdIsSet() const;
  void unsetAfId();

  friend void to_json(nlohmann::json &j, const MonitoringConfiguration &o);
  friend void from_json(const nlohmann::json &j, MonitoringConfiguration &o);

protected:
  EventType m_EventType;

  bool m_ImmediateFlag;
  bool m_ImmediateFlagIsSet;
  LocationReportingConfiguration m_LocationReportingConfiguration;
  bool m_LocationReportingConfigurationIsSet;
  AssociationType m_AssociationType;
  bool m_AssociationTypeIsSet;
  DatalinkReportingConfiguration m_DatalinkReportCfg;
  bool m_DatalinkReportCfgIsSet;
  LossConnectivityCfg m_LossConnectivityCfg;
  bool m_LossConnectivityCfgIsSet;
  int32_t m_MaximumLatency;
  bool m_MaximumLatencyIsSet;
  int32_t m_MaximumResponseTime;
  bool m_MaximumResponseTimeIsSet;
  int32_t m_SuggestedPacketNumDl;
  bool m_SuggestedPacketNumDlIsSet;
  PduSessionStatusCfg m_PduSessionStatusCfg;
  bool m_PduSessionStatusCfgIsSet;
  ReachabilityForSmsConfiguration m_ReachabilityForSmsCfg;
  bool m_ReachabilityForSmsCfgIsSet;
  std::string m_MtcProviderInformation;
  bool m_MtcProviderInformationIsSet;
  std::string m_AfId;
  bool m_AfIdIsSet;
};

} // namespace oai::udr::model

#endif /* MonitoringConfiguration_H_ */

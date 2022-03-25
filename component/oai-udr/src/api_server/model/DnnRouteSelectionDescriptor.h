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
 * DnnRouteSelectionDescriptor.h
 *
 * Contains the route selector parameters (PDU session types, SSC modes and
 * ATSSS information) per DNN
 */

#ifndef DnnRouteSelectionDescriptor_H_
#define DnnRouteSelectionDescriptor_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "PduSessionType.h"
#include "SscMode.h"

namespace oai::udr::model {

/// <summary>
/// Contains the route selector parameters (PDU session types, SSC modes and
/// ATSSS information) per DNN
/// </summary>
class DnnRouteSelectionDescriptor {
public:
  DnnRouteSelectionDescriptor();
  virtual ~DnnRouteSelectionDescriptor();

  void validate();

  /////////////////////////////////////////////
  /// DnnRouteSelectionDescriptor members

  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<SscMode> &getSscModes();
  void setSscModes(std::vector<SscMode> const &value);
  bool sscModesIsSet() const;
  void unsetSscModes();
  /// <summary>
  ///
  /// </summary>
  std::vector<PduSessionType> &getPduSessTypes();
  void setPduSessTypes(std::vector<PduSessionType> const &value);
  bool pduSessTypesIsSet() const;
  void unsetPduSessTypes();
  /// <summary>
  /// Indicates whether MA PDU session establishment is allowed for this DNN.
  /// When set to value true MA PDU session establishment is allowed for this
  /// DNN.
  /// </summary>
  bool isAtsssInfo() const;
  void setAtsssInfo(bool const value);
  bool atsssInfoIsSet() const;
  void unsetAtsssInfo();

  friend void to_json(nlohmann::json &j, const DnnRouteSelectionDescriptor &o);
  friend void from_json(const nlohmann::json &j,
                        DnnRouteSelectionDescriptor &o);

protected:
  std::string m_Dnn;

  std::vector<SscMode> m_SscModes;
  bool m_SscModesIsSet;
  std::vector<PduSessionType> m_PduSessTypes;
  bool m_PduSessTypesIsSet;
  bool m_AtsssInfo;
  bool m_AtsssInfoIsSet;
};

} // namespace oai::udr::model

#endif /* DnnRouteSelectionDescriptor_H_ */

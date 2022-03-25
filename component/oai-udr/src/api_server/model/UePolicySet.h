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
 * UePolicySet.h
 *
 * Contains the UE policy data for a given subscriber.
 */

#ifndef UePolicySet_H_
#define UePolicySet_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "PlmnRouteSelectionDescriptor.h"
#include "PresenceInfo.h"
#include "UePolicySection.h"

namespace oai::udr::model {

/// <summary>
/// Contains the UE policy data for a given subscriber.
/// </summary>
class UePolicySet {
public:
  UePolicySet();
  virtual ~UePolicySet();

  void validate();

  /////////////////////////////////////////////
  /// UePolicySet members

  /// <summary>
  ///
  /// </summary>
  std::map<std::string, PresenceInfo> &getPraInfos();
  void setPraInfos(std::map<std::string, PresenceInfo> const &value);
  bool praInfosIsSet() const;
  void unsetPraInfos();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getSubscCats();
  void setSubscCats(std::vector<std::string> const &value);
  bool subscCatsIsSet() const;
  void unsetSubscCats();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, UePolicySection> &getUePolicySections();
  void setUePolicySections(std::map<std::string, UePolicySection> const &value);
  bool uePolicySectionsIsSet() const;
  void unsetUePolicySections();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getUpsis();
  void setUpsis(std::vector<std::string> const &value);
  bool upsisIsSet() const;
  void unsetUpsis();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, PlmnRouteSelectionDescriptor> &
  getAllowedRouteSelDescs();
  void setAllowedRouteSelDescs(
      std::map<std::string, PlmnRouteSelectionDescriptor> const &value);
  bool allowedRouteSelDescsIsSet() const;
  void unsetAllowedRouteSelDescs();
  /// <summary>
  ///
  /// </summary>
  bool isAndspInd() const;
  void setAndspInd(bool const value);
  bool andspIndIsSet() const;
  void unsetAndspInd();
  /// <summary>
  ///
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const &value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getOsIds();
  void setOsIds(std::vector<std::string> const &value);
  bool osIdsIsSet() const;
  void unsetOsIds();
  /// <summary>
  ///
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const &value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();

  friend void to_json(nlohmann::json &j, const UePolicySet &o);
  friend void from_json(const nlohmann::json &j, UePolicySet &o);

protected:
  std::map<std::string, PresenceInfo> m_PraInfos;
  bool m_PraInfosIsSet;
  std::vector<std::string> m_SubscCats;
  bool m_SubscCatsIsSet;
  std::map<std::string, UePolicySection> m_UePolicySections;
  bool m_UePolicySectionsIsSet;
  std::vector<std::string> m_Upsis;
  bool m_UpsisIsSet;
  std::map<std::string, PlmnRouteSelectionDescriptor> m_AllowedRouteSelDescs;
  bool m_AllowedRouteSelDescsIsSet;
  bool m_AndspInd;
  bool m_AndspIndIsSet;
  std::string m_Pei;
  bool m_PeiIsSet;
  std::vector<std::string> m_OsIds;
  bool m_OsIdsIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

} // namespace oai::udr::model

#endif /* UePolicySet_H_ */

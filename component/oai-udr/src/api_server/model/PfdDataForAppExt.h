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
 * PfdDataForAppExt.h
 *
 *
 */

#ifndef PfdDataForAppExt_H_
#define PfdDataForAppExt_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "PfdContent.h"
#include "PfdDataForApp.h"
#include "PfdDataForAppExt_allOf.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class PfdDataForAppExt {
public:
  PfdDataForAppExt();
  virtual ~PfdDataForAppExt();

  void validate();

  /////////////////////////////////////////////
  /// PfdDataForAppExt members

  /// <summary>
  ///
  /// </summary>
  std::string getApplicationId() const;
  void setApplicationId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<PfdContent> &getPfds();
  void setPfds(std::vector<PfdContent> const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getCachingTime() const;
  void setCachingTime(std::string const &value);
  bool cachingTimeIsSet() const;
  void unsetCachingTime();
  /// <summary>
  ///
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const &value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();

  friend void to_json(nlohmann::json &j, const PfdDataForAppExt &o);
  friend void from_json(const nlohmann::json &j, PfdDataForAppExt &o);

protected:
  std::string m_ApplicationId;

  std::vector<PfdContent> m_Pfds;

  std::string m_CachingTime;
  bool m_CachingTimeIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

} // namespace oai::udr::model

#endif /* PfdDataForAppExt_H_ */

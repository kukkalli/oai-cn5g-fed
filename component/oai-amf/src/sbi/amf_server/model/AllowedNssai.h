/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AllowedNssai.h
 *
 *
 */

#ifndef AllowedNssai_H_
#define AllowedNssai_H_

#include <vector>
#include "AccessType.h"
#include "AllowedSnssai.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class AllowedNssai {
 public:
  AllowedNssai();
  virtual ~AllowedNssai();

  void validate();

  /////////////////////////////////////////////
  /// AllowedNssai members

  /// <summary>
  ///
  /// </summary>
  std::vector<AllowedSnssai>& getAllowedSnssaiList();
  /// <summary>
  ///
  /// </summary>
  AccessType getAccessType() const;
  void setAccessType(AccessType const& value);

  friend void to_json(nlohmann::json& j, const AllowedNssai& o);
  friend void from_json(const nlohmann::json& j, AllowedNssai& o);

 protected:
  std::vector<AllowedSnssai> m_AllowedSnssaiList;

  AccessType m_AccessType;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* AllowedNssai_H_ */

/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SnssaiExtension.h
 *
 * Extensions to the Snssai data type
 */

#ifndef SnssaiExtension_H_
#define SnssaiExtension_H_

#include "SdRange.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace oai {
namespace nssf_server {
namespace model {

/// <summary>
/// Extensions to the Snssai data type
/// </summary>
class SnssaiExtension {
 public:
  SnssaiExtension();
  virtual ~SnssaiExtension() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const SnssaiExtension& rhs) const;
  bool operator!=(const SnssaiExtension& rhs) const;

  /////////////////////////////////////////////
  /// SnssaiExtension members

  /// <summary>
  ///
  /// </summary>
  std::vector<SdRange> getSdRanges() const;
  void setSdRanges(std::vector<SdRange> const& value);
  bool sdRangesIsSet() const;
  void unsetSdRanges();
  /// <summary>
  ///
  /// </summary>
  bool isWildcardSd() const;
  void setWildcardSd(bool const value);
  bool wildcardSdIsSet() const;
  void unsetWildcardSd();

  friend void to_json(nlohmann::json& j, const SnssaiExtension& o);
  friend void from_json(const nlohmann::json& j, SnssaiExtension& o);

 protected:
  std::vector<SdRange> m_SdRanges;
  bool m_SdRangesIsSet;
  bool m_WildcardSd;
  bool m_WildcardSdIsSet;
};

}  // namespace model
}  // namespace nssf_server
}  // namespace oai

#endif /* SnssaiExtension_H_ */

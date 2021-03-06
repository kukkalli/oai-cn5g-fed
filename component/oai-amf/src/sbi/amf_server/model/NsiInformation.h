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
 * NsiInformation.h
 *
 *
 */

#ifndef NsiInformation_H_
#define NsiInformation_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class NsiInformation {
 public:
  NsiInformation();
  virtual ~NsiInformation();

  void validate();

  /////////////////////////////////////////////
  /// NsiInformation members

  /// <summary>
  ///
  /// </summary>
  std::string getNrfId() const;
  void setNrfId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getNsiId() const;
  void setNsiId(std::string const& value);
  bool nsiIdIsSet() const;
  void unsetNsiId();

  friend void to_json(nlohmann::json& j, const NsiInformation& o);
  friend void from_json(const nlohmann::json& j, NsiInformation& o);

 protected:
  std::string m_NrfId;

  std::string m_NsiId;
  bool m_NsiIdIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* NsiInformation_H_ */
